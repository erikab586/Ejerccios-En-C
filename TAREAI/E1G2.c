/***************************************************************************************************************
 *Realizar un algoritmo que permita realizar las operaciones básicas de aritmética, sabiendo que los           *
 *valores de los operandos deben ser ingresados por teclado.                                                   *           *
****************************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	int a=0;
	int b=0;
	int opc=0;
	do
	{
		printf("PRESIONE 1. PARA SUMAR\n");
        printf("PRESIONE 2. PARA RESTAR\n");
        printf("PRESIONE 3. PARA MULTIPLICAR\n");
        printf("PRESIONE 4. PARA DIVIDIR\n");
        printf("PRESIONE 5. PARA SALIR\n");
        scanf("%d",&opc);
		switch(opc)
		{
			case 1:
				printf("Ingrese un valor para a: ");
		        scanf("%d",&a);
		        printf("Ingrese un valor para b: ");
		        scanf("%d",&b);
		        a=a+b;
		        printf("La suma es: %d\n",a);
		    break;
			case 2:
				printf("Ingrese un valor para a: ");
		        scanf("%d",&a);
		        printf("Ingrese un valor para b: ");
		        scanf("%d",&b);
		        a=a-b;
		        printf("La resta es: %d\n",a);
		    break;
			case 3:
				printf("Ingrese un valor para a: ");
		        scanf("%d",&a);
		        printf("Ingrese un valor para b: ");
		        scanf("%d",&b);
		        a=a*b;
		        printf("La multiplicacion es: %d\n",a);
		    break;
				case 4:
				printf("Ingrese un valor para a: ");
		        scanf("%d",&a);
		        printf("Ingrese un valor para b: ");
		        scanf("%d",&b);
		        if (b==0)
		        {
		        	printf("La division entre cero, no tiene solucion en los numeros reales\n");
				}
				else
				{
					a=a/b;
		            printf("La division es: %d\n",a);
				}

		    break;
		    default:
		    	   printf("ERROR! OPCION INCORRECTA\n");
		           printf(" LAS OPCIONES CORRECTAS SON 1 2 3 4 5\n");
		    break;
		}
	}
	while(opc!=5);
	return 0;
}
