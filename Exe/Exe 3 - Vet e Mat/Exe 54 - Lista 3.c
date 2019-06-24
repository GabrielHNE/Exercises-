#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char** argv){
	double a, media;
	int cont =0, end;
	printf("Para encerrar forneca -1\n");
	do{
		printf("Forneca o proximo valor: ");
		scanf("%lf", &a);
		if(a >0){
			cont ++;
			media +=a;
		} else if(a != -1){
			printf("apenas valores positivos!");
		}
	} while (a != -1);
	
	media = media/cont;
	
	printf("\n media dos valores: %lf", media);
	return 0;
}




