/***************************************************************************************************************
 * Crear un algoritmo que permita ingresar 3 valores y verificar el teorema de Pitágoras a^2+b^2=c^2. Si es    *
 * positivo escribir "Felicidades se cumple el Teorema", sino "No cumple el Teorema".                          *
 ***************************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int a=0;
	int b=0;
	int c=0;
	
	printf("Ingrese un cateto a\n");
	scanf("%d",&a);
	printf("Ingrese un cateto b\n");
	scanf("%d",&b);
	printf("Ingrese un cateto c\n");
	scanf("%d",&c);
	int x=0; int t=0; int z=0;
	x=a*a; 
	t=b*b;
	z=c*c; 
	//Escribir z;
	if((x+t)==z)
	{
	
		printf("Felicidades :) si Cumple con el Teorema de Pitagoras\n");
    }
    else
    {
   
		printf("Los siento :( no Cumple con el Teorema de Pitagoras\n");
	}
	return 0;
}
