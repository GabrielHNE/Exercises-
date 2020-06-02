#include <stdio.h>
#include <stdlib.h>

int main (int argc, char** argv){
	char tab[9][9];
	int i, j, cont = 0,ver = 0;
	
	/*
	peao = 1 ok
	cavalo = 3 ok
	bispo = 3
	torre = 5
	rainha = 10 ok
	rei = 50 ok	
	*/
	// posiçao nula - 0 = NULL para char; 
	
	tab[0][0] = 0;
	
	// printa de A ate H e de 1 ate 8 e preenche de 0
	printf("Forneca: R - rei; D - rainha; P - Peao; C - Cavalo; B - Bispo; T - Torre; 0 - Se for vazia a posicao: \n");
	for(i = 1; i < 9; i++){
		tab[0][i] = 48 + i;
		tab[i][0] = 64 + i;
		for(j = 1; j < 9;j++){
			if((j+i)%2 == 0){
				tab[i][j] = 254;
			} else {
				tab[i][j] = 255;
			}
		}
	}
	// pedir a posição
	for(i=1; i < 9; i++){
		for(j=1; j<9;j++){
			printf("%c,%c ", 64+i, 48+j);
			scanf(" %c", &tab[i][j]);
			if((tab[i][j] == 'C' )|| (tab[i][j] == 'c')||(tab[i][j] =='B')||(tab[i][j] == 'b')){ //cavalo e bispo
				cont += 3;
				ver ++;
			} else if (tab[i][j] == 'P' ||tab[i][j] == 'p'){		// peao
				cont +=1;
				ver++;
			} else if ((tab[i][j] == 'T') || (tab[i][j] == 't')){  // Torre
				cont += 5;
				ver++;
			} else if((tab[i][j] == 'R')||(tab[i][j] == 'r')){		// rei
				cont += 50;
				ver++;
			} else if ((tab[i][j] == 'D')||(tab[i][j] =='d')){		// Rainha
				cont += 10;
				ver++;
			} else if(tab[i][j]=='0'){	
			} else {
				printf("Unknown chess piece!");
				break;
			}		
		}
		printf("\n");
		if(ver == 33){
			printf("Numero de pecas EXCEDIDOS (MAX:32)\n");
			break;
		}
	}
	//para pritar o tabuleiro;
	for(i = 1; i < 9; i++){
		for(j = 1; j < 9; j++){
			printf(" %c",tab[i][j]);
		}
		printf("\n");
	}
	
	printf("\n %d ", cont);
	return 0;
}

