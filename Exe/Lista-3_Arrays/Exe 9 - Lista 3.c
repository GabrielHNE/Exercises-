/*	Escreva uma função que receba como parâmetro uma matriz real Anxm e uma posição (i,j) da matriz e, 
	para este, calcular a média aritmética de seus vizinhos, ou seja, 
	a média entre A(i-1, j), A(i+1, j), A(i, j+1), A(i, j-1). Desconsidere, se for o caso,
	os vizinhos que não pertencem à matriz (por exemplo, os vizinhos de (0, 0) 
	são somente (0,1) e (1,0)).
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (int argc, char** argv){
	setlocale(LC_ALL,"Portuguese");
	
	int i, j, n, m,cont=4;
	double mat[100][100],media;
	//zerando toda a matriz
	
	for(i = 0; i<100; i++){
		for(j = 0; j<100; j++){
			mat[i][j] = -1;
		}
	}
	
	printf("Forneça o valor da matriz(max 98x98): (L,C)");
	scanf("(%d,%d)", &n,&m);
	
	for(i=1; i <= n; i++){
		for(j=1; j <= m; j++){
			
			printf(" Valor na posição: %d,%d ", i,j);
			scanf("%lf",&mat[i][j]);
		}
		printf("\n");
	}
	
	system("cls");
	for(i=1; i <= n; i++){
		for(j=1; j <= m; j++){
			printf("%.2lf ", mat[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i = 1; i<=n;i++){
		for(j = 1; j<=m; j++){	
			media = 0;		//para efetuarmos a media;
			
			if(mat[i][j+1] < 0){
				cont --;
				media += 1;
			} 
			if(mat[i-1][j] < 0){
				cont --;
				media += 1;
			}
			if(mat[i+1][j] < 0){
				cont --;
				media += 1;
			} 
			if(mat[i][j-1] < 0){
				cont --;
				media += 1;
			}
			
			media += mat[i][j+1] + mat[i-1][j] + mat[i+1][j] + mat[i][j-1];	// elimina os -1 Desnecessarios
			media = media/cont;
			printf("%.2lf ", media);
			cont = 4;						//voltando cont ao estado normal
		}
		printf("\n");					
	}	
	return 0;
}

