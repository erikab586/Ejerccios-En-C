/***************************************************************************************************************
 * Realizar un algoritmo que permita definir el rango de un intervalo de número dados por el usuario y         *
 * adicionalmente se muestren en pantalla.                                                                     *
 ***************************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a=0;
	int b=0;
	int i=0;
	int rango=0;
	printf("Ingrese un valor inicial de intervalo\n");
	scanf("%d",&a);
	
	printf("Ingrese un valor final de intervalo\n");
	scanf("%d",&b);
	
	printf("Los numeros contenido en el intervalo [%d",a);
	printf(",%d",b);
	printf("]\n");
	rango=b-a;

	//printf("El rango es: %d",rango);

	while (a<b-1) 
	{
		a=a+1;
		printf("%d ",a);	
    }
	return 0;
}
