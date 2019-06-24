#include <stdio.h>
#include <stdlib.h>

int main (int argc, char** argv){
	char palavra[100];
	int i;
	
	printf("Palavra (ate 100 caracteres e digite . no final): ");
	scanf("%s", &palavra);
	
	for(i = 0; i < 100; i++){
		if(palavra[i] != '.'){
			
			if((palavra[i] == 'a')|| (palavra[i] == 'e')||(palavra[i] == 'i')||(palavra[i] == 'o' )|| (palavra[i] == 'u')){
				printf("\n vogal: %c",palavra[i]);
			} else {
				printf("\n Consoante: %c",palavra[i]);
			} 
		} else {
			break;
		}
	}
	return 0;
}

