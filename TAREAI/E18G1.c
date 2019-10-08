/*************************************************************************************************************
 * Realizar un algoritmo que permita contar los números pares e impares en una serie de 10 iteraciones       *
 * ingresados por teclado.                                                                                   *
 *************************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	
	int n=10;
	int num=0;
	int contpar=0;
	int contimpar=0;
	int i=0;
	for(i=1;i<=n;i++)
	{
		printf("Ingrese un numero\n");
		scanf("%d",&num);
		
		if((num%2)==0)
		{
			contpar=contpar+1;
	    }
	    else
	    {
		
	   
			contimpar=contimpar+1;
        }
	}
	printf("Cantidad de números pares %d",contpar);
	printf("Cantidad de numero impares %d",contimpar);
	return 0;
}
