#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int sumar(int a,int b)
{
	int c=0;
	c=a+b;
	return c;
}

int restar(int a,int b)
{
	a=a-b;
	return a;
}
int multiplicar(int a,int b)
{
	a=a*b;
	return a;
}

int dividir(int a,int b)
{
	int c=0;
	c=a/b;
	return c;
}
void mostrar(int a,int b)//Esta funcion respresenta un menú
{
	int opc=0;
	do
	{
		printf("Ingrese una opcion\n");
		printf("Ingrese 1. Sumar\n");
		printf("Ingrese 2. Restar\n");
		printf("Ingrese 3. Multiplicar\n");
		printf("Ingrese 4. Dividir\n");
		printf("Ingrese 5. Salir\n");
		scanf("%d",&opc);
		switch(opc)
		{
			case 1:
				printf("La suma es: %d\n",sumar(a,b));
			break;
			case 2:
				printf("La resta es: %d\n",restar(a,b));
			break;
			case 3:
				printf("La multiplicacion es: %d\n",multiplicar(a,b));
			break;
			case 4:
				printf("La division es: %d\n",dividir(a,b));
			break;
			default:
			    printf("ERROR");
			break;	
		}
		
	}while(opc!=5);
	
    
}

int main(int argc, char *argv[]) {
    int a=0;
    int b=0;
    
    printf("Ingrese un valor para A: ");
    scanf("%d",&a);
    printf("Ingrese un valor para B: ");
    scanf("%d",&b);
    mostrar(a,b);
    //printf("La suma es: %d",sumar(a,b));
    //printf("La resta es: %d",restar(a,b));
	return 0;
}
