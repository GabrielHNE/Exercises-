#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char** argv){
	int med;
	
	printf("Forneca a media final: ");
	scanf("%d", &med);
	
	if(med>=0 && med <= 4.9){
		printf("\n Conceito D");		
	} else if(med>=5.0 && med<=6.9){
		printf("\n Conceito C");
	} else if(med>=7.0 && med <= 8.9 ){
		printf("\n Conceito B");
	} else if(med>=9.0 && med<=10.0){
		printf("\n Conceito A");
	}
	return 0;
}




