
#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int main(void) {

	setbuf(stdout, NULL);

	int numeroIngresado;
	int resultadoGetInt;

	do
		{
		fflush(stdin);
		fflush(stdout);
		resultadoGetInt = getInt(&numeroIngresado,1,10);
		}while (resultadoGetInt != 1);


	printf("\nNumero ingresado: %d",numeroIngresado);



	return EXIT_SUCCESS;


}
