#include <stdio.h>
#include <stdlib.h>

int main(void) {

	setbuf(stdout, NULL);
	int numeros[10];
	int min, max;
	int maxPares = 0;
	int resultado = 0;
	int resultadoPositivos = 0;
	int resultadoNegativos = 0;
	float promedio;
	int contPares = 0;
	int contImpares = 0;
	int i;

	for (i = 0; i < 10; i++) //elijo un for porque conozco la cantidad
			{
		do {
			fflush(stdin);
			fflush(stdout);
			printf("\nIngrese un numero distinto de 0. Numero %d:", i + 1);
			scanf("%d", &numeros[i]);
		} while (numeros[i] == 0); //traba en 0

		if ((numeros[i] % 2 == 0) && (maxPares == 0)) {
			maxPares = numeros[i];
		} //si es par y es el primer par ingresado, setea maxPar

		if ((numeros[i] % 2 == 0) && numeros[i] > maxPares) {
			maxPares = numeros[i];
		} //si es par y mas grande, setea maxPar

		if (max == 0) {
			max = numeros[i];
		} //setea max para el primer numero

		if (numeros[i] > max) {
			max = numeros[i];
		} //si es mas grande lo setea

		if (min == 0) {
			min = numeros[i];
		} //setea min para el primer numero
		if (numeros[i] < min) {
			min = numeros[i];
		} //si es mas chico lo setea

		if (numeros[i] > 0) //si es positivo
				{
			resultadoPositivos = resultadoPositivos + numeros[i];
		} //inicia el acum.

		else if (numeros[i] < 0 && resultadoNegativos == 0) //si es negativo y primero
				{
			resultadoNegativos = numeros[i];
		} //inicia el acum.
		else if (numeros[i] < 0 && resultadoNegativos != 0) //si es negativo y no primero
				{
			resultadoNegativos = resultadoNegativos * numeros[i];
		} //continua el acum.

		if (numeros[i] % 2 == 0) { //acumula si es par
			contPares++;
		}
		else {
			contImpares++;
		}	 //acumula si es impar

		resultado = resultado + numeros[i];
		promedio = (float) resultado / (i + 1);

		printf(
				"Min %d\nMax: %d\nSuma: %d\nPromedio:%.2f\nCantidad de pares:%d\n"
						"Cantidad de impares:%d\nMayor de pares:%d\nSuma de positivos:%d\n"
						"Producto de negativos:%d\n", min, max, resultado,
				promedio, contPares, contImpares, maxPares, resultadoPositivos,
				resultadoNegativos);

	}

	promedio = (float) resultado / 10;
	printf("Min %d\nMax: %d\nSuma: %d\nPromedio:%.2f\nCantidad de pares:%d\n"
			"Cantidad de impares:%d\nMayor de pares:%d\nSuma de positivos:%d\n"
			"Producto de negativos:%d\n", min, max, resultado, promedio,
			contPares, contImpares, maxPares, resultadoPositivos,
			resultadoNegativos);
	return 0;
}
