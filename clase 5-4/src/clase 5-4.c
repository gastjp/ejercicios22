#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#define TAM 5

int main(void) {

	setbuf(stdout, NULL);
	int i;


	int arrayEdades[TAM];
	int resultado = 0;

	do{
	resultado = inicializarArrayEnteros(arrayEdades, TAM, 0);
	}while(resultado != 1);
	resultado = 0;
	printf("\nArray inicializado.");



	for(i=0; i<TAM;i++)
	{
	do{
	resultado = cargarArrayEnterosIndiceMinMax(arrayEdades, TAM-1,0,120);
	}while(resultado != 1);
	resultado = 0;
	}

	do{
	resultado = mostrarArrayEnteros(arrayEdades,TAM);
	}while(resultado != 1);
	resultado = 0;



	return EXIT_SUCCESS;
}
