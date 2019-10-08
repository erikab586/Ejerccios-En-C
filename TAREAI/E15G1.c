/*****************************************************************************************************************
 * Realizar un algoritmo que permita calcular el promedio de notas de un estudiante, con n asignaturas           *
 * inscritas. Se debe mostrar en pantalla nombre del estudiante, asignatura con su respectiva nota y el promedio *
 *****************************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	char nombre[10]="Hola";
	int n=0;
	float notas=0.0;
	float promedio=0.0;
	float nota=0.0;
	int i=0;
	printf("Ingrese nombre ");
	scanf("%s",&nombre);
	printf("Ingrese cantidad de asignaturas inscritas ");
	scanf("%d",&n);
	for (i=1;i<=n;i++) 
	{
		printf("Ingrese nota de asignatura %d: \n",i);
		scanf("%f",&nota);
		notas=notas+nota;
    }
    
	printf("Nombre: %s\n",&nombre);
	promedio=notas/n;
	printf("El promedio es: %f\n",promedio);
	return 0;
}
