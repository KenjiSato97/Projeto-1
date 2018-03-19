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
}tEndc;

typedef struct
{
  char tipo[30];
	int pc;
	int pa;
}tVend;

typedef struct
{
	int pavimento;
	int quartos;
	float areat;
	float areac;
	tEnd e;//e = endereço

}tCasa;

typedef struct
{
	float area;
	int quartos;
	int posi;
	float cond;
	float vagas;
  tEnd e;
}tAp;

typedef struct
{
	float area;
	tEndc e;
}tTer;

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
