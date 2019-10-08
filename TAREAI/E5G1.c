/***************************************************************************************************************
 *Se desea mostrar los siguientes mensajes, si el cliente presiona 1: 'hola mundo', si el cliente presiona     *
 *2.'Vamos bien', si el cliente presiona 3: 'Estoy en curso' y si presiona 4: 'Ya estoy creando pseudocodigo'. *
 ***************************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int opc=0;
	printf ("Ingrese una opción\n");
	printf ("Ingrese opción 1. Para mensaje 1.\n");
	printf ("Ingrese opción 2. Para mensaje 2.\n");
	printf ("Ingrese opción 3. Para mensaje 3.\n");
	printf ("Ingrese opción 4. Para mensaje 4.\n");
	printf ("Ingrese opción 5. Para Salir\n");
	scanf("%d",&opc);
	
	switch (opc)
	{
	
		case 1:
			printf("Hola Mundo\n");
		break;
		case 2:
			printf("Vamos Bien\n");
		break;
		case 3:
			printf("Estoy en curso\n");
		break;
		case 4:
			printf("Ya estoy creando Pseudocodigo\n");
		break;
		case 5:
			printf("Gracias por usar E5G1\n");
		break;
		default:
			printf("Error! Opción invalida\n");
		break;
    }

	return 0;
}
