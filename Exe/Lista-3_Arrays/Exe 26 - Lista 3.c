#include <stdio.h>
#include <stdlib.h>

int main (int argc, char** argv){
	int i;
	
	for(i = 0; i < 26;i++){
		printf("decimal: %d Caracter: %c",i + 65, i + 65);
		printf("\n");
	}
	return 0;
}

