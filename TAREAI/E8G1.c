/**************************************************************************************************************
 * Realizar un algoritmo que permita determinar si un número es primo o no. Si el número es primo sumar       *
 * cinco (5) unidades y en caso contrario restar cinco (2) unidades.                                          *
 **************************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int num=0;
	int cont=0;
	printf("Ingrese un número\n");
	scanf("%d",&num);
	int i=1;
	while(i<=num)
	{
	
		if ((num%i)==0)
		{
		
			cont=cont+1;
	    }
		i++;
    }
	int sum=0;
	if (cont==2)
	{
	
		sum=num+5;
		printf("Es primo y se le suma 5 unidades: %d",sum);
   }
   else{
   
		sum=num-2;
		printf("No Es primo y se le resta 2 unidades: %d",sum);
   }
	return 0;
}
