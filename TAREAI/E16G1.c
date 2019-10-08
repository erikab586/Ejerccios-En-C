/*****************************************************************************************************************
 * Crear un algoritmo que permita contar los números primos en un intervalo dado por el usuario,                 *
 * mostrar en pantalla la cantidad de números primos.                                                            *
 *****************************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
    
	int a=0;
	int b=0;
	int contar=0;
	int i=0;
	int cont;
	printf("Ingrese el valor a para iniciar el intervalo\n");
	scanf("%d",&a);
	printf("Ingrese el valor b para finalizar el intervalo\n");
	scanf("%d",&b);
	
	while(a<b+1)
    {
		i=1;
		cont=0;
		while(i<a+1) 
		{
		
			if((a%i)==0)
			{
			
				cont=cont+1;
		    }
			i++;
	    }
		
	    if(cont==2) 
	    {
		
			contar=contar+1;
			printf ("El numero  a %d es el primo %d\n",a,contar);
			
	    }   
		a++;
    }
	return 0;
}
