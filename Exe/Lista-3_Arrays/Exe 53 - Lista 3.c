#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv){
	int op,sexo;
	float alt, ideal;		
	while(1){
		
		printf("\nCalcular Peso Ideal (1)");
		printf("\nSair (2)\n");
		scanf("%d", &op);
		
		switch(op){
			case 1:{
				fflush(stdin);
				printf("Selecione o genero: \t");
				printf("Feminino (1)\n\t\t\tMasculino  (2)\n");
				scanf("%d", &sexo);
				
				printf("\nforneca a Altura: ");
				scanf("%f", &alt);
				
				if(sexo == 2){
					ideal = 72.7*alt-58;
				} else if(sexo == 1){
					ideal = 62.1*alt - 44.7;
				}
				
				printf("Peso Ideal: %.2f kg\n", ideal);
				break;
			}
			case 2:{
				exit(1);
				break;
			}
			default:{
				printf("Unknown Command!\n");
				break;
			}
		}
	}
	return 0;
}




