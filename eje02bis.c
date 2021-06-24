#include <stdio.h> 
#include <stdbool.h> 

#define CONJURO_1 "Win"

int main(){
	int opcion_ingresada=0;
	bool desea_dejar_msj= false;
	int valor_bool= 0;

	printf("Hola! soy el aparato de mensajes! \n");
	printf("Ingrese la opcion segun corresponda:\n");
	printf("1 - Familiar \n");
	printf("2 - Amigo\n");
	printf("3 - Trabajo\n");
	printf("4 - Publicidad\n");
	scanf("%i", & opcion_ingresada);

	switch (opcion_ingresada){
		case 1:
			printf("Desea dejar un mensaje? Ingrese 1 para si y 0 para no\n");
			scanf("%i", &valor_bool);
			desea_dejar_msj = valor_bool;
			break;
		case 2: 
			printf("Desea deja un mensaje? Ingrese 1 para si o 0 para no\n");
			scanf("%i", &valor_bool);
			desea_dejar_msj= valor_bool;
			break;
		case 3: 
			printf("Numero Equibocado!\n" );
			break;
		case 4:
			printf(":<\n");
		}

	if (valor_bool){
		printf("Ingrese su msj despues del pep\n");
		printf("Peeeeeeeep\n");
	}else{
		printf("Hasta luego!\n");
	}


return 0;
}