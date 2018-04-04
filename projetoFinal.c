#include <stdio.h>
#include <stdlib.h>

/******** STRUCT *******/

typedef struct{ // geral
	char rua[50];
	int numero;
	int cep;
	char bairro[30];
	char cidade[30];
	int tipo;// = 1 vender, 0 alugar
	float p;// preço
}tGeral;

typedef struct{ // servico
	char ar[2];
	char net[2];
	char tv[2];
	char lavanderia[2];
	char limpeza[2];
	char recep[2];
}tServico;

typedef struct{ //casa
	int pavimento;
	int quartos;
	float areat;// area terreno
	float areac;// area construida
	tGeral Geral;
}tCasa;

typedef struct{ //apartamentos
	float area;
	int quartos;
	char posi[10];
	int andar;
	float cond;
	int vagas;
	tGeral Geral;
}tAp;//apartamentos

typedef struct{ //terrenos
	float area;
	tGeral Geral;
}tTer;//terrenos

typedef struct{ //flat
	float area;
	float cond;
	tServico s;
	tGeral Geral;
}tFlat;//Flat

typedef struct{ //studio
	float area;
	float cond;
	char piscina[2];
	char sauna[2];
	char ginastica[2];
	tServico s;
  	tGeral Geral;
}tStudio;//Studio

/******** TIPOS *******/

tCasa casa[100];
tAp Ap[100];
tTer terreno[100];
tFlat flat[100];
tStudio studio[100];

/******** FUNÇÕES CADASTRAMENTOS *******/

void Cads_Im(int cont[5]){
    int op;

    while(op!=6){
            system("cls");
            printf("\n\n        CADASTRAR             \n");
            printf("\n  ********************************\n");
            printf("  *  1-cadastrar casa            *\n");
            printf("  *  2-cadastrar apartamento     *\n");
            printf("  *  3-cadastrar terreno         *\n");
            printf("  *  4-cadastrar flat            *\n");
            printf("  *  5-cadastrar studio          *\n");
            printf("  *  6-voltar                    *\n");
            printf("  ********************************\n");
            printf("Qual opcao voce deseja acessar?\n ");
            scanf("%d",&op);

            switch(op){

                case 1:cont[0] = Cads_Cas();
                        break;
                case 2:cont[1] = Cads_Ap();
                        break;
                case 3:cont[2] = Cads_Ter();
                        break;
                case 4:cont[3] = Cads_Flat();
                        break;
                case 5:cont[4] = Cads_Studio();
                        break;

        }
    }
}

int Cads_Cas(){
    int i,n;

    system("cls");

    printf("\nQuantas casas deseja cadastrar? ");
    scanf("%d", &n);

    for(i=0;i<=n-1&&i<=99;i++){
        system("cls");

        printf("  ********************************\n");
        printf("  *       CADASTRO CASA          *\n");
        printf("  ********************************\n");

        printf("\n Casa numero %d \n",i+1);

        printf("\n Quantidade de pavimentos: ");
        scanf("%d",&casa[i].pavimento);

        printf("\n Quantidade de quartos: ");
        scanf("%d",&casa[i].quartos);

        printf("\n Area do terreno: ");
        scanf("%f",&casa[i].areat);

        printf("\n Area construida: ");
        scanf("%f",&casa[i].areac);

        printf("\n Rua: ");
        fgets (casa[i].Geral.rua, 50, stdin);
        fgets (casa[i].Geral.rua, 50, stdin);

        printf("\n Numero: ");
        scanf("%d",&casa[i].Geral.numero);

        printf("\n CEP: ");
        scanf("%d",&casa[i].Geral.cep);

        printf("\n Bairro: ");
        fgets (casa[i].Geral.bairro, 30, stdin);
        fgets (casa[i].Geral.bairro, 30, stdin);

        printf("\n Cidade: ");
        fgets (casa[i].Geral.cidade, 30, stdin);

        printf("\n Tipo (1 para Vender, 0 para Alugar): ");
        scanf("%d",&casa[i].Geral.tipo);

        printf("\n Preco(venda/aluguel): ");
        scanf("%f",&casa[i].Geral.p);


                    }
        return n;
}
int Cads_Ap(){
    int n,i;

    system("cls");

    printf("Quantos apartamentos deseja cadastrar? ");
    scanf("%d",&n);

    for(i=0;i<=n-1&&i<=99;i++){
        system("cls");

        printf("  ********************************\n");
        printf("  *      CADASTRO APARTAMENTO    *\n");
        printf("  ********************************\n");

        printf("\n Apartamento numero %d \n",i+1);

        printf("\n Area do Apartamento: ");
        scanf("%f",&Ap[i].area);

        printf("\n Quantidade de quartos: ");
        scanf("%d",&Ap[i].quartos);

        printf("\n Nascente Sul ou Norte: ");
        fgets (Ap[i].posi, 30, stdin);
        fgets (Ap[i].posi, 30, stdin);

        printf("\n Andar: ");
        scanf("%d",&Ap[i].andar);

        printf("\n Valor do condominio: ");
        scanf("%f",&Ap[i].cond);

        printf("\n Vagas de garagem: ");
        scanf("%d",&Ap[i].vagas);


        printf("\n Rua: ");
        fgets (Ap[i].Geral.rua, 50, stdin);
        fgets (Ap[i].Geral.rua, 50, stdin);

        printf("\n Numero: ");
        scanf("%d",&Ap[i].Geral.numero);

        printf("\n CEP: ");
        scanf("%d",&Ap[i].Geral.cep);


        printf("\n Bairro: ");
        fgets (Ap[i].Geral.bairro, 30, stdin);
        fgets (Ap[i].Geral.bairro, 30, stdin);

        printf("\n Cidade: ");
        fgets (Ap[i].Geral.cidade, 30, stdin);

        printf("\n Tipo (1 para Vender, 0 para Alugar): ");
        scanf("%d",&Ap[i].Geral.tipo);

        printf("\n Preco: ");
        scanf("%f",&Ap[i].Geral.p);


    }
    return n;
}
int Cads_Ter(){
    int n,i;

    system("cls");

    printf("Quantos terrenos deseja cadastrar?");
    scanf("%d", &n);

    for(i=0;i<=n-1&&i<=99;i++){
        system("cls");

        printf("  ********************************\n");
        printf("  *       CADASTRO TERRENO       *\n");
        printf("  ********************************\n");

        printf("\n Terreno numero %d \n",i+1);

        printf("\n Area: ");
        scanf("%f",&terreno[i].area);

        printf("\n Rua: ");
        fgets (terreno[i].Geral.rua, 50, stdin);
        fgets (terreno[i].Geral.rua, 50, stdin);

        printf("\n Numero: ");
        scanf("%d",&terreno[i].Geral.numero);

        printf("\n CEP: ");
        scanf("%d",&terreno[i].Geral.cep);

        printf("\n Bairro: ");
        fgets (terreno[i].Geral.bairro, 30, stdin);
        fgets (terreno[i].Geral.bairro, 30, stdin);

        printf("\n Cidade: ");
        fgets (terreno[i].Geral.cidade, 30, stdin);

        printf("\n Tipo (1 para Vender, 0 para Alugar): ");
        scanf("%d",&terreno[i].Geral.tipo);

        printf("\n Preco: ");
        scanf("%f",&terreno[i].Geral.p);

            }
            return n;
}
int Cads_Flat(){

    int n,i;

    system("cls");

    printf("Quantos flat deseja cadastrar?");
    scanf("%d", &n);

    for(i=0;i<=n-1&&i<=99;i++){
        system("cls");

        printf("  ********************************\n");
        printf("  *         CADASTRO FLAT        *\n");
        printf("  ********************************\n");

        printf("\n Flat numero %d \n",i+1);

        printf("\n Area do Flat: ");
        scanf("%f",&flat[i].area);

        printf("\n Valor do condominio: ");
        scanf("%f",&flat[i].cond);

        printf("\n ar-condicionado [s/n]: ");
        fgets (flat[i].s.ar, 2, stdin);
        fgets (flat[i].s.ar, 2, stdin);

        printf("\n Internet [s/n]: ");
        fgets (flat[i].s.net, 2, stdin);
        fgets (flat[i].s.net, 2, stdin);

        printf("\n tv a cabo [s/n]: ");
        fgets (flat[i].s.tv, 2, stdin);
        fgets (flat[i].s.tv, 2, stdin);

        printf("\n servico de lavanderia [s/n]: ");
        fgets (flat[i].s.lavanderia, 2, stdin);
        fgets (flat[i].s.lavanderia, 2, stdin);

        printf("\n recepcao 24 hrs [s/n]: ");
        fgets (flat[i].s.recep, 2, stdin);
        fgets (flat[i].s.recep, 2, stdin);

        printf("\n Rua: ");
        fgets (flat[i].Geral.rua, 30, stdin);
        fgets (flat[i].Geral.rua, 30, stdin);

        printf("\n Numero: ");
        scanf("%d",&flat[i].Geral.numero);

        printf("\n CEP: ");
        scanf("%d",&flat[i].Geral.cep);

        printf("\n Bairro: ");
        fgets (flat[i].Geral.bairro, 30, stdin);
        fgets (flat[i].Geral.bairro, 30, stdin);

        printf("\n Cidade: ");
        fgets (flat[i].Geral.cidade, 30, stdin);

        printf("\n Tipo (1 para Vender, 0 para Alugar): ");
        scanf("%d",&flat[i].Geral.tipo);

        printf("\n Preco: ");
        scanf("%f",&flat[i].Geral.p);

            }
            return n;


}
int Cads_Studio(){
    int i,n;

    system("cls");

    printf("Quantos studios deseja cadastrar?");
    scanf("%d",&n);

    for(i=0;i<=n-1&&i<=99;i++){

        system("cls");

        printf("  ********************************\n");
        printf("  *        CADASTRO STUDIO       *\n");
        printf("  ********************************\n");

        printf("\n Studio numero %d \n",i+1);

        printf("\n Area do Studio: ");
        scanf("%f",&studio[i].area);

        printf("\n Valor do condominio: ");
        scanf("%f",&studio[i].cond);

        printf("\n Piscina [s/n]: ");
        fgets (studio[i].piscina, 2, stdin);
        fgets (studio[i].piscina, 2, stdin);

        printf("\n Sauna [s/n]: ");
        fgets (studio[i].sauna, 2, stdin);
        fgets (studio[i].sauna, 2, stdin);

        printf("\n Sala de ginastica [s/n]: ");
        fgets (studio[i].ginastica, 2, stdin);
        fgets (studio[i].ginastica, 2, stdin);

        printf("\n Ar-condicionado [s/n]: ");
        fgets (studio[i].s.ar, 2, stdin);
        fgets (studio[i].s.ar, 2, stdin);

        printf("\n Internet [s/n]: ");
        fgets (studio[i].s.net, 2, stdin);
        fgets (studio[i].s.net, 2, stdin);

        printf("\n TV a cabo [s/n]: ");
        fgets (studio[i].s.tv, 2, stdin);
        fgets (studio[i].s.tv, 2, stdin);

        printf("\n Servico de lavanderia [s/n]: ");
        fgets (studio[i].s.lavanderia, 2, stdin);
        fgets (studio[i].s.lavanderia, 2, stdin);

        printf("\n Recepcao 24 hrs [s/n]: ");
        fgets (studio[i].s.recep, 2, stdin);
        fgets (studio[i].s.recep, 2, stdin);

        printf("\n Rua: ");
        fgets (studio[i].Geral.rua, 50, stdin);
        fgets (studio[i].Geral.rua, 50, stdin);

        printf("\n Numero: ");
        scanf("%d",&studio[i].Geral.numero);

        printf("\n CEP: ");
        scanf("%d",&studio[i].Geral.cep);

        printf("\n Bairro: ");
        fgets (studio[i].Geral.bairro, 30, stdin);
        fgets (studio[i].Geral.bairro, 30, stdin);

        printf("\n Cidade: ");
        fgets (studio[i].Geral.cidade, 30, stdin);
        fgets (studio[i].Geral.cidade, 30, stdin);

        printf("\n Tipo (1 para Vender, 0 para Alugar): ");
        scanf("%d",&studio[i].Geral.tipo);

        printf("\n Preco: ");
        scanf("%f",&studio[i].Geral.p);

    }
    return n;

}

/******** FUNÇÕES CONSULTA *******/

void Cons_Im(int cont[5]){
    int op;

	while(op!=8){
            system("cls");
            printf("\n\n                        CONSULTA                           \n");
            printf("\n ****************************************************************");
            printf("\n *1-Imoveis disponiveis                                         *");
            printf("\n *2-Imoveis por tipo(casa,apartamento, terreno, flats e studios)*");
            printf("\n *3-Imoveis para vender por tipo                                *");
            printf("\n *4-Imoveis para alugar por tipo                                *");
            printf("\n *5-Imoveis para vender por bairro                              *");
            printf("\n *6-Imoveis para alugar por bairro                              *");
            printf("\n *7-Imoveis por cidade                                          *");
            printf("\n *8-Voltar                                                      *");
            printf("\n ****************************************************************");
            printf("\n Qual opcao voce deseja acessar? \n");
            scanf("%d",&op);

            switch(op){

                case 1:Cons_Disp(cont);
                    break;
                case 2:Cons_Tipo(cont);
                    break;
                case 3:Cons_Vend(cont);
                    break;
                case 4:Cons_Alug(cont);
                    break;
                case 5:Cons_Vend_bair(cont);
                    break;
                case 6:Cons_Alug_bair(cont);
                    break;
                case 7:Cons_Cid(cont);
                    break;

            }
            printf("%d", op);
	}


}

void Cons_Disp(int c[5]){
    system("cls");
	printf("\nCasas disponiveis :%d",c[0]);
	printf("\nApartamentos disponiveis :%d",c[1]);
	printf("\nTerrenos disponiveis :%d",c[2]);
	printf("\nFlats disponiveis :%d",c[3]);
	printf("\nStudios disponiveis :%d\n",c[4]);
    system("pause");
    }

void Cons_Tipo(int con[5]){

    int consul;

    while(consul != 6){
            system("cls");
            printf("\n        Imoveis por tipo \n");
            printf("\n  ********************************");
            printf("\n  *1-Casas                       *");
            printf("\n  *2-Apartamentos                *");
            printf("\n  *3-Terrenos                    *");
            printf("\n  *4-Flats                       *");
            printf("\n  *5-Studio                      *");
            printf("\n  *6-Voltar\n                    *");
            printf("\n  ********************************\n");
            printf("\nO que voce deseja consultar?\n");
            scanf("%d", &consul);

            switch(consul){

                case 1:Cons_Tipo_Cas(con[0]);
                        break;
                case 2:Cons_Tipo_Apt(con[1]);
                        break;
                case 3:Cons_Tipo_Ter(con[2]);
                        break;
                case 4:Cons_Tipo_Flat(con[3]);
                        break;
                case 5:Cons_Tipo_Studio(con[4]);
                        break;


        }
    }
}

void Cons_Tipo_Cas(int c){

    int i;
    system("cls");
    for(i=0;i<=c-1;i++){

                    printf("\n Casa numero %d \n",i+1);

                    printf("\n Quantidade de pavimentos:%d",casa[i].pavimento);
                    printf("\n Quantidade de quartos:%d ",casa[i].quartos);
                    printf("\n Area do terreno:%.2f m2 ",casa[i].areat);
                    printf("\n Area construida:%.2f m2 ",casa[i].areac);
                    printf("\n Rua:%s ",casa[i].Geral.rua);
                    printf("Numero:%d ",casa[i].Geral.numero);
                    printf("\n CEP:%d ",casa[i].Geral.cep);
                    printf("\n Bairro:%s ",casa[i].Geral.bairro);
                    printf("Cidade:%s ",casa[i].Geral.cidade);
                    printf("tipo (1 para Vender, 2 para Alugar):%d ",casa[i].Geral.tipo);
                    printf("\n Preco(venda/aluguel): R$ %.2f  \n",casa[i].Geral.p);

    }
 system("pause");
}
void Cons_Tipo_Apt(int c){

    int i;
    system("cls");
    for(i=0;i<=c-1;i++){

                    printf("\n Apartamento numero %d \n",i+1);
                    printf("\n Area do Apartamento: %.2f m2 ",Ap[i].area);
                    printf("\n Quantidade de quartos:%d ",Ap[i].quartos);
                    printf("\n Nascente Sul ou Norte:%d ",Ap[i].posi);
                    printf("\n Andar:%d ",Ap[i].andar);
                    printf("\n Valor do condominio: R$ %.2f ",Ap[i].cond);
                    printf("\n Vagas de garagem: %d",Ap[i].vagas);
                    printf("\n Rua:%s ",Ap[i].Geral.rua);
                    printf("Numero:%d ",Ap[i].Geral.numero);
                    printf("\n CEP:%d ",Ap[i].Geral.cep);
                    printf("\n Bairro:%s ",Ap[i].Geral.bairro);
                    printf("Cidade:%s ",Ap[i].Geral.cidade);
                    printf("Tipo (1 para Vender, 2 para Alugar):%d \n",Ap[i].Geral.tipo);
                    printf("\n Preco: R$ %.2f \n",Ap[i].Geral.p);
    }
 system("pause");
}
void Cons_Tipo_Ter(int c){

    int i;
    system("cls");

    for(i=0;i<=c-1;i++){

                    printf("\n Terreno numero %d \n",i+1);

                    printf("\n Area:%.2f m2 ",terreno[i].area);
                    printf("\n Rua:%s ",terreno[i].Geral.rua);
                    printf("\n Numero:%d ",terreno[i].Geral.numero);
                    printf("\n CEP:%d ",terreno[i].Geral.cep);
                    printf("\n Bairro: s",terreno[i].Geral.bairro);
                    printf("\n Cidade:%s ",terreno[i].Geral.cidade);
                    printf("\n Tipo (1 para Vender, 2 para Alugar):%d \n",terreno[i].Geral.tipo);
                    printf("\n Preco: R$ %.2f ",terreno[i].Geral.p);
    }
 system("pause");
}
void Cons_Tipo_Flat(int c){

    int i;
    system("cls");
    for(i=0;i<=c-1;i++){

                    printf("\n Flat numero %d \n",i+1);

                    printf("\n Area do Flat: %.2f m2",flat[i].area);
                    printf("\n Valor do condominio: R$ %.2f ",flat[i].cond);
                    printf("\n Ar-condicionado [s/n]: %s",flat[i].s.ar);
                    printf("\n Internet [s/n]:%s ",flat[i].s.net);
                    printf("\n TV a cabo [s/n]:%s ",flat[i].s.tv);
                    printf("\n Servico de lavanderia [s/n]:%s ",flat[i].s.lavanderia);
                    printf("\n Recepcao 24 hrs [s/n]:%s ",flat[i].s.recep);
                    printf("\n Rua:%s",flat[i].Geral.rua);
                    printf("\n Numero:%d ",flat[i].Geral.numero);
                    printf("\n CEP:%d ",flat[i].Geral.cep);
                    printf("\n Bairro:%s ",flat[i].Geral.bairro);
                    printf("\n Cidade:%s ",flat[i].Geral.cidade);
                    printf("\n Tipo (1 para Vender, 2 para Alugar):%d \n",flat[i].Geral.tipo);
                    printf("\n Preco: R$ %.2f ",flat[i].Geral.p);

    }
 system("pause");
}
void Cons_Tipo_Studio(int c){

    int i;
    system("cls");
    for(i=0;i<=c-1;i++){

                    printf("\n Studio numero %d \n",i+1);

                    printf("\n Area do Studio:%.2f m2 ",studio[i].area);
                    printf("\n Valor do condominio: R$ %.2f ",studio[i].cond);
                    printf("\n Piscina [s/n]:%s ",studio[i].piscina);
                    printf("\n Sauna [s/n]:%s ",studio[i].sauna);
                    printf("\n Sala de ginastica [s/n]:%s ",studio[i].ginastica);
                    printf("\n Ar-condicionado [s/n]:%s ",studio[i].s.ar);
                    printf("\n Internet [s/n]:%s ",studio[i].s.net);
                    printf("\n TV a cabo [s/n]:%s ",studio[i].s.tv);
                    printf("\n Servico de lavanderia [s/n]:%s ",studio[i].s.lavanderia);
                    printf("\n Recepcao 24 hrs [s/n]:%s ",studio[i].s.recep);
                    printf("\n Rua:%s ",studio[i].Geral.rua);
                    printf("\n Numero:%d ",studio[i].Geral.numero);
                    printf("\n CEP:%d ",studio[i].Geral.cep);
                    printf("\n Bairro:%s",studio[i].Geral.bairro);
                    printf("\n Cidade:%s ",studio[i].Geral.cidade);
                    printf("\n Tipo (1 para Vender, 2 para Alugar):%d \n",studio[i].Geral.tipo);
                    printf("\n Preco: R$ %.2f ",studio[i].Geral.p);
    }
 system("pause");
}

void Cons_Vend(int con[5]){

    int consul;

    while(consul != 6){
            system("cls");
            printf("\n   Imoveis para vender por tipo   \n");
            printf("\n  ********************************");
            printf("\n  *1-Casas                       *");
            printf("\n  *2-Apartamentos                *");
            printf("\n  *3-Terrenos                    *");
            printf("\n  *4-Flats                       *");
            printf("\n  *5-Studio                      *");
            printf("\n  *6-Voltar\n                    *");
            printf("\n  ********************************\n");
            printf("\nO que voce deseja consultar?\n");
            scanf("%d", &consul);

            switch(consul){

                case 1:Cons_Vend_Cas(con[0]);
                        break;
                case 2:Cons_Vend_Apt(con[1]);
                        break;
                case 3:Cons_Vend_Ter(con[2]);
                        break;
                case 4:Cons_Vend_Flat(con[3]);
                        break;
                case 5:Cons_Vend_Studio(con[4]);
                        break;


        }
    }
}

void Cons_Vend_Cas(int c){

    int i;
    system("cls");
    for(i=0;i<=c-1;i++){

        if(casa[i].Geral.tipo){


                    printf("\n Casa numero %d \n",i+1);

                    printf("\n Quantidade de pavimentos:%d",casa[i].pavimento);
                    printf("\n Quantidade de quartos:%d ",casa[i].quartos);
                    printf("\n Area do terreno:%.2f m2 ",casa[i].areat);
                    printf("\n Area construida:%.2f m2 ",casa[i].areac);
                    printf("\n Rua:%s ",casa[i].Geral.rua);
                    printf("\n Numero:%d ",casa[i].Geral.numero);
                    printf("\n CEP:%d ",casa[i].Geral.cep);
                    printf("\n Bairro:%s ",casa[i].Geral.bairro);
                    printf("\n Cidade:%s ",casa[i].Geral.cidade);

                    printf("\n Preco(Venda/Aluguel): R$ %.2f ",casa[i].Geral.p);

        }
    }
 system("pause");
}
void Cons_Vend_Apt(int c){

    int i;
    system("cls");
    for(i=0;i<=c-1;i++){
        if(Ap[i].Geral.tipo){

                    printf("\n Apartamento numero %d \n",i+1);
                    printf("\n Area do Apartamento: %.2f m2 ",Ap[i].area);
                    printf("\n Quantidade de quartos:%d ",Ap[i].quartos);
                    printf("\n Nascente Sul ou Norte:%d ",Ap[i].posi);
                    printf("\n Andar:%d ",Ap[i].andar);
                    printf("\n Valor do condominio: R$ %.2f ",Ap[i].cond);
                    printf("\n Vagas de garagem: %d",Ap[i].vagas);
                    printf("\n Rua:%s ",Ap[i].Geral.rua);
                    printf("\n Numero:%d ",Ap[i].Geral.numero);
                    printf("\n CEP:%d ",Ap[i].Geral.cep);
                    printf("\n Bairro:%s ",Ap[i].Geral.bairro);
                    printf("\n Cidade:%s ",Ap[i].Geral.cidade);

                    printf("\n Preco: R$ %.2f ",Ap[i].Geral.p);
        }
    }
 system("pause");
}
void Cons_Vend_Ter(int c){

    int i;
    system("cls");
    for(i=0;i<=c-1;i++){
        if(terreno[i].Geral.tipo){

                    printf("\n Terreno numero %d \n",i+1);

                    printf("\n Area:%.2f m2 ",terreno[i].area);
                    printf("\n Rua:%s ",terreno[i].Geral.rua);
                    printf("\n Numero:%d ",terreno[i].Geral.numero);
                    printf("\n CEP:%d ",terreno[i].Geral.cep);
                    printf("\n Bairro: s",terreno[i].Geral.bairro);
                    printf("\n Cidade:%s ",terreno[i].Geral.cidade);

                    printf("\n Preco: R$ %.2f ",terreno[i].Geral.p);

        }
    }
 system("pause");
}
void Cons_Vend_Flat(int c){

    int i;
    system("cls");
    for(i=0;i<=c-1;i++){
        if(flat[i].Geral.tipo){

                     printf("\n Flat numero %d \n",i+1);

                    printf("\n Area do Flat: %.2f m2",flat[i].area);
                    printf("\n Valor do condominio: R$ %.2f ",flat[i].cond);
                    printf("\n Ar-condicionado [s/n]: %s",flat[i].s.ar);
                    printf("\n Internet [s/n]:%s ",flat[i].s.net);
                    printf("\n TV a cabo [s/n]:%s ",flat[i].s.tv);
                    printf("\n Servico de lavanderia [s/n]:%s ",flat[i].s.lavanderia);
                    printf("\n Recepcao 24 hrs [s/n]:%s ",flat[i].s.recep);
                    printf("\n Rua:%s",flat[i].Geral.rua);
                    printf("\n Numero:%d ",flat[i].Geral.numero);
                    printf("\n CEP:%d ",flat[i].Geral.cep);
                    printf("\n Bairro:%s ",flat[i].Geral.bairro);
                    printf("\n Cidade:%s ",flat[i].Geral.cidade);

                    printf("\n Preco: R$ %.2f ",flat[i].Geral.p);

        }
    }
 system("pause");
}
void Cons_Vend_Studio(int c){

    int i;
    system("cls");
    for(i=0;i<=c-1;i++){
        if(studio[i].Geral.tipo){

                    printf("\n Studio numero %d \n",i+1);

                    printf("\n Area do Studio:%.2f m2",studio[i].area);
                    printf("\n Valor do condominio: R$ %.2f ",studio[i].cond);
                    printf("\n Piscina [s/n]:%s ",studio[i].piscina);
                    printf("\n Sauna [s/n]:%s ",studio[i].sauna);
                    printf("\n Sala de ginastica [s/n]:%s ",studio[i].ginastica);
                    printf("\n Ar-condicionado [s/n]:%s ",studio[i].s.ar);
                    printf("\n Internet [s/n]:%s ",studio[i].s.net);
                    printf("\n TV a cabo [s/n]:%s ",studio[i].s.tv);
                    printf("\n Servico de lavanderia [s/n]:%s ",studio[i].s.lavanderia);
                    printf("\n Recepcao 24 hrs [s/n]:%s ",studio[i].s.recep);
                    printf("\n Rua:%s ",studio[i].Geral.rua);
                    printf("\n Numero:%d ",studio[i].Geral.numero);
                    printf("\n CEP:%d ",studio[i].Geral.cep);

                    printf("\n Cidade:%s ",studio[i].Geral.cidade);

                    printf("\n Preco:R$ %.2f ",studio[i].Geral.p);

        }
    }
 system("pause");
}

void Cons_Alug(int con[5]){

    int consul;

    while(consul != 6){
            system("cls");
            printf("\n   Imoveis para alugar por tipo  \n");
            printf("\n  ********************************");
            printf("\n  *1-Casas                       *");
            printf("\n  *2-Apartamentos                *");
            printf("\n  *3-Terrenos                    *");
            printf("\n  *4-Flats                       *");
            printf("\n  *5-Studio                      *");
            printf("\n  *6-Voltar\n                    *");
            printf("\n  ********************************\n");
            printf("\nO que voce deseja consultar?\n");
            scanf("%d", &consul);

            switch(consul){

                case 1:Cons_Alug_Cas(con[0]);
                        break;
                case 2:Cons_Alug_Apt(con[1]);
                        break;
                case 3:Cons_Alug_Ter(con[2]);
                        break;
                case 4:Cons_Alug_Flat(con[3]);
                        break;
                case 5:Cons_Alug_Studio(con[4]);
                        break;


        }
    }
}

void Cons_Alug_Cas(int c){

    int i;
    system("cls");
    for(i=0;i<=c-1;i++){
        if((casa[i].Geral.tipo==0)){

                    printf("\n Casa numero %d \n",i+1);

                    printf("\n Quantidade de pavimentos:%d \n",casa[i].pavimento);
                    printf("\n Quantidade de quartos:%d \n",casa[i].quartos);
                    printf("\n Area do terreno:%.2f m2 \n",casa[i].areat);
                    printf("\n Area construida:%.2f m2 \n",casa[i].areac);
                    printf("\n Rua:%s \n",casa[i].Geral.rua);
                    printf("\n Numero:%d \n",casa[i].Geral.numero);
                    printf("\n CEP:%d \n",casa[i].Geral.cep);
                    printf("\n Bairro:%s \n",casa[i].Geral.bairro);
                    printf("\n Cidade:%s \n",casa[i].Geral.cidade);

                    printf("\n Preco(venda/aluguel): R$ %.2f \n",casa[i].Geral.p);

        }
    }
 system("pause");
}
void Cons_Alug_Apt(int c){

    int i;
    system("cls");
    for(i=0;i<=c-1;i++){
        if((Ap[i].Geral.tipo==0)){

                    printf("\n Apartamento numero %d \n",i+1);
                    printf("\n Area do Apartamento: %.2f m2 \n",Ap[i].area);
                    printf("\n Quantidade de quartos:%d \n",Ap[i].quartos);
                    printf("\n Nascente Sul ou Norte:%d \n",Ap[i].posi);
                    printf("\n Andar:%d \n",Ap[i].andar);
                    printf("\n Valor do condominio: R$ %.2f \n",Ap[i].cond);
                    printf("\n Vagas de garagem: %d \n",Ap[i].vagas);
                    printf("\n Rua:%s \n",Ap[i].Geral.rua);
                    printf("\n Numero:%d \n",Ap[i].Geral.numero);
                    printf("\n CEP:%d \n",Ap[i].Geral.cep);
                    printf("\n Bairro:%s \n",Ap[i].Geral.bairro);
                    printf("\n Cidade:%s \n",Ap[i].Geral.cidade);

                    printf("\n Preco: R$ %.2f \n",Ap[i].Geral.p);
        }
    }
 system("pause");
}
void Cons_Alug_Ter(int c){

    int i;
    system("cls");
    for(i=0;i<=c-1;i++){
        if((terreno[i].Geral.tipo==0)){

                    printf("\n Terreno numero %d \n",i+1);

                    printf("\n Area:%.2f m2 ",terreno[i].area);
                    printf("\n Rua:%s ",terreno[i].Geral.rua);
                    printf("\n Numero:%d ",terreno[i].Geral.numero);
                    printf("\n CEP:%d ",terreno[i].Geral.cep);
                    printf("\n Bairro:%s ",terreno[i].Geral.bairro);
                    printf("\n Cidade:%s ",terreno[i].Geral.cidade);

                    printf("\n Preco: R$ %.2f ",terreno[i].Geral.p);

        }
    }
 system("pause");
}
void Cons_Alug_Flat(int c){

    int i;
    system("cls");
    for(i=0;i<=c-1;i++){
        if((flat[i].Geral.tipo==0)){

                     printf("\n Flat numero %d \n",i+1);

                    printf("\n Area do Flat: %.2f m2 ",flat[i].area);
                    printf("\n Valor do condominio: R$ %.2f ",flat[i].cond);
                    printf("\n ar-condicionado [s/n]: %s",flat[i].s.ar);
                    printf("\n Internet [s/n]:%s ",flat[i].s.net);
                    printf("\n tv a cabo [s/n]:%s ",flat[i].s.tv);
                    printf("\n servico de lavanderia [s/n]:%s ",flat[i].s.lavanderia);
                    printf("\n recepcao 24 hrs [s/n]:%s ",flat[i].s.recep);
                    printf("\n Rua:%s",flat[i].Geral.rua);
                    printf("\n Numero:%d ",flat[i].Geral.numero);
                    printf("\n CEP:%d ",flat[i].Geral.cep);
                    printf("\n Bairro:%s ",flat[i].Geral.bairro);
                    printf("\n Cidade:%s ",flat[i].Geral.cidade);

                    printf("\n Preco: R$ %.2f ",flat[i].Geral.p);

        }
    }
 system("pause");
}
void Cons_Alug_Studio(int c){

    int i;
    system("cls");
    for(i=0;i<=c-1;i++){
        if((studio[i].Geral.tipo==0)){

                    printf("\n Studio numero %d \n",i+1);

                    printf("\n Area do Studio:%.2f m2 ",studio[i].area);
                    printf("\n Valor do condominio: R$ %.2f ",studio[i].cond);
                    printf("\n Piscina [s/n]:%s ",studio[i].piscina);
                    printf("\n Sauna [s/n]:%s ",studio[i].sauna);
                    printf("\n Sala de ginastica [s/n]:%s ",studio[i].ginastica);
                    printf("\n ar-condicionado [s/n]:%s ",studio[i].s.ar);
                    printf("\n Internet [s/n]:%s ",studio[i].s.net);
                    printf("\n tv a cabo [s/n]:%s ",studio[i].s.tv);
                    printf("\n servico de lavanderia [s/n]:%s ",studio[i].s.lavanderia);
                    printf("\n recepcao 24 hrs [s/n]:%s ",studio[i].s.recep);
                    printf("\n Rua:%s ",studio[i].Geral.rua);
                    printf("\n Numero:%d ",studio[i].Geral.numero);
                    printf("\n CEP:%d ",studio[i].Geral.cep);
                    printf("\n Bairro:%s",studio[i].Geral.bairro);
                    printf("\n Cidade:%s ",studio[i].Geral.cidade);

                    printf("\n Preco: R$ %.2f ",studio[i].Geral.p);

        }
    }
 system("pause");
}

void Cons_Vend_bair(int con[5]){

    int consul;

    while(consul != 6){
            system("cls");
            printf("\n   Imoveis para vender por bairro  \n");
            printf("\n  ********************************");
            printf("\n  *1-Casas                       *");
            printf("\n  *2-Apartamentos                *");
            printf("\n  *3-Terrenos                    *");
            printf("\n  *4-Flats                       *");
            printf("\n  *5-Studio                      *");
            printf("\n  *6-Voltar\n                    *");
            printf("\n  ********************************\n");
            printf("\nO que voce deseja consultar?\n");
            scanf("%d", &consul);

            switch(consul){

                case 1:Cons_Vend_bair_Cas(con[0]);
                        break;
                case 2:Cons_Vend_bair_Apt(con[1]);
                        break;
                case 3:Cons_Vend_bair_Ter(con[2]);
                        break;
                case 4:Cons_Vend_bair_Flat(con[3]);
                        break;
                case 5:Cons_Vend_bair_Studio(con[4]);
                        break;


        }
    }
}

void Cons_Vend_bair_Cas(int c){

    int i;
    char b[30];
    system("cls");
    printf("Por qual bairro vc deseja procurar?");
    fgets (b, 30, stdin);
    fgets (b, 30, stdin);
    system("cls");
    for(i=0;i<=c-1;i++){
        if(casa[i].Geral.tipo&&(strcmp(casa[i].Geral.bairro,b)==0)){

                    printf("\n Casa numero %d \n",i+1);

                    printf("\n Quantidade de pavimentos:%d",casa[i].pavimento);
                    printf("\n Quantidade de quartos:%d ",casa[i].quartos);
                    printf("\n Area do terreno:%.2f m2 ",casa[i].areat);
                    printf("\n Area construida:%.2f m2 ",casa[i].areac);
                    printf("\n Rua:%s ",casa[i].Geral.rua);
                    printf("\n Numero:%d ",casa[i].Geral.numero);
                    printf("\n CEP:%d ",casa[i].Geral.cep);

                    printf("\n Cidade:%s ",casa[i].Geral.cidade);

                    printf("\n Preco(venda/aluguel): R$ %.2f ",casa[i].Geral.p);

        }
    }
 system("pause");
}
void Cons_Vend_bair_Apt(int c){

    int i;
    char b[30];
    system("cls");
    printf("Por qual bairro vc deseja procurar?");
    fgets (b, 30, stdin);
    fgets (b, 30, stdin);
    system("cls");
    for(i=0;i<=c-1;i++){
        if((Ap[i].Geral.tipo&&(Ap[i].Geral.bairro,b)==0)){

                    printf("\n Apartamento numero %d \n",i+1);
                    printf("\n Area do Apartamento: %.2f m2 ",Ap[i].area);
                    printf("\n Quantidade de quartos:%d ",Ap[i].quartos);
                    printf("\n Nascente Sul ou Norte:%c ",Ap[i].posi);
                    printf("\n Andar:%d ",Ap[i].andar);
                    printf("\n Valor do condominio: R$ %.2f",Ap[i].cond);
                    printf("\n Vagas de garagem: %d",Ap[i].vagas);
                    printf("\n Rua:%s ",Ap[i].Geral.rua);
                    printf("\n Numero:%d ",Ap[i].Geral.numero);
                    printf("\n CEP:%d ",Ap[i].Geral.cep);

                    printf("\n Cidade:%s ",Ap[i].Geral.cidade);

                    printf("\n Preco: R$ %.2f ",Ap[i].Geral.p);

        }
    }
 system("pause");
}
void Cons_Vend_bair_Ter(int c){

    int i;
    char b[30];
    system("cls");
    printf("Por qual bairro vc deseja procurar?");
    fgets (b, 30, stdin);
    fgets (b, 30, stdin);
    system("cls");
    for(i=0;i<=c-1;i++){
        if((terreno[i].Geral.tipo&&(terreno[i].Geral.bairro,b)==0)){

                   printf("\n Terreno numero %d \n",i+1);

                    printf("\n Area:%.2f m2 ",terreno[i].area);
                    printf("\n Rua:%s ",terreno[i].Geral.rua);
                    printf("\n Numero:%d ",terreno[i].Geral.numero);
                    printf("\n CEP:%d ",terreno[i].Geral.cep);

                    printf("\n Cidade:%s ",terreno[i].Geral.cidade);

                    printf("\n Preco: R$ %.2f ",terreno[i].Geral.p);

        }
    }
 system("pause");
}
void Cons_Vend_bair_Flat(int c){

    int i;
    char b[30];
    system("cls");
    printf("Por qual bairro vc deseja procurar?");
    fgets (b, 30, stdin);
    fgets (b, 30, stdin);
    system("cls");
    for(i=0;i<=c-1;i++){
        if(flat[i].Geral.tipo&&(strcmp(flat[i].Geral.bairro,b)==0)){

                     printf("\n Flat numero %d \n",i+1);

                    printf("\n Area do Flat: %.2f m2 ",flat[i].area);
                    printf("\n Valor do condominio: R$ %.2f ",flat[i].cond);
                    printf("\n Ar-condicionado [s/n]: %s",flat[i].s.ar);
                    printf("\n Internet [s/n]:%s ",flat[i].s.net);
                    printf("\n TV a cabo [s/n]:%s ",flat[i].s.tv);
                    printf("\n Servico de lavanderia [s/n]:%s ",flat[i].s.lavanderia);
                    printf("\n Recepcao 24 hrs [s/n]:%s ",flat[i].s.recep);
                    printf("\n Rua:%s",flat[i].Geral.rua);
                    printf("\n Numero:%d ",flat[i].Geral.numero);
                    printf("\n CEP:%d ",flat[i].Geral.cep);

                    printf("\n Cidade:%s ",flat[i].Geral.cidade);

                    printf("\n Preco: R$ %.2f ",flat[i].Geral.p);

        }
    }
 system("pause");
}
void Cons_Vend_bair_Studio(int c){

    int i;
    char b[30];
    system("cls");
    printf("Por qual bairro vc deseja procurar?");
    fgets (b, 30, stdin);
    fgets (b, 30, stdin);
    system("cls");
    for(i=0;i<=c-1;i++){
        if(studio[i].Geral.tipo&&(strcmp(studio[i].Geral.bairro,b)==0)){

                     printf("\n Studio numero %d \n",i+1);

                    printf("\n Area do Studio:%.2f m2 ",studio[i].area);
                    printf("\n Valor do condominio: R$ %.2f ",studio[i].cond);
                    printf("\n Piscina [s/n]:%s ",studio[i].piscina);
                    printf("\n Sauna [s/n]:%s ",studio[i].sauna);
                    printf("\n Sala de ginastica [s/n]:%s ",studio[i].ginastica);
                    printf("\n Ar-condicionado [s/n]:%s ",studio[i].s.ar);
                    printf("\n Internet [s/n]:%s ",studio[i].s.net);
                    printf("\n TV a cabo [s/n]:%s ",studio[i].s.tv);
                    printf("\n Servico de lavanderia [s/n]:%s ",studio[i].s.lavanderia);
                    printf("\n Recepcao 24 hrs [s/n]:%s ",studio[i].s.recep);
                    printf("\n Rua:%s ",studio[i].Geral.rua);
                    printf("\n Numero:%d ",studio[i].Geral.numero);
                    printf("\n CEP:%d ",studio[i].Geral.cep);

                    printf("\n Cidade:%s ",studio[i].Geral.cidade);

                    printf("\n Preco: R$ %.2f ",studio[i].Geral.p);
        }
    }
 system("pause");
}

void Cons_Alug_bair(int con[5]){



    int consul;

    while(consul != 6){
            system("cls");
            printf("\n   Imoveis para alugar por bairro \n");
            printf("\n  ********************************");
            printf("\n  *1-Casas                       *");
            printf("\n  *2-Apartamentos                *");
            printf("\n  *3-Terrenos                    *");
            printf("\n  *4-Flats                       *");
            printf("\n  *5-Studio                      *");
            printf("\n  *6-Voltar\n                    *");
            printf("\n  ********************************\n");
            printf("\nO que voce deseja consultar?\n");
            scanf("%d", &consul);

            switch(consul){

                case 1:Cons_Alug_bair_Cas(con[0]);
                        break;
                case 2:Cons_Alug_bair_Apt(con[1]);
                        break;
                case 3:Cons_Alug_bair_Ter(con[2]);
                        break;
                case 4:Cons_Alug_bair_Flat(con[3]);
                        break;
                case 5:Cons_Alug_bair_Studio(con[4]);
                        break;


        }
    }
}

void Cons_Alug_bair_Cas(int c){

    int i;
    char b[30];
    system("cls");
    printf("Por qual bairro vc deseja procurar?");
    fgets (b, 30, stdin);
    fgets (b, 30, stdin);
    system("cls");
    for(i=0;i<=c-1;i++){
        if((casa[i].Geral.tipo==0)&&(strcmp(casa[i].Geral.bairro,b)==0)){

                    printf("\n Casa numero %d \n",i+1);

                    printf("\n Quantidade de pavimentos:%d",casa[i].pavimento);
                    printf("\n Quantidade de quartos:%d ",casa[i].quartos);
                    printf("\n Area do terreno:%.2f m2 ",casa[i].areat);
                    printf("\n Area construida:%.2f m2 ",casa[i].areac);
                    printf("\n Rua:%s ",casa[i].Geral.rua);
                    printf("\n Numero:%d ",casa[i].Geral.numero);
                    printf("\n CEP:%d ",casa[i].Geral.cep);
                    printf("\n Cidade:%s ",casa[i].Geral.cidade);
                    printf("\n Preco(venda/aluguel): R$ %.2f ",casa[i].Geral.p);

        }
    }
 system("pause");
}
void Cons_Alug_bair_Apt(int c){

    int i;
    char b[30];
    system("cls");
    printf("Por qual bairro vc deseja procurar?");
    fgets (b, 30, stdin);
    fgets (b, 30, stdin);
    system("cls");
    for(i=0;i<=c-1;i++){
        if(((Ap[i].Geral.tipo==0)&&(Ap[i].Geral.bairro,b)==0)){

                    printf("\n Apartamento numero %d \n",i+1);
                    printf("\n Area do Apartamento: %.2f m2 ",Ap[i].area);
                    printf("\n Quantidade de quartos:%d ",Ap[i].quartos);
                    printf("\n Nascente Sul ou Norte:%d ",Ap[i].posi);
                    printf("\n Andar:%d ",Ap[i].andar);
                    printf("\n Valor do condominio: R$ %.2f ",Ap[i].cond);
                    printf("\n Vagas de garagem: %d",Ap[i].vagas);
                    printf("\n Rua:%s ",Ap[i].Geral.rua);
                    printf("\n Numero:%d ",Ap[i].Geral.numero);
                    printf("\n CEP:%d ",Ap[i].Geral.cep);

                    printf("\n Cidade:%s ",Ap[i].Geral.cidade);

                    printf("\n Preco: R$ %.2f",Ap[i].Geral.p);

        }
    }
 system("pause");
}
void Cons_Alug_bair_Ter(int c){

    int i;
    char b[30];
    system("cls");
    printf("Por qual bairro vc deseja procurar?");
    fgets (b, 30, stdin);
    fgets (b, 30, stdin);
    system("cls");
    for(i=0;i<=c-1;i++){
        if(((terreno[i].Geral.tipo==0)&&(terreno[i].Geral.bairro,b)==0)){

                   printf("\n Terreno numero %d \n",i+1);

                    printf("\n Area:%.2f m2 ",terreno[i].area);
                    printf("\n Rua:%s ",terreno[i].Geral.rua);
                    printf("\n Numero:%d ",terreno[i].Geral.numero);
                    printf("\n CEP:%d ",terreno[i].Geral.cep);

                    printf("\n Cidade:%s ",terreno[i].Geral.cidade);

                    printf("\n Preco: R$ %.2f ",terreno[i].Geral.p);

        }
    }
 system("pause");
}
void Cons_Alug_bair_Flat(int c){

    int i;
    char b[30];
    system("cls");
    printf("Por qual bairro vc deseja procurar?");
    fgets (b, 30, stdin);
    fgets (b, 30, stdin);
    system("cls");
    for(i=0;i<=c-1;i++){
        if(((flat[i].Geral.tipo==0)&&(strcmp(flat[i].Geral.bairro,b)==0))){

                     printf("\n Flat numero %d \n",i+1);

                    printf("\n Area do Flat: %.2f m2 ",flat[i].area);
                    printf("\n Valor do condominio: R$ %.2f ",flat[i].cond);
                    printf("\n Ar-condicionado [s/n]: %s",flat[i].s.ar);
                    printf("\n Internet [s/n]:%s ",flat[i].s.net);
                    printf("\n TV a cabo [s/n]:%s ",flat[i].s.tv);
                    printf("\n Servico de lavanderia [s/n]:%s ",flat[i].s.lavanderia);
                    printf("\n Recepcao 24 hrs [s/n]:%s ",flat[i].s.recep);
                    printf("\n Rua:%s",flat[i].Geral.rua);
                    printf("\n Numero:%d ",flat[i].Geral.numero);
                    printf("\n CEP:%d ",flat[i].Geral.cep);

                    printf("\n Cidade:%s ",flat[i].Geral.cidade);

                    printf("\n Preco: R$ %.2f ",flat[i].Geral.p);

        }
    }
 system("pause");
}
void Cons_Alug_bair_Studio(int c){

    int i;
    char b[30];
    system("cls");
    printf("Por qual bairro vc deseja procurar?");
    fgets (b, 30, stdin);
    fgets (b, 30, stdin);
    system("cls");
    for(i=0;i<=c-1;i++){
        if(((studio[i].Geral.tipo==0)&&(strcmp(studio[i].Geral.bairro,b)==0))){

                     printf("\n Studio numero %d \n",i+1);

                    printf("\n Area do Studio:%.2f m2 ",studio[i].area);
                    printf("\n Valor do condominio: R$ %.2f ",studio[i].cond);
                    printf("\n Piscina [s/n]:%s ",studio[i].piscina);
                    printf("\n Sauna [s/n]:%s ",studio[i].sauna);
                    printf("\n Sala de ginastica [s/n]:%s ",studio[i].ginastica);
                    printf("\n Ar-condicionado [s/n]:%s ",studio[i].s.ar);
                    printf("\n Internet [s/n]:%s ",studio[i].s.net);
                    printf("\n TV a cabo [s/n]:%s ",studio[i].s.tv);
                    printf("\n Servico de lavanderia [s/n]:%s ",studio[i].s.lavanderia);
                    printf("\n Recepcao 24 hrs [s/n]:%s ",studio[i].s.recep);
                    printf("\n Rua:%s ",studio[i].Geral.rua);
                    printf("\n Numero:%d ",studio[i].Geral.numero);
                    printf("\n CEP:%d ",studio[i].Geral.cep);

                    printf("\n Cidade:%s ",studio[i].Geral.cidade);

                    printf("\n Preco: R$ %.2f ",studio[i].Geral.p);
        }
    }
 system("pause");
}

void Cons_Cid(int con[5]){

    int consul;

    while(consul != 6){
            system("cls");
            printf("\n          Imoveis por cidade \n");
            printf("\n  ********************************");
            printf("\n  *1-Casas                       *");
            printf("\n  *2-Apartamentos                *");
            printf("\n  *3-Terrenos                    *");
            printf("\n  *4-Flats                       *");
            printf("\n  *5-Studio                      *");
            printf("\n  *6-Voltar\n                    *");
            printf("\n  ********************************\n");
            printf("\nO que voce deseja consultar?\n");
            scanf("%d", &consul);

            switch(consul){

                case 1:Cons_Cid_Cas(con[0]);
                        break;
                case 2:Cons_Cid_Apt(con[1]);
                        break;
                case 3:Cons_Cid_Ter(con[2]);
                        break;
                case 4:Cons_Cid_Flat(con[3]);
                        break;
                case 5:Cons_Cid_Studio(con[4]);
                        break;


        }
    }
}

void Cons_Cid_Cas(int c){

    int i;
    char b[30];
    system("cls");
    printf("Por qual cidade vc deseja procurar?");
    fgets (b, 30, stdin);
    fgets (b, 30, stdin);
    system("cls");
    for(i=0;i<=c-1;i++){
        if((strcmp(casa[i].Geral.cidade,b)==0)){

                    printf("\n Casa numero %d \n",i+1);

                    printf("\n Quantidade de pavimentos:%d",casa[i].pavimento);
                    printf("\n Quantidade de quartos:%d ",casa[i].quartos);
                    printf("\n Area do terreno:%.2f m2 ",casa[i].areat);
                    printf("\n Area construida:%.2f m2 ",casa[i].areac);
                    printf("\n Rua:%s ",casa[i].Geral.rua);
                    printf("\n Numero:%d ",casa[i].Geral.numero);
                    printf("\n CEP:%d ",casa[i].Geral.cep);
                    printf("\n Bairro:%s ",casa[i].Geral.bairro);
                    printf("\n tipo (1 para Vender, 2 para Alugar):%d ",casa[i].Geral.tipo);
                    printf("\n Preco(venda/aluguel): R$ %.2f ",casa[i].Geral.p);

        }
    }
 system("pause");
}
void Cons_Cid_Apt(int c){

    int i;
    char b[30];
    system("cls");
    printf("Por qual cidade vc deseja procurar?");
    fgets (b, 30, stdin);
    fgets (b, 30, stdin);
    system("cls");
    for(i=0;i<=c-1;i++){
        if((strcmp(Ap[i].Geral.cidade,b)==0)){

                     printf("\n Apartamento numero %d \n",i+1);
                    printf("\n Area do Apartamento: %.2f m2 ",Ap[i].area);
                    printf("\n Quantidade de quartos:%d ",Ap[i].quartos);
                    printf("\n Nascente Sul ou Norte:%d ",Ap[i].posi);
                    printf("\n Andar:%d ",Ap[i].andar);
                    printf("\n Valor do condominio: R$ %.2f ",Ap[i].cond);
                    printf("\n Vagas de garagem: %d",Ap[i].vagas);
                    printf("\n Rua:%s ",Ap[i].Geral.rua);
                    printf("\n Numero:%d ",Ap[i].Geral.numero);
                    printf("\n CEP:%d ",Ap[i].Geral.cep);
                    printf("\n Bairro:%s ",Ap[i].Geral.bairro);

                    printf("\n tipo (1 para Vender, 2 para Alugar):%d ",Ap[i].Geral.tipo);
                    printf("\n Preco: R$ %.2f ",Ap[i].Geral.p);

        }
    }
 system("pause");
}
void Cons_Cid_Ter(int c){

    int i;
    char b[30];
    system("cls");
    printf("Por qual cidade vc deseja procurar?");
    fgets (b, 30, stdin);
    fgets (b, 30, stdin);
    system("cls");
    for(i=0;i<=c-1;i++){
        if((strcmp(terreno[i].Geral.cidade,b)==0)){

                 printf("\n Terreno numero %d \n",i+1);

                    printf("\n Area:%.2f m2 ",terreno[i].area);
                    printf("\n Rua:%s ",terreno[i].Geral.rua);
                    printf("\n Numero:%d ",terreno[i].Geral.numero);
                    printf("\n CEP:%d ",terreno[i].Geral.cep);
                    printf("\n Bairro: s",terreno[i].Geral.bairro);

                    printf("\n Tipo (1 para Vender, 2 para Alugar):%d ",terreno[i].Geral.tipo);
                    printf("\n Preco: R$ %.2f ",terreno[i].Geral.p);
        }
    }
 system("pause");
}
void Cons_Cid_Flat(int c){

    int i;
    char b[30];
    system("cls");
    printf("Por qual cidade vc deseja procurar?");
    fgets (b, 30, stdin);
    fgets (b, 30, stdin);
    system("cls");
    for(i=0;i<=c-1;i++){
        if((strcmp(flat[i].Geral.cidade,b)==0)){

                     printf("\n Flat numero %d \n",i+1);

                    printf("\n Area do Flat: %.2f m2 ",flat[i].area);
                    printf("\n Valor do condominio: R$ %.2f ",flat[i].cond);
                    printf("\n Ar-condicionado [s/n]: %s",flat[i].s.ar);
                    printf("\n Internet [s/n]:%s ",flat[i].s.net);
                    printf("\n TV a cabo [s/n]:%s ",flat[i].s.tv);
                    printf("\n Servico de lavanderia [s/n]:%s ",flat[i].s.lavanderia);
                    printf("\n Recepcao 24 hrs [s/n]:%s ",flat[i].s.recep);
                    printf("\n Rua:%s",flat[i].Geral.rua);
                    printf("\n Numero:%d ",flat[i].Geral.numero);
                    printf("\n CEP:%d ",flat[i].Geral.cep);
                    printf("\n Bairro:%s ",flat[i].Geral.bairro);

                    printf("\n Tipo (1 para Vender, 2 para Alugar):%d ",flat[i].Geral.tipo);
                    printf("\n Preco: R$ %.2f ",flat[i].Geral.p);

        }
    }
 system("pause");
}
void Cons_Cid_Studio(int c){

    int i;
    char b[30];
    system("cls");
    printf("Por qual cidade vc deseja procurar?");
    fgets (b, 30, stdin);
    fgets (b, 30, stdin);
    system("cls");
    for(i=0;i<=c-1;i++){
        if((strcmp(studio[i].Geral.cidade,b)==0)){

                    printf("\n Studio numero %d \n",i+1);

                    printf("\n Area do Studio:%.2f m2 ",studio[i].area);
                    printf("\n Valor do condominio: R$ %.2f ",studio[i].cond);
                    printf("\n Piscina [s/n]:%s ",studio[i].piscina);
                    printf("\n Sauna [s/n]:%s ",studio[i].sauna);
                    printf("\n Sala de ginastica [s/n]:%s ",studio[i].ginastica);
                    printf("\n ar-condicionado [s/n]:%s ",studio[i].s.ar);
                    printf("\n Internet [s/n]:%s ",studio[i].s.net);
                    printf("\n TV a cabo [s/n]:%s ",studio[i].s.tv);
                    printf("\n Servico de lavanderia [s/n]:%s ",studio[i].s.lavanderia);
                    printf("\n Recepcao 24 hrs [s/n]:%s ",studio[i].s.recep);
                    printf("\n Rua:%s ",studio[i].Geral.rua);
                    printf("\n Numero:%d ",studio[i].Geral.numero);
                    printf("\n CEP:%d ",studio[i].Geral.cep);
                    printf("\n Bairro:%s",studio[i].Geral.bairro);

                    printf("\n Tipo (1 para Vender, 2 para Alugar):%d ",studio[i].Geral.tipo);
                    printf("\n Preco: R$ %.2f ",studio[i].Geral.p);

        }
    }
 system("pause");
}

/******** FUNÇÃO PRINCIPAL *******/

int main()
{
    int op=0;
    int contador[5]={0};

    while(op != 3){
        system("cls");
        printf("\n\n            MENU \n            ");
        printf("\n\n  **************************\n");
        printf("  **1 cadastrar imoveis   **\n");
        printf("  **2 consultar imoveis   **\n");
        printf("  **      3 SAIR          **\n");
        printf("  **************************\n");
        printf("\nQual opcao voce deseja acessar?\n ");
        scanf("%d",&op);

        switch(op){
            case 1:Cads_Im(contador);
                   break;
            case 2:Cons_Im(contador);
                   break;
        }
    }
    system("cls");
    printf("  **************************\n");
    printf("  *      VOLTE SEMPRE      *\n");
    printf("  **************************\n");
	return 0;
}
