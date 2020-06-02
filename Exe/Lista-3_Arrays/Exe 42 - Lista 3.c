#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

double sum(){
	double a, soma;
	
	printf("\nForneca os valores para a soma (a+b): ");
	
	scanf("%lf+%lf", &a,&soma);
	soma = soma + a;	
	return soma;
}
double sub(){
	double a, subt;
	
	printf("\nForneca os valores para a soma (a-b): ");
	scanf("%lf-%lf", &a,&subt);	
	subt = a - subt;
	return subt;
}
double prod(){
	double a, mult=1;
	char go;
	
	printf("\n\"Enter para enviar o valor, \"=\" para saber o resultado Ex: 1 x 2=\"\nForneca os valores para o prod: ");
	while(go != '='){
		scanf("%lf%c", &a, &go);
		mult = mult*a;
		if(go != '='){
			printf("%.2lf x ", mult);
		}
	}	
	
	return mult;
}
double divi(){
	double a,b;
	char go = 0;
	
	printf("\n\"a/b\"\nForneca os valores de A e B para a divisao: ");
	printf("\n A = ");
	scanf("%lf", &a);
	printf("\n B = ");
	scanf("%lf", &b);
	
	if(b != 0){
		a = a/b;
	} else{
		printf("\nImpossivel dividir por zero!");
	}	
	
	return a;
}

int main(int argc, char** argv){
	int op;
	double x;
	
	while(1){
		
		printf("\nSum (1)");
		printf("\nSubtration (2)");
		printf("\nProduct (3)");
		printf("\nDivision (4)");
		printf("\nExit (5)\n");
		scanf("%d", &op);
		
		switch(op){
			case 1:{
				system("cls");
				x = sum();
				printf("\nsoma = %lf", x);
				break;
			}
			case 2:{
				system("cls");
				x = sub();
				printf("\nSubtracao = %lf", x);				
				break;
			}
			case 3:{
				system("cls");
				x = prod();
				printf("\nProduto = %lf", x);					
				break;
			}
			case 4:{
				system("cls");
				x = divi();
				printf("\nDivisao = %lf", x);					
				break;
			}
			case 5:{
				exit(1);
				break;
			}
			default:{
				printf("Unknown command!");
				break;
			}
		}
	}

	return 0;
}




