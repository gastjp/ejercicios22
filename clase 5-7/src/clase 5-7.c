#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#define TAM 5

int main(void) {

	setbuf(stdout, NULL);

	int arrayEnteros[5] = {1,2,3,4,5};
	float resultadoPromedio;

	resultadoPromedio = calcularPromedioArrayEnterosResultadoPorRetorno(arrayEnteros,5);

	printf("\n\n%.2f",resultadoPromedio);



	return EXIT_SUCCESS;

}
