#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

typedef struct{
	char name[80];
	int state;
	float avPrice;
	int typeFood;
}Restaurant;

void setList(Restaurant* rest){	//apenas para tirar os lixos dos espacos de memoria utilizados e configurar as posicoes 
	int i,j;
	for(i=0;i<20;i++){
		for(j=0;j<80;j++){
			rest[i].name[j] = 0;
		}
		rest[i].avPrice = 0;
		rest[i].typeFood.food = 0;
		rest[i].state = i;
	}
}

void printByFood(int food){		//as designações de comida sao dadas por inteiros (a principio)
	int i;
	
	for()
}

void showFoodList(void){
	printf("\nComida Mexicana 	(1)\n");
	printf("\nComida Arabe 		(2)\n");
	printf("\nComida Brasileira (3)\n");
	printf("\nComida Italiana 	(4)\n");
	printf("\nComida Japonesa 	(5)\n");
	printf("\nComida Chinesa	(6)\n");
	printf("\nComida Americana	(7)\n");
	printf("\nComida Africana	(8)\n");	
}

void organizeList(Restaurant* rest){		//por preço baseada na posicao STATE (mais simples do que mexer com a string name);
	int i,j, aux;
	
	for(i = 0;i<20;i){
		for(j=0;j<20;j++){
			if(rest[i].avPrice > rest[j].avPrice){	
				//troco o indice de posicoes
				aux = rest[i].state;
				rest[i].state = rest[j].state;
				rest[j].state = aux;
			}
		}
	}
}

void cadRest(int i, Restaurant* rest){		//para cadastraar os restaurantes
	int mFood;
	system("cls");
	fflush(stdin);
	//Name
	printf("\nForneca o nome do restaurante: ");
	fgets(rest[i].name,80,stdin);
	//Average price
	printf("\nPreco medio: R$ ");
	scanf("%lf", &rest[i].avPrice);
	//foodType
	printf("Tipo de comida: ");
	showFoodList();
	scanf("%d", &mFood);
	rest[i].typeFood = mFood;
	organizeList(rest);	//organiza a lista a cada restaurante adcionado
	pritnf("\t\t\tCadastrado com sucesso!\n\n")
}

int main(int argc, char** argv){
	int op;
	int qtd = 0;	//quantidade de restaurantes cadastrados;
	
	Restaurant rest[20];
	setList(rest); // deixa a lista toda nula para poder organizar; 
	
	while(1){
		printf("\nCadastrar Restaurante (1)");
		printf("\nProcurar restaurantes(2)");	// dentro desse colocar a opção procurar por preco;
		printf("\nSair (3)\n");
		scanf("%d", &op);
		
		//Menu de escolhas e chamadas de funcoes;
		switch(op){
			case 1:{
				cadRest(qtd, rest);
				qtd++;
				break;
			}
			case 2:{
				
				break;
			}
			case 3:{
				exit(1);
				break;
			}
			default:{
				printf("\n Unknown Command!\n");	
				break;
			}
		}
	}
	
	return 0;
}




