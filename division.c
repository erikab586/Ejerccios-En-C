#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int a=0;
	int b=0;
	int contador=0; 
	char nombre [15]=" "; 

    printf("Ingrese nombre: ");
	scanf("%s",&nombre);
	printf("Ingrese valor para a: ");
	scanf("%d",&a);
	printf("Ingrese valor para b: ");
	scanf("%d",&b);
	
	//Se realizo la divison por resta sucesiva
	while (a!=0)
	{
	
		a=a-b;
		contador++;
    }
	
	//Verificamos si contador es mayor que 5 le sumo 1 unidad en caso contrario le resto 2 unidades
	
	if(contador>5)
	{
		contador=contador+1;
		printf("La division mas 1 es: %d\n",contador);
	}
	else
	{
		contador=contador-2;
		printf("La division menos 2 es: %d",contador);
	}
	
	printf("Mi nombre es: %s\n",&nombre);
	
	return 0;
}




