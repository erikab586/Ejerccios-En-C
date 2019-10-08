/**************************************************************************************************************
 * Escribir un algoritmo que permita definir la potencia de un numero dado, el usuario ingresa la base y el   *
 * exponente. Ojo: no se puede usar el operador aritmético de potencia.                                       *
 **************************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
		
	int b=0;
	int e=0;
	int i=0;
	int pot=1;
	
	printf("Ingrese el valor para la base de la potencia\n");
	scanf("%d",&b);
	printf("Ingrese el valos para el exponente de la potencia\n");
	scanf("%d",&e);
	
	while(i<e) 
	{
		pot=pot*b;
		i=i+1;
    }
	
	printf("La potencia es: %d",pot);
	return 0;
}
