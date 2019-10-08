/**************************************************************************************************************
 * Dado los coeficientes y el término independiente de un sistema de ecuación 2x2, calcular el valor          *
 * de X1 y X2. Sabiendo que X2= (af-dc)/(ae-db)                                                               *
 **************************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a=0; int b=0; int c=0; int d=0; int e=0; int f=0;
	float X1=0.0; float X2=0.0; float numerador=0.0; float denominador=0.0;
	
	printf("Ingrese el valor para A: ");
	scanf("%d",&a);
	printf("Ingrese el valor para B: ");
	scanf("%d",&b);
	printf("Ingrese el valor para C: ");
	scanf("%d",&c);
	printf("Ingrese el valor para D: ");
	scanf("%d",&d);
	printf("Ingrese el valor para E: ");
	scanf("%d",&e);
	printf("Ingrese el valor para F: ");
	scanf("%d",&f);
	
	
	
	numerador<- a*f-d*c;
	denominador<- a*e-d*b;
	X2<-numerador/denominador;
	X1<-X2;
	
	printf("El valor de X1 es:%f\n", X1);
	printf("El valor de X2 es:%f\n", X2);
	return 0;
}
