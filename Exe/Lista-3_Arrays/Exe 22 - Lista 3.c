#include <stdio.h>
#include <stdlib.h>

int main (int argc, char** argv){
	int x, bin[100], j=0, i;
	
	printf("Numero: ");
	scanf("%d",&x);
	
	do{	
		bin[j]= x%2;	
		x = x/2;
		j++;
	}while(x != 0);
	
	printf("Bin: ");
	for(i = (j-1); i >=0;i--){
		printf("%d ",bin[i]);		
	}

	return 0;
}

