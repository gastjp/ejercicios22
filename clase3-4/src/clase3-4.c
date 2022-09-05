#include <stdio.h>
#include <stdlib.h>


int	sumarDosEnteros(int primerNumero, int segundoNumero);
int	dividirDosEnteros(int primerNumero, int segundoNumero);
int imprimirFloat(float numAImprimir);
int esPar(int numero);
int getInt(int min, int max);



int main(void) {

	setbuf(stdout, NULL);
	char operador;
	float numeroUno;
	int numeroDos;
	int resultado;
	int resPar;

	fflush(stdin); //SOLO WINDOWS
	fflush(stdout); //SOLO WINDOWS

	printf("\nIngrese el numero: ");
	scanf("%f", &numeroUno);
	imprimirFloat(numeroUno);

	resPar = esPar(numeroUno);
	printf("\n%d",resPar);



	return 0;
}

int	sumarDosEnteros(int primerNumero, int segundoNumero) {
	int suma;

	suma = primerNumero + segundoNumero;

	return suma;
}

int	dividirDosEnteros(int primerNumero, int segundoNumero) {
	int division;
	int retorno = 0;

	if (primerNumero > 100){
		retorno = -2;
	}

	if(segundoNumero != 0){

	division = primerNumero / segundoNumero;

	}else{
		retorno = -1;
	}

	return retorno;
}

int imprimirFloat(float numAImprimir)
{
	int retorno = 0;
	printf("\n%.2f",numAImprimir);

	return retorno;
}

int esPar(int numero)
{
	int retorno = 0;
	if(numero % 2 == 0)
		{
			retorno =1;
		}

	return retorno;
}

int getInt(int min, int max)
{
	int retorno = 0;
	int resultadoScanf=0;
	int numeroIngresado;

	printf("\nIngrese un numero");
	resultadoScanf = scanf("%d",&numeroIngresado);

	if(resultadoScanf != 1)
		retorno = -1; // si no es entero, error -1

	if(resultadoScanf == 1 && numeroIngresado < min && numeroIngresado > max)
	{
		retorno = -2; //si entero, menor que minimo y mayor que max, error -2
	}

	return retorno;

}
