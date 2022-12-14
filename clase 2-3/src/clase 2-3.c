//Ejercicio 2-3:
//Debemos alquilar el servicio de transporte para llegar a Mar del Plata con un
//grupo de personas (no más de 100), de cada persona debemos obtener los datos:
//número de cliente,
//estado civil ('s' para soltero", 'c' para casado o 'v' viudo),
//edad( solo mayores de edad, más de 17),
//temperatura corporal (validar por favor)
//y genero('f' para femenino, 'm' para masculino, 'o' para no binario).
//NOTA: El precio por pasajero es de $600.
//Se debe informar (solo si corresponde):
//a) La cantidad de personas con estado  civil"viudo" de más de 60 años.
//b) el número de cliente y edad de la mujer soltera más joven.
//c) cuánto sale el viaje total sin descuento.
//d) si hay más del 50% de los pasajeros que tiene más de 60 años ,
//el precio final tiene un descuento del 25%, que solo mostramos si corresponde.

#include <stdio.h>
#include <stdlib.h>
#define TAM 8
#define PRECIO 600

int main(void) {

	setbuf(stdout, NULL);
	int nroCliente[TAM];
	int decCharCivil[TAM];
	int decCharGen[TAM];
	char estCivil;
	int validEst = 0;
	int validEdad = 0;
	int validTemp = 0;
	int validGen = 0;
	int resultadoScanf;
	int edad[TAM];
	float tempCorpo[TAM];
	char genero;
	int i;
	int contadorViud60 = 0;
	int auxEdadMujerSoltera = 0;
	int auxClienteMujerSoltera = 0;
	int valorTotal = 0;
	int contador60 = 0;
	float descuento;
	float precioDescuento = 0;

	for (i = 0; i < TAM; i++) {

		do {
			fflush(stdin);
			fflush(stdout);
			printf("\nIngrese numero de cliente %d(solo numeros):", i + 1);

		} while (scanf("%d", &nroCliente[i]) != 1); //nro de cliente solo num.

		do {
			validEst = 0;
			fflush(stdin);
			fflush(stdout);
			printf("\nIngrese estado civil de cliente %d ('S' 'C' o 'V'):",
					i + 1);
			scanf("%c", &estCivil);
			printf("\n%c", estCivil);
			if (estCivil == 'S') {
				validEst = 1;
				decCharCivil[i] = 83;
			} else if (estCivil == 'C') {
				validEst = 1;
				decCharCivil[i] = 67;
			}

			else if (estCivil == 'V') {
				validEst = 1;
				decCharCivil[i] = 86;
			}

		} while (validEst != 1); //estado civil solo S,C o V.

		do {
			validEdad = 0;
			fflush(stdin);
			fflush(stdout);
			printf("\nIngrese edad de cliente %d (Mayor de 17):", i + 1);
			resultadoScanf = scanf("%d", &edad[i]);
			if (resultadoScanf == 1 && edad[i] > 17) {
				printf("\n%d - %d", edad[i], resultadoScanf);

				validEdad = 1;
			}

		} while (validEdad != 1); //edad mayor de 17.

		do {
			validTemp = 0;
			fflush(stdin);
			fflush(stdout);
			printf("\nIngrese temperatura de cliente %d (solo numeros):",
					i + 1);
			resultadoScanf = scanf("%f", &tempCorpo[i]);
			if (resultadoScanf == 1) {
				printf("\n%.2f - %d", tempCorpo[i], resultadoScanf);
				validTemp = 1;
			}

		} while (validTemp != 1); //temperatura, solo numeros.

		do {
			validGen = 0;
			fflush(stdin);
			fflush(stdout);
			printf("\nIngrese genero de cliente %d ('F' 'M' o 'O'):", i + 1);
			scanf("%c", &genero);
			printf("\n%c", genero);
			if (genero == 'F') {
				validGen = 1;
				decCharGen[i] = 70;
			} else if (genero == 'M') {
				validGen = 1;
				decCharGen[i] = 77;
			}

			else if (genero == 'O') {
				validGen = 1;
				decCharGen[i] = 79;
			}

		} while (validGen != 1); //genero solo F, M o V

		printf("\nNumero de cliente:%d\n"
				"Estado civil:%c\n"
				"Edad:%d\n"
				"Temperatura corporal:%.2f\n"
				"Genero:%c\n\n\n", nroCliente[i], estCivil, edad[i],
				tempCorpo[i], genero);

	}

	for (i = 0; i < TAM; i++) {
		if (edad[i] > 60) {
			contador60++;
			if (decCharCivil[i] == 86)
				contadorViud60++;
		}

		if (decCharGen[i] == 70 && decCharCivil[i] == 83
				&& auxEdadMujerSoltera == 0) {
			auxEdadMujerSoltera = edad[i];
			auxClienteMujerSoltera = nroCliente[i];
		}
		if (decCharGen[i] == 70 && decCharCivil[i] == 83
				&& edad[i] < auxEdadMujerSoltera) {
			auxEdadMujerSoltera = edad[i];
			auxClienteMujerSoltera = nroCliente[i];
		}

	}

	valorTotal = PRECIO * TAM;
	descuento = (float) contador60 / TAM;

	if (contadorViud60 > 0) {
		printf("\nCantidad de personas Viudas mayores a 60 años: %d",
				contadorViud60);
	}

	printf("\nNro Cliente y Edad de la mujer soltera más joven: %d - %d"
			"\nPrecio total del viaje: %d", auxClienteMujerSoltera,
			auxEdadMujerSoltera, valorTotal);
	if (descuento >= 0.5) {
		precioDescuento = valorTotal * 0.75;
		printf("\nMás de la mitad de los pasajeros tienen más de 60 años.");
	}

	if (precioDescuento != 0) {
		printf("\nPrecio con descuento 25 porciento: %.2f", precioDescuento);
	}

	return 0;

}


