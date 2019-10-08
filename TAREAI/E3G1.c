/***************************************************************************************************************
 *	Realizar un algoritmo que permita solicitar precio de un producto, si cuesta más de 15000 Bs,              *
 *  recibe un descuento del 10%.                                                                               *          
****************************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float precio=0.0;
	float descuento=0.0;
	float total=0.0;
	printf("Ingrese el precio de producto\n");
	scanf("%f",&precio);
	if (precio>150000) 
	{
	
		descuento=precio*0.1;
		total=precio-descuento;
    }
	
	printf("El descuento es de: %f\n",descuento);
	printf("El total a pagar es: %f\n",total);
	return 0;
}
