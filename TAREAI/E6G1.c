/**************************************************************************************************************
 * Crear un algoritmo que permita realizar la sumatoria de 10 números distintos con las sentencias MIENTRAS,  *
 * REPETIR y PARA.                                                                                            *
 **************************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#define Max 9;
int main(int argc, char *argv[]) {
	int num=0;
	int i=0;
	int sum=0;
	while(i<10) 
	{
		printf("Ingrese un numero\n");
		scanf("%d",&num);
		sum=sum+num;
		i=i+1;
    }
	
    printf("Luego de un mientras la sumatoria es: %d\n",sum);
    
	sum=0;
	num=0;
	i=0;
	do
	{
		printf("Ingrese un numero\n");
		scanf("%d",&num);
		sum=sum+num;
		i=i+1;
	}while(i<=9);
	
	printf("Luego de un repetir la sumatoria es: %d\n",sum);
	
	num=0;
	sum=0;
	for(i=9;i>=0;i--)
	{
	
		printf("Ingrese un numero\n");
		scanf("%d",&num);
		sum=sum+num;
    }
	    printf("La sumatoria despues de un Para es: %d",sum);
	return 0;
}
