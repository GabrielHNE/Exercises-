#include <stdio.h>
#include <stdlib.h>

int main (int argc, char** argv){
	int matriz[100][100];
	int i, j, m, n;
	
	printf("Fornca o tamanho da matriz: ");
	scanf("%d,%d", &n,&m);
	
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			if(i==j){
				matriz[i][j] = (3*i*i)-1;
			} else if(i < j){
				matriz[i][j] = (2*i+7*j-2);
			} else if( i > j){
				matriz[i][j] = (4*i*i*i)-5*j*2+1;
			}
		}
	}
	
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
	return 0;
}
