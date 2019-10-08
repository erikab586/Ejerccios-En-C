/****************************************************************************************************************
 * Realizar un algoritmo que permita multiplicar con el método de suma sucesiva. Los valores serán              *
 * ingresado por el usuario.                                                                                    *
 ****************************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int a=0;
	int b=0;
	int i=0; 
	int mult=0;
	
	printf("Ingrese valor para a\n");
	scanf("%d",&a);
	printf("Ingrese valor para b\n");
	scanf("%d",&b);
	
	while(i<b) 
	{
		mult=mult+a;
		i++;
    }
	
	printf("La multiplicación es: %d\n",mult);	
	return 0;
}
