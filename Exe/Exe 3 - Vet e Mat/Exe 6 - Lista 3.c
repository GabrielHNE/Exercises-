#include <stdio.h>
#include <stdlib.h>

int main (int argc, char** argv){
	int ling, edit, cod, cver;
	
	printf("Forneca o codigo ISBN: ");
	scanf("%d - %d - %d - %d", &ling, &edit, &cod, &cver);
	
	printf("\n Lingua: %d", ling);
	printf("\n Editora: %d", edit);
	printf("\n Codigo: %d", cod);
	printf("\n Cod Verificador: %d", cver);
	
	return 0;
}

