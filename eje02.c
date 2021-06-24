#include <stdio.h> 
#include <stdbool.h> 

int main(){
	int numeroCaracter = 0;

	printf("Ingrese el valor numero del caracter de la tabla ascii deseado\n");
	scanf("%i", &numeroCaracter);

	switch(numeroCaracter){
		case 'r':
			printf("Ingresaste el valor numero del caracter 'r'\n");
			break;
		case 'z':
			printf("Ingresaste el valor numero del caracter 'z'\n");
			break;
		case 'Q':
			printf("Ingresaste el valor numero del caracter 'Q'\n");
			break;
		case 'D':
			printf("Ingresaste el valor numero del caracter 'D'\n");
			break;
		case 'F':
			printf("Ingresaste el valor numero del caracter 'F'\n");
			break;
		default:
			printf("El valor numero no fue considerado\n");

	}


	return 0;
}