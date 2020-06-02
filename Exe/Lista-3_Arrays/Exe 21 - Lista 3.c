#include <stdio.h>
#include <stdlib.h>

int main (int argc, char** argv){
	int num,i;
	
	printf("Numero: ");
	scanf("%d", &num);
	
	for(i = 0; i <= (num-1); i++){
		
		printf("%d ", num -i);
		
		if(i == (num-1)){
			
			for(i=0; i<num;i++){
				printf("%d ", i+1);
			}
		}
	}
	return 0;
}

