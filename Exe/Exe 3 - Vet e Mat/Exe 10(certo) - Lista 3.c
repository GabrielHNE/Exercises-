#include <stdio.h>
#include <stdlib.h>

int main (int argc, char** argv){
	char abc[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	char ref[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	char frase[250];
	int vzs,aux,i,j, cont=0;
	
	
	scanf("%d", &vzs);
	//rotaciona o alfabeto de
	for(i = 0; i < vzs;i++){
		for(j=0; j<25;j++){
			aux = abc[0];
			abc[0] = abc[j+1];
			abc[j+1] = aux;
		}
	}
	
	printf("forneca a frase a ser cifrada: ");
	fflush(stdin);
	fgets(frase,250,stdin);
	
	i=0;
	
	//retira os espaços da frase!!
	do{
		if(frase[i]==' '){
			for(j=i;j<249;j++){
				frase[j]=frase[j+1];
			}
		}
		i++;
	} while(frase[i]!='.');

	// printa a frase com base nas letras referenciais;
	printf("Frase cifrada: ");
	for(i=0; i <250; i++){
		cont ++;
		if(frase[i] != '.'){
			for(j = 0; j < 26; j++){
				if(frase[i]==ref[j]){
					printf("%c", abc[j]);
					if(cont == 4){
						printf(" ");
						cont =0;
					}
				}
			}
		} else{
			break;
		}
	}
	
//	printf("\n");
//	for(i = 0; i <250;i++){
//		if(frase[j]!='.'){
//			printf("%c", frase[j]);
//		}
//	}
//	
	
	return 0;
}

