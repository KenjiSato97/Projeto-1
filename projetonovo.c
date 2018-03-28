//============================================================================
// Name        : projetonovo.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description :
//============================================================================
#include <stdio.h>
typedef struct{
	char rua[50];
	int numero;
	int cep;
	char bairro[30];
	char cidade[30];
}tEnd;

typedef struct{
  int tipo;//Vender ou Alugar
	int p;// preço
}tVend;

typedef struct{
	char ar[2];
	char net[2];
	char tv[2];
	char lavanderia[2];
	char limpeza[2];
	char recep[2];
}tServico;	

typedef struct{
	int pavimento;
	int quartos;
	float areat;// area terreno
	float areac;// area construida
	tEnd e;//e = endereço
	tVend v;//v = venda
}tCasa;

typedef struct{
	float area;
	int quartos;
	int posi;
	int andar;
	float cond;
	float vagas;
  tEnd e;
	tVenda v;
}tAp;//apartamentos

typedef struct{
	float area;
	tEnd e;
	tVenda v;
}tTer;//terrenos

typedef struct{
	float area;
	float cond;
	tServico s;
  tEnd e;
	tVenda v;
}tFlat;//Flat

typedef struct{
	float area;
	float cond;
	char piscina[2];
	char sauna[2];
	char ginastica[2];
	tServico s;
  tEnd e;
	tVenda v;
}tStudio;//Studio

tCasa casa[100];
tAp ap[100];
tTer terreno[100];
tFlat flat[100];
tStudio studio[100];

	printf("1-cadastrar\n");
	printf("2-consultar imoveis\n");
	printf("3-SAIR\n");
	printf("\n Qual opcao voce deseja acessar? ");
	scanf("%d",&opcao);
void
switch(opcao){
	case 1:
		printf("1-cadastrar casa\n");
		printf("2-cadastrar apartamento\n");
		printf("3-cadastrar terreno\n");
		printf("4-cadastrar flat\n");
		printf("5-cadastrar studio\n");
		scanf("%d",&imovel);

switch(imovel){
	case 1:
		int CadCasa(){
			int n,i;
			printf("quantas casas deseja cadastrar?");
			scanf("%d", &n);

			for(i=0;i<=n&&i<=99;i++){
				printf("\n Quantidade de pavimentos: ");
				scanf("%[^\n]s",casa[i].pavimento);
				printf("\n Quantidade de quartos: ");
				scanf("%[^\n]s",casa[i].quartos);
				printf("\n Area do terreno: ");
				scanf("%[^\n]s",casa[i].areat);
				printf("\n Area construida: ");
				scanf("%[^\n]s",casa[i].areac);
				printf("\n Rua: ");
				scanf("%[^\n]s",casa[i].e.rua);
				printf("\n Numero: ");
				scanf("%[^\n]s",casa[i].e.numero);
				printf("\n CEP: ");
				scanf("%[^\n]s",casa[i].e.cep);
				printf("\n Bairro: ");
				scanf("%[^\n]s",casa[i].e.bairro);
				printf("\n Cideade: ");
				scanf("%[^\n]s",casa[i].e.cidade);
				printf("\n Vender ou Alugar: ");
				scanf("%[^\n]s",casa[i].v.tipo);
				printf("\n Preco: ");
				scanf("%[^\n]s",casa[i].v.p);
				system("pause");
			}
			break;
		}
	case 2:
		int CadAp()
		{
			int n,i;
			printf("quantos apartamentos deseja cadastrar?");
			scanf("%d", &n);

			for(i=0;i<=n&&i<=99;i++){
				printf("\n Area do Apartamento: ");
				scanf("%[^\n]s",Ap[i].area);
				printf("\n Quantidade de quartos: ");
				scanf("%[^\n]s",Ap[i].quartos);
				printf("\n Nascente Sul ou Norte: ");
				scanf("%[^\n]s",Ap[i].posi);
				printf("\n Andar: ");
				scanf("%[^\n]s",Ap[i].andar);
				printf("\n Valor do condominio: ");
				scanf("%[^\n]s",Ap[i].cond);
				printf("\n Vagas de garagem: ");
				scanf("%[^\n]s",Ap[i].vagas);
				printf("\n Rua: ");
				scanf("%[^\n]s",Ap[i].e.rua);
				printf("\n Numero: ");
				scanf("%[^\n]s",Ap[i].e.numero);
				printf("\n CEP: ");
				scanf("%[^\n]s",Ap[i].e.cep);
				printf("\n Bairro: ");
				scanf("%[^\n]s",Ap[i].e.bairro);
				printf("\n Cidade: ");
				scanf("%[^\n]s",Ap[i].e.cidade);
				printf("\n Vender ou Alugar: ");
				scanf("%[^\n]s",Ap[i].v.tipo);
				printf("\n Preco: ");
				scanf("%[^\n]s",Ap[i].v.p);
				system("pause");
			}
			break;
		}
	case 3:
		int CadTer(){
			int n,i;
			printf("quantos terrenos deseja cadastrar?");
			scanf("%d", &n);

			for(i=0;i<=n&&i<=99;i++){
				printf("\n Area: ");
				scanf("%[^\n]s",terreno[i].area);
				printf("\n Rua: ");
				scanf("%[^\n]s",terreno[i].e.rua);
				printf("\n Numero: ");
				scanf("%[^\n]s",terreno[i].e.numero);
				printf("\n CEP: ");
				scanf("%[^\n]s",terreno[i].e.cep);
				printf("\n Bairro: ");
				scanf("%[^\n]s",terreno[i].e.bairro);
				printf("\n Cidade: ");
				scanf("%[^\n]s",terreno[i].e.cidade);
				printf("\n Vender ou Alugar: ");
				scanf("%[^\n]s",terreno[i].v.tipo);
				printf("\n Preco: ");
				scanf("%[^\n]s",terreno[i].v.p);
				system("pause");
		}
		break;
	}
}

void ConsultIm(){
	int consul, i;
	printf("O que voce deseja consultar? 1-Terrenos 2-Casas 3-Apartamentos: ");
	scanf("%d", &consul);

	switch (consul){
		case 1:
			for(i=0; i<countCt; i++){
				printf("\nTerreno%d:\nTem area de %f;\n", i, terreno[i].area);	//mostra especificacoes dos terrenos cadastrados
				printf("Endereco do terreno%d: %s, %d, CEP: %d, bairro: %c, cidade: %c;\n\n",
				i, e[i].rua, e[i].numero, e[i].cep, e[i].bairro, e[i].cidade); //Mostra o endereco dos terrenos
			}
			printf("_______________________________________________________________________________________________");
			break;

		case 2:
			for(i=0; i<countCc; i++){
				printf("\nCasa%d:\n%d pavimentos\n%d quartos\nterreno de area: %f\n area construida: %f\n\n",
				i, casa[i].pavimentos, casa[i].quartos, casa[i].areat, casa[i].areac);      //especificacoes das casas cadastradas
			}
			printf("_______________________________________________________________________________________________");
			break;

		case 3:
			for(i=0; i<countCap; i++){
				printf("Apartamento%d:\nArea: %f\nQuartos: %d\nPosicao: %d\nValor do condominio: R$%f\nQuantidade de garagens: %f",
				i, ap[i].area, ap[i].quartos, ap[i].posi, ap[i].cond, ap[i].vagas);			//especificacoes dos terrenos cadastrados
			}
			printf("_______________________________________________________________________________________________");
			break;
	}
}

int main()
{





	return 0;
}
