//Ingresar 5 caracteres e informar cuantas letras p (minúsculas) se ingresaron.

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	setbuf(stdout, NULL);
	char cadenaC[5];
	int contadorPMin=0;

	int i;

	for(i=0; i<5;i++)
	{
		fflush(stdin);
		fflush(stdout);
		printf("\nIngrese un caracter:");
		scanf("%c",&cadenaC[i]);
		if(cadenaC[i] == 'p')
		{
			contadorPMin++;
		}

		printf("\nArray de caracteres:%c",cadenaC[0]);
		printf("%c",cadenaC[1]);
		printf("%c",cadenaC[2]);
		printf("%c",cadenaC[3]);
		printf("%c",cadenaC[4]);
		printf("\nCadena de caracteres:%s",cadenaC);
	}

	printf("\n\n");
	printf("%c",cadenaC[0]);
	printf("%c",cadenaC[1]);
	printf("%c",cadenaC[2]);
	printf("%c",cadenaC[3]);
	printf("%c",cadenaC[4]);
	printf("%s",cadenaC);

	printf("\nCantidad de 'p':%d",contadorPMin);

	return EXIT_SUCCESS;
}
