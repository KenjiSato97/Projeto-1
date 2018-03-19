//============================================================================
// Name        : projetonovo.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description :
//============================================================================
#include <stdio.h>
typedef struct
{
	char rua[50];
	int numero;
	int cep;
	char bairro[30];
	char cidade[30];
}tEnd;

typedef struct
{
  int tipo;//1 para alugar, 2 para vender, 3 para os dois
	int pc;// preço para comprar
	int pa;// preço para vender
}tVend;

typedef struct
{
	int pavimento;
	int quartos;
	float areat;// area terreno
	float areac;// area construida
	tEnd e;//e = endereço
	tVend v;//v = venda
}tCasa;

typedef struct
{
	float area;
	int quartos;
	int posi;
	float cond;
	float vagas;
  tEnd e;
	tVenda v;
}tAp;//apartamentos

typedef struct
{
	float area;
	tEnd e;
	tVenda v;
}tTer;//terrenos

tTer terreno[100];

tCasa casa[100];

tAp ap[100];


int Cadcasa()
{
	int n,i;
	printf("quantas casas deseja cadastrar");
	scanf("%d", &n);

	for(i=0;i<=n&&i<=99;i++)
	{


	}




	return n;
}





int main()
{






}
