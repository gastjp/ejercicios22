#include <stdio.h>
#include <stdlib.h>
#include "utn.h"


int main(void) {

	setbuf(stdout, NULL);
	char operador;
	int numeroUno;
	int numeroDos;
	int resultado=0;
	int* resultadoP;
	int resPar;


	fflush(stdin); //SOLO WINDOWS
	fflush(stdout); //SOLO WINDOWS

	printf("\nIngrese el numero 1: ");
	scanf("%d", &numeroUno);

	printf("\nIngrese el numero 2: ");
	scanf("%d", &numeroDos);

	resPar = esPar(numeroUno);
	printf("\n%d",resPar);

	printf("\nDMM de resultado accediendo con &resultado:%d",&resultado);
	printf("\nDDM de P accediendo con &P:%d",&resultadoP);
	resultadoP = &resultado;
	printf("\nDDM de variable 'resultado' almacenada en P (no & no *):%d"
			,resultadoP);
	printf("\nValor de 'resultado' accediendo con *P:%d",*resultadoP);




	 if(Sumar1(numeroUno, numeroDos, resultadoP) == 0)
	 {
		 printf("\nLa suma es: %d",*resultadoP);
	 }
	 else
	 {
		 printf("\nError puntero vacío");
	 }




	return 0;
}
