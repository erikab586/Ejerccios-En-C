/***************************************************************************************************************
 Crear un algoritmo que permita mostrar un menú con el contenido del ejercicio 5. Facilitando al usuario       *
 ingresar varias opciones, sin salir del programa.                                                             *
 ****************************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int opc=0;
	do
	{
			
		printf("Ingrese una opción\n");
		printf("Ingrese opción 1. Para mensaje 1.\n");
		printf("Ingrese opción 2. Para mensaje 2.\n");
		printf("Ingrese opción 3. Para mensaje 3.\n");
		printf("Ingrese opción 4. Para mensaje 4.\n");
		printf("Ingrese opción 5. Para Salir\n");
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
	}while(opc!=5);
	return 0;
}
