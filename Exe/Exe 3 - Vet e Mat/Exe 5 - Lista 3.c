#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

typedef struct{
	int cliente;
	char conta[7];
	double saldo;
	double valor_Op;
	char op;
}cliente;

int main(int argc, char** argv){
	cliente cadastro[20];
	int n, i, j, op;
	char vConta[7], vContacmp[7];

	printf("\t \t Atualizar Clientes");
	printf("\n \n Informe o numero de clientes(max: 20)): ");
	scanf("%d", &n);
	
	for(i = 0; i<n;i++){
		cadastro[i].cliente = i+1;
		printf("\n Forneca a conta do cliente %d: ", i+1);
		fflush(stdin);
		fgets(cadastro[i].conta,7,stdin);
		printf("\nForneca o saldo do cliente %d: ",i+1);
		fflush(stdin);
		scanf("%lf",&cadastro[i].saldo);		
	}
	
	
	printf("\nForneca a quantidade de operacoes efetuadas no dia: ");
	scanf("%d", &op);
	
	for(j = 0; j<op; j++){
		printf("Informe a conta da %d operacao: ", j+1);
		fflush(stdin);
		fgets(vConta, 7,stdin);
		for(i = 0; i < n; i++){
			if(strncmp(vConta, cadastro[i].conta, 7)){	//FALTA RESOLVER ESSA DESGRAÇA APENAS
				
				printf("\n Valor: ");
				scanf("%lf", &cadastro[i].valor_Op);
				printf("\nOperacao(C ou D): ");
				scanf("%c", &cadastro[i].op);
				
				switch(cadastro[i].op){
					case 'C':
						cadastro[i].saldo += cadastro[i].valor_Op;
						break;
					case 'D':
						cadastro[i].saldo -= cadastro[i].valor_Op;
						break;
					default:
						printf("operacao nao encontrada!");
						break;
				}
				break;
			}
		}
	}
	
	for(i = 0; i<n; i++){
		printf("\nCliente %d conta: %s", i, cadastro[i].conta);
		printf("\nSaldo Atual: %.2lf", cadastro[i].saldo);
		printf("..........................................\n");
	}
	
	return 0;
}
