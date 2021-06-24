#include <stdio.h> 
#include <stdbool.h> 

#define CONJURO_1 "Win"
#define CONJURO_2 "GAR"
#define CONJURO_3 "di"
#define CONJURO_4 "um"

#define CONJURO_5 "lev"
#define CONJURO_6 "i"
#define CONJURO_7 "O"
#define CONJURO_8 "sa"
int main(){
	int conjuro_seleccionado=0;
	const RESPUESTA_CORRECTA= 3;

	printf("Seleccione cual cree que es la opcion correcta para completar el conjuro Win-GAR-di-um- [ ]-i-O-sa\n");
	printf("Ingrese 1 para completar con: Win\n");
	printf("Ingrese 2 para completar con: Gar\n");
	printf("Ingrese 3 para completar con: di\n");
	printf("Ingrese 4 para completar con: um\n");
	printf("Ingrese 5 para completar con: lev\n");
	printf("Ingrese 6 para completar con: i\n");
	printf("Ingrese 7 para completar con: i\n");
	printf("Ingrese 8 para completar con: sa\n");
	scanf("%i", &conjuro_seleccionado);

	switch(conjuro_seleccionado){
		case 1:
			printf("Win-GAR-di-um %s-i-O-sa\n", CONJURO_1);
			break;
		case 2:
			printf("Win-GAR-di-um %s-i-O-sa\n", CONJURO_2 );
			break;
		case 3:
			printf("Win-GAR-di-um %s-i-O-sa\n", CONJURO_3 );
			break;
		case 4: 
			printf("Win-GAR-di-um %s-i-O-sa\n", CONJURO_4);
			break;
		case 5: 
			printf("Win-GAR-di-um %s-i-O-sa\n", CONJURO_5);
			break;
		case 6:
			printf("Win-GAR-di-um %s-i-O-sa\n", CONJURO_6 );
			break;
		case 7:
			printf("Win-GAR-di-um %s-i-O-sa\n", CONJURO_7 );
			break;
		case 8:
			printf("Win-GAR-di-um %s-i-O-sa\n", CONJURO_8 );

		}
	if (conjuro_seleccionado == RESPUESTA_CORRECTA){
		printf("Su respuesta fue correcta!! :>\n");
	}else{
		printf("Su respuesta es incorrecta, estudie mas!\n");
	}

return 0;
}