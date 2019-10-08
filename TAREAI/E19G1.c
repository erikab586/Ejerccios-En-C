/**************************************************************************************************************
 * Calcular el factorial de un número ingresado por teclado y mostrar en pantalla su factorial.               *
 **************************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int num=0;
	int i=1;
	int fact=1;
	printf("Ingrese un numero para determinar su factorial.\n");
	scanf("%d",&num);
	if ((num==0)||(num==1))
		fact=1;
	else
	{
	
		while(i<num+1) 
		{
			fact=fact*i;
			i++;
	    }
    }
	
	printf("El factorial es %d\n",fact);
	return 0;
}
