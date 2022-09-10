#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int main(void) {

	setbuf(stdout, NULL);

	int arrayEdades[5];
	int resultado = 0;

	do{
	resultado = inicializarArrayEnteros(arrayEdades, 5, 0);
	}while(resultado != 1);
	resultado = 0;

	do{
	resultado = cargarArrayEnterosMinMax(arrayEdades, 5, 0, 120);
	}while(resultado != 1);
	resultado = 0;



	return EXIT_SUCCESS;
}
