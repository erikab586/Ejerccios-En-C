/**************************************************************************************************************
 * Una academia de cursos desea mostrar mensajes de ofertas. Si inscribe un (1) curso se pagará 20000 y       *
 * si inscribe más de dos (2) cursos se pagará 15000.                                                         *
 **************************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int CantCurso=0;
	
	printf("Ingrese cantidad de cursos a inscribir\n");
	scanf("%d",&CantCurso);
	if (CantCurso>2)
	{
	
		printf("Cancelara 20000\n");
    }
	else
	{
	    CantCurso=1;
		printf("Cancelara 15000\n");
    }
	return 0;
}
