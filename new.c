#include <stdio.h>
#include <stdlib.h>

/******** STRUCT *******/

typedef struct{ // geral
	char rua[50];
	int numero;
	int cep;
	char bairro[30];
	char cidade[30];
	int tipo;// = 1 vender, 2 alugar
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
            printf("1-cadastrar casa\n");
            printf("2-cadastrar apartamento\n");
            printf("3-cadastrar terreno\n");
            printf("4-cadastrar flat\n");
            printf("5-cadastrar studio\n");
            printf("6-voltar\n");
            printf("\nQual opcao voce deseja acessar? ");
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
                printf("\nQuantas casas deseja cadastrar? ");
                scanf("%d", &n);

                for(i=0;i<=n-1&&i<=99;i++){

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
                    scanf("%s",&casa[i].Geral.rua);

                    printf("\n Numero: ");
                    scanf("%d",&casa[i].Geral.numero);

                    printf("\n CEP: ");
                    scanf("%d",&casa[i].Geral.cep);

                    printf("\n Bairro: ");
                    scanf("%s",&casa[i].Geral.bairro);

                    printf("\n Cidade: ");
                    scanf("%s",&casa[i].Geral.cidade);

                    printf("\n Tipo (1 para Vender, 2 para Alugar): ");
                    scanf("%d",&casa[i].Geral.tipo);

                    printf("\n Preco(venda/aluguel): ");
                    scanf("%f",&casa[i].Geral.p);


                    }
        return n;
}
int Cads_Ap(){
    int n,i;
    printf("Quantos apartamentos deseja cadastrar? ");
    scanf("%d",&n);

    for(i=0;i<=n-1&&i<=99;i++){

        printf("\n Apartamento numero %d \n",i+1);

        printf("\n Area do Apartamento: ");
        scanf("%f",&Ap[i].area);

        printf("\n Quantidade de quartos: ");
        scanf("%d",&Ap[i].quartos);

        printf("\n Nascente Sul ou Norte: ");
        scanf("%s",&Ap[i].posi);

        printf("\n Andar: ");
        scanf("%d",&Ap[i].andar);

        printf("\n Valor do condominio: ");
        scanf("%f",&Ap[i].cond);

        printf("\n Vagas de garagem: ");
        scanf("%d",&Ap[i].vagas);

        printf("\n Rua: ");
        scanf("%s",Ap[i].Geral.rua);

        printf("\n Numero: ");
        scanf("%d",&Ap[i].Geral.numero);

        printf("\n CEP: ");
        scanf("%d",&Ap[i].Geral.cep);

        printf("\n Bairro: ");
        scanf("%s",Ap[i].Geral.bairro);

        printf("\n Cidade: ");
        scanf("%s",Ap[i].Geral.cidade);

        printf("\n Tipo (1 para Vender, 2 para Alugar): ");
        scanf("%d",&Ap[i].Geral.tipo);

        printf("\n Preco: ");
        scanf("%f",&Ap[i].Geral.p);

    }
    return n;
}
int Cads_Ter(){
    int n,i;
        printf("Quantos terrenos deseja cadastrar?");
        scanf("%d", &n);

        for(i=1;i<=n-1&&i<=99;i++){

            printf("\n Terreno numero %d \n",i+1);

            printf("\n Area: ");
            scanf("%f",&terreno[i].area);

            printf("\n Rua: ");
            scanf("%s",terreno[i].Geral.rua);

            printf("\n Numero: ");
            scanf("%d",&terreno[i].Geral.numero);

            printf("\n CEP: ");
            scanf("%d",&terreno[i].Geral.cep);

            printf("\n Bairro: ");
            scanf("%s",terreno[i].Geral.bairro);

            printf("\n Cidade: ");
            scanf("%s",terreno[i].Geral.cidade);

            printf("\n Tipo (1 para Vender, 2 para Alugar): ");
            scanf("%d",&terreno[i].Geral.tipo);

            printf("\n Preco: ");
            scanf("%f",&terreno[i].Geral.p);

            }
            return n;
}
int Cads_Flat(){

    int n,i;

    printf("Quantos flat deseja cadastrar?");
    scanf("%d", &n);

    for(i=1;i<=n-1&&i<=99;i++){

        printf("\n Flat numero %d \n",i+1);

        printf("\n Area do Flat: ");
        scanf("%f",&flat[i].area);

        printf("\n Valor do condominio: ");
        scanf("%f",&flat[i].cond);

        printf("\n ar-condicionado [s/n]: ");
        scanf("%s",flat[i].s.ar);

        printf("\n Internet [s/n]: ");
        scanf("%s",flat[i].s.net);

        printf("\n tv a cabo [s/n]: ");
        scanf("%s",flat[i].s.tv);

        printf("\n servico de lavanderia [s/n]: ");
        scanf("%s",flat[i].s.lavanderia);

        printf("\n recepcao 24 hrs [s/n]: ");
        scanf("%s",flat[i].s.recep);

        printf("\n Rua: ");
        scanf("%s",flat[i].Geral.rua);

        printf("\n Numero: ");
        scanf("%d",&flat[i].Geral.numero);

        printf("\n CEP: ");
        scanf("%d",&flat[i].Geral.cep);

        printf("\n Bairro: ");
        scanf("%s",flat[i].Geral.bairro);

        printf("\n Cidade: ");
        scanf("%s",flat[i].Geral.cidade);

        printf("\n Tipo (1 para Vender, 2 para Alugar): ");
        scanf("%d",&flat[i].Geral.tipo);

        printf("\n Preco: ");
        scanf("%f",&flat[i].Geral.p);

            }
            return n;


}
int Cads_Studio(){
    int i,n;
    printf("Quantos studios deseja cadastrar?");
    scanf("%d",&n);

    for(i=1;i<=n-1&&i<=99;i++){

        printf("\n Studio numero %d \n",i+1);

        printf("\n Area do Studio: ");
        scanf("%f",&studio[i].area);

        printf("\n Valor do condominio: ");
        scanf("%f",&studio[i].cond);

        printf("\n Piscina [s/n]: ");
        scanf("%s",studio[i].piscina);

        printf("\n Sauna [s/n]: ");
        scanf("%s",studio[i].sauna);

        printf("\n Sala de ginastica [s/n]: ");
        scanf("%s",studio[i].ginastica);

        printf("\n Ar-condicionado [s/n]: ");
        scanf("%s",studio[i].s.ar);

        printf("\n Internet [s/n]: ");
        scanf("%s",studio[i].s.net);

        printf("\n TV a cabo [s/n]: ");
        scanf("%s",studio[i].s.tv);

        printf("\n Servico de lavanderia [s/n]: ");
        scanf("%s",studio[i].s.lavanderia);

        printf("\n Recepcao 24 hrs [s/n]: ");
        scanf("%s",studio[i].s.recep);

        printf("\n Rua: ");
        scanf("%s",studio[i].Geral.rua);

        printf("\n Numero: ");
        scanf("%d",&studio[i].Geral.numero);

        printf("\n CEP: ");
        scanf("%d",&studio[i].Geral.cep);

        printf("\n Bairro: ");
        scanf("%s",studio[i].Geral.bairro);

        printf("\n Cidade: ");
        scanf("%s",studio[i].Geral.cidade);

        printf("\n Tipo (1 para Vender, 2 para Alugar): ");
        scanf("%d",&studio[i].Geral.tipo);

        printf("\n Preco: ");
        scanf("%f",&studio[i].Geral.p);

    }
    return n;

}

/******** FUNÇÕES CONSULTA *******/

void Cons_Im(int cont[5]){
    int op;

	while(op!=7){
            printf("\n1-Imoveis disponiveis");
            printf("\n2-Imoveis por tipo(casa,apartamento, terreno, flats e studios);");
            printf("\n3-Imoveis para alugar por tipo");
            printf("\n4-Imoveis para alugar por bairro");
            printf("\n5-Imoveis para vender por bairro");
            printf("\n5-Imoveis por cidade");
            printf("\n6-Descricoes de todos os imoveis");
            printf("\n7-Voltar\n");
            printf("\n Qual opcao voce deseja acessar? ");
            scanf("%d",&op);

            switch(op){

                case 1:Cons_Disp(cont);
                    break;
                case 2:Cons_Tipo(cont);
                    break;
                case 3:Cons_Vend(cont);
                    break;
                case 4:
                    break;
                case 5:
                    break;
                case 6:
                    break;

            }
            printf("%d", op);
	}


}

void Cons_Disp(int c[5]){
	printf("\nCasas disponiveis :%d",c[0]);
	printf("\nApartamentos disponiveis :%d",c[1]);
	printf("\nTerrenos disponiveis :%d",c[2]);
	printf("\nFlats disponiveis :%d",c[3]);
	printf("\nStudios disponiveis \n:%d",c[4]);
    system("pause");
    }

void Cons_Tipo(int con[5]){

    int consul;

    while(consul != 6){
            printf("\n1-Casas");
            printf("\n2-Terrenos");
            printf("\n3-Apartamentos");
            printf("\n4-Flats");
            printf("\n5-Studio");
            printf("\n6-Sair");
            printf("\nO que voce deseja consultar?");
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

    for(i=0;i<=c-1;i++){
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
                    printf("\n tipo (1 para Vender, 2 para Alugar):%d ",casa[i].Geral.tipo);
                    printf("\n Preco(venda/aluguel):%.2f R$ ",casa[i].Geral.p);

    }
 system("pause");
}
void Cons_Tipo_Apt(int c){

    int i;

    for(i=0;i<=c-1;i++){
                    printf("\n Apartamento numero %d \n",i+1);
                    printf("\n Area do Apartamento: %.2f m2 ",Ap[i].area);
                    printf("\n Quantidade de quartos:%d ",Ap[i].quartos);
                    printf("\n Nascente Sul ou Norte:%d ",Ap[i].posi);
                    printf("\n Andar:%d ",Ap[i].andar);
                    printf("\n Valor do condominio: %.2f R$",Ap[i].cond);
                    printf("\n Vagas de garagem: %d",Ap[i].vagas);
                    printf("\n Rua:%s ",Ap[i].Geral.rua);
                    printf("\n Numero:%d ",Ap[i].Geral.numero);
                    printf("\n CEP:%d ",Ap[i].Geral.cep);
                    printf("\n Bairro:%s ",Ap[i].Geral.bairro);
                    printf("\n Cidade:%s ",Ap[i].Geral.cidade);
                    printf("\n Tipo (1 para Vender, 2 para Alugar):%d ",Ap[i].Geral.tipo);
                    printf("\n Preco:%.2f R$ ",Ap[i].Geral.p);
    }
 system("pause");
}
void Cons_Tipo_Ter(int c){

    int i;

    for(i=0;i<=c-1;i++){
                    printf("\n Terreno numero %d \n",i+1);

                    printf("\n Area:%.2f m2 ",terreno[i].area);
                    printf("\n Rua:%s ",terreno[i].Geral.rua);
                    printf("\n Numero:%d ",terreno[i].Geral.numero);
                    printf("\n CEP:%d ",terreno[i].Geral.cep);
                    printf("\n Bairro: s",terreno[i].Geral.bairro);
                    printf("\n Cidade:%s ",terreno[i].Geral.cidade);
                    printf("\n Tipo (1 para Vender, 2 para Alugar):%d ",terreno[i].Geral.tipo);
                    printf("\n Preco: %.2f R$",terreno[i].Geral.p);
    }
 system("pause");
}
void Cons_Tipo_Flat(int c){

    int i;

    for(i=0;i<=c-1;i++){
                    printf("\n Flat numero %d \n",i+1);

                    printf("\n Area do Flat: %.2f m2",flat[i].area);
                    printf("\n Valor do condominio: %.2f R$ ",flat[i].cond);
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
                    printf("\n Tipo (1 para Vender, 2 para Alugar):%d ",flat[i].Geral.tipo);
                    printf("\n Preco:%.2f R$ ",flat[i].Geral.p);

    }
 system("pause");
}
void Cons_Tipo_Studio(int c){

    int i;

    for(i=0;i<=c-1;i++){
                    printf("\n Studio numero %d \n",i+1);

                    printf("\n Area do Studio:%.2f m2 ",studio[i].area);
                    printf("\n Valor do condominio:%.2f R$ ",studio[i].cond);
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
                    printf("\n Tipo (1 para Vender, 2 para Alugar):%d ",studio[i].Geral.tipo);
                    printf("\n Preco:%.2f R$ ",studio[i].Geral.p);
    }
 system("pause");
}

void Cons_Vend(int con[5]){

    int consul;

    while(consul != 6){
            printf("\n1-Casas");
            printf("\n2-Terrenos");
            printf("\n3-Apartamentos");
            printf("\n4-Flats");
            printf("\n5-Studio");
            printf("\n6-Sair");
            printf("\nO que voce deseja consultar?");
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

                    printf("\n Preco(Venda/Aluguel):%.2f R$ ",casa[i].Geral.p);

        }
    }
 system("pause");
}
void Cons_Vend_Apt(int c){

    int i;

    for(i=0;i<=c-1;i++){
        if(Ap[i].Geral.tipo){

                    printf("\n Apartamento numero %d \n",i+1);
                    printf("\n Area do Apartamento: %.2f m2 ",Ap[i].area);
                    printf("\n Quantidade de quartos:%d ",Ap[i].quartos);
                    printf("\n Nascente Sul ou Norte:%d ",Ap[i].posi);
                    printf("\n Andar:%d ",Ap[i].andar);
                    printf("\n Valor do condominio: %.2f R$",Ap[i].cond);
                    printf("\n Vagas de garagem: %d",Ap[i].vagas);
                    printf("\n Rua:%s ",Ap[i].Geral.rua);
                    printf("\n Numero:%d ",Ap[i].Geral.numero);
                    printf("\n CEP:%d ",Ap[i].Geral.cep);
                    printf("\n Bairro:%s ",Ap[i].Geral.bairro);
                    printf("\n Cidade:%s ",Ap[i].Geral.cidade);

                    printf("\n Preco:%.2f R$ ",Ap[i].Geral.p);
        }
    }
 system("pause");
}
void Cons_Vend_Ter(int c){

    int i;

    for(i=0;i<=c-1;i++){
        if(terreno[i].Geral.tipo){

                    printf("\n Terreno numero %d \n",i+1);

                    printf("\n Area:%.2f m2 ",terreno[i].area);
                    printf("\n Rua:%s ",terreno[i].Geral.rua);
                    printf("\n Numero:%d ",terreno[i].Geral.numero);
                    printf("\n CEP:%d ",terreno[i].Geral.cep);
                    printf("\n Bairro: s",terreno[i].Geral.bairro);
                    printf("\n Cidade:%s ",terreno[i].Geral.cidade);

                    printf("\n Preco: %.2f R$ ",terreno[i].Geral.p);

        }
    }
 system("pause");
}
void Cons_Vend_Flat(int c){

    int i;

    for(i=0;i<=c-1;i++){
        if(flat[i].Geral.tipo){

                     printf("\n Flat numero %d \n",i+1);

                    printf("\n Area do Flat: %.2f m2",flat[i].area);
                    printf("\n Valor do condominio: %.2f R$",flat[i].cond);
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

                    printf("\n Preco:%.2f R$",flat[i].Geral.p);

        }
    }
 system("pause");
}
void Cons_Vend_Studio(int c){

    int i;

    for(i=0;i<=c-1;i++){
        if(studio[i].Geral.tipo){

                    printf("\n Studio numero %d \n",i+1);

                    printf("\n Area do Studio:%.2f m2",studio[i].area);
                    printf("\n Valor do condominio:%.2f R$ ",studio[i].cond);
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

                    printf("\n Preco:%.2f R$ ",studio[i].Geral.p);

        }
    }
 system("pause");
}

void Cons_Alug(int con[5]){

    int consul;

    while(consul != 6){
            printf("\n1-Casas");
            printf("\n2-Terrenos");
            printf("\n3-Apartamentos");
            printf("\n4-Flats");
            printf("\n5-Studio");
            printf("\n6-Sair");
            printf("\nO que voce deseja consultar?");
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

                    printf("\n Preco(venda/aluguel):%.2f R$ \n",casa[i].Geral.p);

        }
    }
 system("pause");
}
void Cons_Alug_Apt(int c){

    int i;

    for(i=0;i<=c-1;i++){
        if((Ap[i].Geral.tipo==0)){

                    printf("\n Apartamento numero %d \n",i+1);
                    printf("\n Area do Apartamento: %.2f m2 \n",Ap[i].area);
                    printf("\n Quantidade de quartos:%d \n",Ap[i].quartos);
                    printf("\n Nascente Sul ou Norte:%d \n",Ap[i].posi);
                    printf("\n Andar:%d \n",Ap[i].andar);
                    printf("\n Valor do condominio: %f \n",Ap[i].cond);
                    printf("\n Vagas de garagem: %d \n",Ap[i].vagas);
                    printf("\n Rua:%s \n",Ap[i].Geral.rua);
                    printf("\n Numero:%d \n",Ap[i].Geral.numero);
                    printf("\n CEP:%d \n",Ap[i].Geral.cep);
                    printf("\n Bairro:%s \n",Ap[i].Geral.bairro);
                    printf("\n Cidade:%s \n",Ap[i].Geral.cidade);

                    printf("\n Preco:%.2f R$ \n",Ap[i].Geral.p);
        }
    }
 system("pause");
}
void Cons_Alug_Ter(int c){

    int i;

    for(i=0;i<=c-1;i++){
        if((terreno[i].Geral.tipo==0)){

                    printf("\n Terreno numero %d \n",i+1);

                    printf("\n Area:%.2f m2 ",terreno[i].area);
                    printf("\n Rua:%s ",terreno[i].Geral.rua);
                    printf("\n Numero:%d ",terreno[i].Geral.numero);
                    printf("\n CEP:%d ",terreno[i].Geral.cep);
                    printf("\n Bairro:%s ",terreno[i].Geral.bairro);
                    printf("\n Cidade:%s ",terreno[i].Geral.cidade);

                    printf("\n Preco: %.2f m2 ",terreno[i].Geral.p);

        }
    }
 system("pause");
}
void Cons_Alug_Flat(int c){

    int i;

    for(i=0;i<=c-1;i++){
        if((flat[i].Geral.tipo==0)){

                     printf("\n Flat numero %d \n",i+1);

                    printf("\n Area do Flat: %.2f m2 ",flat[i].area);
                    printf("\n Valor do condominio: %.2f R$ ",flat[i].cond);
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

                    printf("\n Preco:%.2f R$ ",flat[i].Geral.p);

        }
    }
 system("pause");
}
void Cons_Alug_Studio(int c){

    int i;

    for(i=0;i<=c-1;i++){
        if((studio[i].Geral.tipo==0)){

                    printf("\n Studio numero %d \n",i+1);

                    printf("\n Area do Studio:%.2f m2 ",studio[i].area);
                    printf("\n Valor do condominio:%.2f R$ ",studio[i].cond);
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

                    printf("\n Preco:%.2f R$ ",studio[i].Geral.p);

        }
    }
 system("pause");
}

void Cons_Vend_bair(int con[5]){

    int consul;

    while(consul != 6){
            printf("\n1-Casas");
            printf("\n2-Terrenos");
            printf("\n3-Apartamentos");
            printf("\n4-Flats");
            printf("\n5-Studio");
            printf("\n6-Sair");
            printf("\nO que voce deseja consultar?");
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

    printf("Por qual bairro vc deseja procurar?");
    scanf("%s",b);

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

                    printf("\n Preco(venda/aluguel):%.2f R$ ",casa[i].Geral.p);

        }
    }
 system("pause");
}
void Cons_Vend_bair_Apt(int c){

    int i;
    char b[30];

    printf("Por qual bairro vc deseja procurar?");
    scanf("%s",b);

    for(i=0;i<=c-1;i++){
        if((Ap[i].Geral.tipo&&(Ap[i].Geral.bairro,b)==0)){

                    printf("\n Apartamento numero %d \n",i+1);
                    printf("\n Area do Apartamento: %.2f m2 ",Ap[i].area);
                    printf("\n Quantidade de quartos:%d ",Ap[i].quartos);
                    printf("\n Nascente Sul ou Norte:%c ",Ap[i].posi);
                    printf("\n Andar:%d ",Ap[i].andar);
                    printf("\n Valor do condominio: %f",Ap[i].cond);
                    printf("\n Vagas de garagem: %d",Ap[i].vagas);
                    printf("\n Rua:%s ",Ap[i].Geral.rua);
                    printf("\n Numero:%d ",Ap[i].Geral.numero);
                    printf("\n CEP:%d ",Ap[i].Geral.cep);

                    printf("\n Cidade:%s ",Ap[i].Geral.cidade);

                    printf("\n Preco:%.2f R$ ",Ap[i].Geral.p);

        }
    }
 system("pause");
}
void Cons_Vend_bair_Ter(int c){

    int i;
    char b[30];

    printf("Por qual bairro vc deseja procurar?");
    scanf("%s",b);

    for(i=0;i<=c-1;i++){
        if((terreno[i].Geral.tipo&&(terreno[i].Geral.bairro,b)==0)){

                   printf("\n Terreno numero %d \n",i+1);

                    printf("\n Area:%.2f m2 ",terreno[i].area);
                    printf("\n Rua:%s ",terreno[i].Geral.rua);
                    printf("\n Numero:%d ",terreno[i].Geral.numero);
                    printf("\n CEP:%d ",terreno[i].Geral.cep);

                    printf("\n Cidade:%s ",terreno[i].Geral.cidade);

                    printf("\n Preco: %.2f R$ ",terreno[i].Geral.p);

        }
    }
 system("pause");
}
void Cons_Vend_bair_Flat(int c){

    int i;
    char b[30];

    printf("Por qual bairro vc deseja procurar?");
    scanf("%s",b);

    for(i=0;i<=c-1;i++){
        if(flat[i].Geral.tipo&&(strcmp(flat[i].Geral.bairro,b)==0)){

                     printf("\n Flat numero %d \n",i+1);

                    printf("\n Area do Flat: %.2f m2 ",flat[i].area);
                    printf("\n Valor do condominio: %.2f R$ ",flat[i].cond);
                    printf("\n Ar-condicionado [s/n]: %s",flat[i].s.ar);
                    printf("\n Internet [s/n]:%s ",flat[i].s.net);
                    printf("\n TV a cabo [s/n]:%s ",flat[i].s.tv);
                    printf("\n Servico de lavanderia [s/n]:%s ",flat[i].s.lavanderia);
                    printf("\n Recepcao 24 hrs [s/n]:%s ",flat[i].s.recep);
                    printf("\n Rua:%s",flat[i].Geral.rua);
                    printf("\n Numero:%d ",flat[i].Geral.numero);
                    printf("\n CEP:%d ",flat[i].Geral.cep);

                    printf("\n Cidade:%s ",flat[i].Geral.cidade);

                    printf("\n Preco:%.2f R$ ",flat[i].Geral.p);

        }
    }
 system("pause");
}
void Cons_Vend_bair_Studio(int c){

    int i;
    char b[30];

    printf("Por qual bairro vc deseja procurar?");
    scanf("%s",b);

    for(i=0;i<=c-1;i++){
        if(studio[i].Geral.tipo&&(strcmp(studio[i].Geral.bairro,b)==0)){

                     printf("\n Studio numero %d \n",i+1);

                    printf("\n Area do Studio:%.2f m2 ",studio[i].area);
                    printf("\n Valor do condominio:%.2f R$ ",studio[i].cond);
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

                    printf("\n Preco:%.2f R$ ",studio[i].Geral.p);
        }
    }
 system("pause");
}

void Cons_Alug_bair(int con[5]){



    int consul;

    while(consul != 6){
            printf("\n1-Casas");
            printf("\n2-Terrenos");
            printf("\n3-Apartamentos");
            printf("\n4-Flats");
            printf("\n5-Studio");
            printf("\n6-Sair");
            printf("\nO que voce deseja consultar?");
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

    printf("Por qual bairro vc deseja procurar?");
    scanf("%s",b);

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

                    printf("\n Preco(venda/aluguel):%.2f R$ ",casa[i].Geral.p);

        }
    }
 system("pause");
}
void Cons_Alug_bair_Apt(int c){

    int i;
    char b[30];

    printf("Por qual bairro vc deseja procurar?");
    scanf("%s",b);

    for(i=0;i<=c-1;i++){
        if(((Ap[i].Geral.tipo==0)&&(Ap[i].Geral.bairro,b)==0)){

                    printf("\n Apartamento numero %d \n",i+1);
                    printf("\n Area do Apartamento: %.2f m2 ",Ap[i].area);
                    printf("\n Quantidade de quartos:%d ",Ap[i].quartos);
                    printf("\n Nascente Sul ou Norte:%d ",Ap[i].posi);
                    printf("\n Andar:%d ",Ap[i].andar);
                    printf("\n Valor do condominio: %f",Ap[i].cond);
                    printf("\n Vagas de garagem: %d",Ap[i].vagas);
                    printf("\n Rua:%s ",Ap[i].Geral.rua);
                    printf("\n Numero:%d ",Ap[i].Geral.numero);
                    printf("\n CEP:%d ",Ap[i].Geral.cep);

                    printf("\n Cidade:%s ",Ap[i].Geral.cidade);

                    printf("\n Preco:%.2f R$",Ap[i].Geral.p);

        }
    }
 system("pause");
}
void Cons_Alug_bair_Ter(int c){

    int i;
    char b[30];

    printf("Por qual bairro vc deseja procurar?");
    scanf("%s",b);

    for(i=0;i<=c-1;i++){
        if(((terreno[i].Geral.tipo==0)&&(terreno[i].Geral.bairro,b)==0)){

                   printf("\n Terreno numero %d \n",i+1);

                    printf("\n Area:%.2f m2 ",terreno[i].area);
                    printf("\n Rua:%s ",terreno[i].Geral.rua);
                    printf("\n Numero:%d ",terreno[i].Geral.numero);
                    printf("\n CEP:%d ",terreno[i].Geral.cep);

                    printf("\n Cidade:%s ",terreno[i].Geral.cidade);

                    printf("\n Preco: %.2f R$ ",terreno[i].Geral.p);

        }
    }
 system("pause");
}
void Cons_Alug_bair_Flat(int c){

    int i;
    char b[30];

    printf("Por qual bairro vc deseja procurar?");
    scanf("%s",b);

    for(i=0;i<=c-1;i++){
        if(((flat[i].Geral.tipo==0)&&(strcmp(flat[i].Geral.bairro,b)==0))){

                     printf("\n Flat numero %d \n",i+1);

                    printf("\n Area do Flat: %.2f m2 ",flat[i].area);
                    printf("\n Valor do condominio: %.2f R$ ",flat[i].cond);
                    printf("\n Ar-condicionado [s/n]: %s",flat[i].s.ar);
                    printf("\n Internet [s/n]:%s ",flat[i].s.net);
                    printf("\n TV a cabo [s/n]:%s ",flat[i].s.tv);
                    printf("\n Servico de lavanderia [s/n]:%s ",flat[i].s.lavanderia);
                    printf("\n Recepcao 24 hrs [s/n]:%s ",flat[i].s.recep);
                    printf("\n Rua:%s",flat[i].Geral.rua);
                    printf("\n Numero:%d ",flat[i].Geral.numero);
                    printf("\n CEP:%d ",flat[i].Geral.cep);

                    printf("\n Cidade:%s ",flat[i].Geral.cidade);

                    printf("\n Preco:%.2f R$ ",flat[i].Geral.p);

        }
    }
 system("pause");
}
void Cons_Alug_bair_Studio(int c){

    int i;
    char b[30];

    printf("Por qual bairro vc deseja procurar?");
    scanf("%s",b);

    for(i=0;i<=c-1;i++){
        if(((studio[i].Geral.tipo==0)&&(strcmp(studio[i].Geral.bairro,b)==0))){

                     printf("\n Studio numero %d \n",i+1);

                    printf("\n Area do Studio:%.2f m2 ",studio[i].area);
                    printf("\n Valor do condominio:%.2f R$ ",studio[i].cond);
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

                    printf("\n Preco:%.2f R$ ",studio[i].Geral.p);
        }
    }
 system("pause");
}

void Cons_Cid(int con[5]){

    int consul;

    while(consul != 6){
            printf("\n1-Casas");
            printf("\n2-Terrenos");
            printf("\n3-Apartamentos");
            printf("\n4-Flats");
            printf("\n5-Studio");
            printf("\n6-Sair");
            printf("\nO que voce deseja consultar?");
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

    printf("Por qual cidade vc deseja procurar?");
    scanf("%s",b);

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
                    printf("\n Preco(venda/aluguel):%.2f R$ ",casa[i].Geral.p);

        }
    }
 system("pause");
}
void Cons_Cid_Apt(int c){

    int i;
    char b[30];

    printf("Por qual cidade vc deseja procurar?");
    scanf("%s",b);

    for(i=0;i<=c-1;i++){
        if((strcmp(Ap[i].Geral.cidade,b)==0)){

                     printf("\n Apartamento numero %d \n",i+1);
                    printf("\n Area do Apartamento: %.2f m2 ",Ap[i].area);
                    printf("\n Quantidade de quartos:%d ",Ap[i].quartos);
                    printf("\n Nascente Sul ou Norte:%d ",Ap[i].posi);
                    printf("\n Andar:%d ",Ap[i].andar);
                    printf("\n Valor do condominio: %f",Ap[i].cond);
                    printf("\n Vagas de garagem: %d",Ap[i].vagas);
                    printf("\n Rua:%s ",Ap[i].Geral.rua);
                    printf("\n Numero:%d ",Ap[i].Geral.numero);
                    printf("\n CEP:%d ",Ap[i].Geral.cep);
                    printf("\n Bairro:%s ",Ap[i].Geral.bairro);

                    printf("\n tipo (1 para Vender, 2 para Alugar):%d ",Ap[i].Geral.tipo);
                    printf("\n Preco:%.2f R$ ",Ap[i].Geral.p);

        }
    }
 system("pause");
}
void Cons_Cid_Ter(int c){

    int i;
    char b[30];

    printf("Por qual cidade vc deseja procurar?");
    scanf("%s",b);

    for(i=0;i<=c-1;i++){
        if((strcmp(terreno[i].Geral.cidade,b)==0)){

                 printf("\n Terreno numero %d \n",i+1);

                    printf("\n Area:%.2f m2 ",terreno[i].area);
                    printf("\n Rua:%s ",terreno[i].Geral.rua);
                    printf("\n Numero:%d ",terreno[i].Geral.numero);
                    printf("\n CEP:%d ",terreno[i].Geral.cep);
                    printf("\n Bairro: s",terreno[i].Geral.bairro);

                    printf("\n Tipo (1 para Vender, 2 para Alugar):%d ",terreno[i].Geral.tipo);
                    printf("\n Preco: %.2f R$ ",terreno[i].Geral.p);
        }
    }
 system("pause");
}
void Cons_Cid_Flat(int c){

    int i;
    char b[30];

    printf("Por qual cidade vc deseja procurar?");
    scanf("%s",b);

    for(i=0;i<=c-1;i++){
        if((strcmp(flat[i].Geral.cidade,b)==0)){

                     printf("\n Flat numero %d \n",i+1);

                    printf("\n Area do Flat: %.2f m2 ",flat[i].area);
                    printf("\n Valor do condominio: %f",flat[i].cond);
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
                    printf("\n Preco:%.2f R$ ",flat[i].Geral.p);

        }
    }
 system("pause");
}
void Cons_Cid_Studio(int c){

    int i;
    char b[30];

    printf("Por qual cidade vc deseja procurar?");
    scanf("%s",b);

    for(i=0;i<=c-1;i++){
        if((strcmp(studio[i].Geral.cidade,b)==0)){

                    printf("\n Studio numero %d \n",i+1);

                    printf("\n Area do Studio:%.2f m2 ",studio[i].area);
                    printf("\n Valor do condominio:%.2f R$ ",studio[i].cond);
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
                    printf("\n Preco:%.2f R$ ",studio[i].Geral.p);

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

        printf("1-cadastrar imoveis\n");
        printf("2-consultar imoveis\n");
        printf("3-SAIR\n");
        printf("\n Qual opcao voce deseja acessar? ");
        scanf("%d",&op);

        switch(op){
            case 1:Cads_Im(contador);
                   break;
            case 2:Cons_Im(contador);
                   break;
        }
    }

    printf("\nVOLTE SEMPRE\n");
	return 0;
}
