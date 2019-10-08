/***************************************************************************************************************
 *	Realizar un algoritmo que solicite al usuario sus datos personales: nombre, apellido, cedula y edad.       *
 *	Luego mostrar en pantalla los datos solicitados.                                                           *
****************************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	//Declaración e inicializacion de variables
	
	char nombre[10]="Hola";
	char apellido[10]="hola";
	char cedula[10]="1234";
	int edad=0; 
	
	//Solicitar los datos
	printf("Ingrese el nombre del usuario: ");
	scanf("%s",&nombre);
	printf("Ingrese el apellido del usuario: ");
	scanf("%s",&apellido);
	printf("Ingrese la cedula del usuario: ");
	scanf("%s",&cedula);
	printf("Ingrese la edad del usuario: ");
	scanf("%d",&edad);
	
	//Mostrar Datos
	printf("Su Nombre es: %s\n",&nombre);
	printf("Su Apellido es: %s\n",&apellido);
	printf("Su Cedula es: %s\n",&cedula);
	printf("Su Edad es: %d\n",edad);
	return 0;
}
