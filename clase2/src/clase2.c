#include <stdio.h>
#include <stdlib.h>

int main(void) {

	setbuf(stdout, NULL);
	int numeros[10];
	//int auxNumIngresado;
	int min, max;
	int maxPares = 0;
	int resultado = 0;
	int resultadoPositivos = 0;
	int resultadoNegativos = 0;
	float promedio;
	int contPares = 0;
	int contImpares = 0;
//	int numeroMasGrande;
	//	int numeroMasChico;
	//	int numeroMedio;
	//int resultado;
	int i;

	for (i = 0; i < 10; i++) //elijo un for porque conozco la cantidad
			{
		fflush(stdin);
		fflush(stdout);
		printf("Ingrese numero distinto de 0. Numero %d: ", i + 1); //se pide un numero.
		scanf("%d", &numeros[i]);

		if (numeros[i] == 0) //Si es 0 traba. Sino sigue.
				{
			do {
				fflush(stdin);
				fflush(stdout);
				printf(
						"\nEl numero no puede ser 0. Ingrese nuevamente numero %d:",
						i + 1);
				scanf("%d", &numeros[i]);
			} while (numeros[i] == 0); //traba en 0

			if ((numeros[i] % 2 == 0) && (maxPares == 0)) {
				maxPares = numeros[i];
			} //si es par y es el primer par ingresado, setea maxPar
			if ((numeros[i] % 2 == 0) && numeros[i] > maxPares) {
				maxPares = numeros[i];
			} //si es par y mas grande, setea maxPar

			if (numeros[i] > max) {
				max = numeros[i];
			} //si es mas grande que el maximo lo setea
			if (numeros[i] < min) {
				min = numeros[i];
			}//si es mas chico que el minimo lo setea

			if (numeros[i] > 0 && i==0) //si es positivo y primero
					{
				resultadoPositivos = numeros[i];
			} //inicia el acum.
			else if (numeros[i] > 0 && i>0) //si es positivo y no primero
					{
				resultadoPositivos = resultadoPositivos + numeros[i];
			} //continúa el acum.

			if (numeros[i] < 0 && i==0) //si es negativo y primero
			{
				resultadoNegativos = numeros[i];
			} //inicia el acum.
			else if (numeros[i] < 0 && i>0) //si es negativo y no primero
			{
				resultadoNegativos = resultadoNegativos * numeros[i];
			} //continua el acum.

		} //fin traba 0.

		else { //si el numero ingresado no es 0, sigue

			if (i == 0) //si es el primer numero ingresado.
					{
				min = numeros[i]; //setea min
				max = numeros[i]; //setea max
				if (numeros[i] % 2 == 0) //si es par
						{
					maxPares = numeros[i];
				} // define maxPar
				else //si es impar.
				{
				}

				if (numeros[i] > 0) //si es positivo
						{
					resultadoPositivos = numeros[i];
				} //inicia el acum.
				else //si es negativo
				{
					resultadoNegativos = numeros[i];
				} //inicia el acum.
			} //cierra si es el primer numero

			else //si no es el primer numero entonces
			{
				if (numeros[i] > max) //si es mas grande que el maximo
						{
					max = numeros[i]; //nuevo maximo

				} else if (numeros[i] < min) //si es mas chico que el minimo
						{
					min = numeros[i]; //nuevo minimo
				}
				if (numeros[i] % 2 == 0 && maxPares == 0) //si es par y es el primero, define max par
				{
					maxPares = numeros[i];
				}

				else if (numeros[i] % 2 == 0 && numeros[i] > maxPares) //si es par y mayor que el viejo maximo, define max par
				{
					maxPares = numeros[i];
				}


				if (numeros[i] > 0) //si es positivo
						{
					resultadoPositivos = resultadoPositivos + numeros[i];
				} //continúa el acum.
				else //si es negativo
				{
					resultadoNegativos = resultadoNegativos * numeros[i];
				} //resultadoNegativos el acum.

			} // cierra si no es el primer numero

		} //cierra si el numero no es 0

		resultado = resultado + numeros[i];
//	if (numeros[i] > 0) //si es positivo
//		{resultadoPositivos = resultadoPositivos + numeros[i];} //positivo = suma el acum.
//	else
//		{
//			if(resultadoNegativos == 0)
//			{
//				resultadoNegativos= numeros[i];
//			}
//			else
//			{resultadoNegativos = resultadoNegativos * numeros[i];}
//		} //negativo = multiplica el acum.

		if (numeros[i] % 2 == 0) { //acumula si es par
			contPares++;
		}

		else {
			contImpares++;
		}	 //acumula si es impar

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
