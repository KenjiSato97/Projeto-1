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
