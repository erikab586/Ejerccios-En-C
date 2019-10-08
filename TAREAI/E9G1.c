/*************************************************************************************************************
 * Realizar un algoritmo que permita determinar si un número es par o no.                                    *
 *************************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num=0;
	printf("Ingrese un numero\n");
	scanf("%d",&num);
	if((num%2)==0)
	{
	
		printf("El numero es par\n");
   }
    else
    {
	
		printf("El numero es impar\n");
    }
	return 0;
}
