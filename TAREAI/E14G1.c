/****************************************************************************************************************
 * Crear un algoritmo que permita calcular el monto total a pagar de un cliente que ingresa a un supermercado.  *
 * Los datos que se registran del cliente son nombre, cedula, los productos a comprar, cantidad de cada producto*
 * y precio. El sistema debe permitir ingresar n productos, para conocer el monto total. Si el cliente tiene un *
 * monto total inferior 150000 Bs, su descuento es de 8%, si el monto es exactamente 150000 Bs recibe descuento *
 * de 15%, si el monto es superior a 150000 Bs pero menor a 200000 Bs es de 20% y si es mayor a 200000 Bs       *
 * recibe un descuento de 30%.                                                                                  *
 ****************************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
    
	char nombre[10]="HOLA";
	char cedula[10]="1234";
	int opc=0;
	char producto[10]="Hola";
	int precio=0;
	int cantidad=0;
	float total=0.0;
	float totalp=0.0;
	int i=0;
	printf("Ingrese Nombre: ");
	scanf("%s",&nombre);
	printf("Ingrese Cedula: ");
	scanf("%s",&cedula);
	
	do
	{
		printf("Ingrese Nombre de Producto: ");
		scanf("%s",&producto);
		printf("Ingrese Cantidad: ");
		scanf("%d",&cantidad);
		printf("Ingrese precio: ");
		scanf("%d",&precio);
		
		total=cantidad*precio;
		totalp=totalp+total;
		
		printf("Producto: %s\n",&producto);
		printf("Cantidad:%d\n ",cantidad);
		printf("Total: %f\n",total);
		printf ("Para Continuar Presiones 0 y para Salir Presione 1\n");
		scanf("%d",&opc);
		i++;
			
	}while(opc!=1);
	
	            printf("La cantidad de artículos es: %d\n",i);
				float desc=0.0;
			    if(totalp<1500) 
			    {
				
					desc=totalp*0.08;
					total=totalp-desc;
					printf("Recibió un descuento del 8%\n");
					printf("Total a pagar es: %f", total);
			    }
				
			    if(totalp==1500)
			    {
				
					desc=totalp*0.15;
					total=totalp-desc;
					printf("Recibió un descuento del 15%\n");
					printf("Total a pagar es: %f", total);
			    }
				
			    if((totalp>1500)&& (totalp<2000))
			    {
				
					desc=totalp*0.2;
					total=totalp-desc;
					printf("Recibió un descuento del 20%\n");
					printf("Total a pagar es: %f", total);
			   }
				
			    if(totalp>2000) 
			    {
				
					desc=totalp*0.3;
					total=totalp-desc;
					printf("Recibió un descuento del 30%\n");
					printf("Total a pagar es: %f\n", total);
			   }
	
		
	
	return 0;
}
