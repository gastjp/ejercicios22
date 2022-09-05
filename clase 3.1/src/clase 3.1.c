#include <stdio.h>
#include <stdlib.h>


int	sumarDosEnteros(int primerNumero, int segundoNumero);
int	dividirDosEnteros(int primerNumero, int segundoNumero);
int imprimirFloat(float numAImprimir);

int main(void) {

	setbuf(stdout, NULL);
	char operador;
	float numeroUno;
	int numeroDos;
	int resultado;

	fflush(stdin); //SOLO WINDOWS
	fflush(stdout); //SOLO WINDOWS

	printf("\nIngrese el numero: ");
	scanf("%f", &numeroUno);
	imprimirFloat(numeroUno);


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
