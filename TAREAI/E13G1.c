/*****************************************************************************************************************
 * Realizar un algoritmo que permita dividir con el m�todo de resta sucesiva. Los valores ser�n ingresados       *
 * por el usuario.                                                                                               *
 *****************************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int a=0;
	int b=0;
	int i=0; 
	int div=0;
	
	printf("Ingrese valor para a\n");
	scanf("%d",&a);
	printf("Ingrese valor para b\n");
	scanf("%d",&b);
	
	while(a!=0) 
	{
	
		a=a-b;
		i=i+1;
    }
	
	printf("La divisi�n es: %d",i);
	return 0;
}
