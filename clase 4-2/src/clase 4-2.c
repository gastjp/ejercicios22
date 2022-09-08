#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int main(void) {

	setbuf(stdout, NULL);
	float celsiusIngresado;
	float farenheiteIngresado;

	int resultadoGetFloat;



	do
		{
		fflush(stdin);
		fflush(stdout);
		printf("\nGrados Celsius.");
		resultadoGetFloat = getFloat(&celsiusIngresado,0,100);
		}while (resultadoGetFloat != 1);


	printf("\nGrados Celsius ingresado: %.2f",celsiusIngresado);

	resultadoGetFloat = 0;
	do
		{
		fflush(stdin);
		fflush(stdout);
		printf("\nGrados Farenheite.");
		resultadoGetFloat = getFloat(&farenheiteIngresado,32,212);;
		}while (resultadoGetFloat != 1);


	printf("\nGrados Farenheite ingresado: %.2f",farenheiteIngresado);



	return EXIT_SUCCESS;
}
