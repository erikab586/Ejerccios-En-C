#include <stdio.h>
#include <stdlib.h>
#define MAX 5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a[MAX];
	int num;
	int i;
	//Inicializando el vector a, el cual tiene 5 posiciones
	printf("Inicializando vector\n");
	for(i=0;i<MAX;i++)
	{
		a[i]=0;
	}
	
	printf("Vector inicializado\n");
	for(i=0;i<MAX;i++)
	{
	    printf("Inicializado:%d ",a[i]);
		printf("En la posicion: %d\n",i);
	}
	printf("Cargando Vector\n");
    for(i=0;i<MAX;i++)
	{
		printf("Ingrese un valor: ");
		scanf("%d",&num);
		a[i]=num;
	}
	printf("Vector cargado\n");
	for(i=0;i<MAX;i++)
	{
		printf("Se cargo:%d ",a[i]);
		printf("En la posicion: %d\n",i);
	}
	return 0;
}
