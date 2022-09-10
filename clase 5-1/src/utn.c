#include <stdio.h>
#include <stdlib.h>

int	sumarDosEnteros(int primerNumero, int segundoNumero) {
	int suma;

	suma = primerNumero + segundoNumero;

	return suma;
}

int	dividirDosEnteros(int primerNumero, int segundoNumero) {
	int division;
	int retorno = 0;


	if(segundoNumero != 0){

	division = primerNumero / segundoNumero;

	}else{
		return retorno;
	}

	return division;
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

int getInt(int* resP)
{
	int retorno = 0;
	int resultadoScanf=0;
	int numeroIngresado;

	fflush(stdin);
	fflush(stdout);
	printf("\nIngrese un numero: ");
	resultadoScanf = scanf("%d",&numeroIngresado);

	if(resP != NULL)
	{

		if(resultadoScanf != 1)
		{	retorno = -1; // si no es entero, error -1
			printf("\nEl numero no es entero. Cod. Error %d\n",retorno);
		}


		else
		{
			retorno = 1; // si es entero, mayor que minimo y menor que max
			*resP = numeroIngresado;
			printf("\nNumero cargado %d."
					"Retorno %d\n",*resP,retorno);
		}
	}
	else
	{
		printf("\nPuntero vacío.\n Cod. Error %d",retorno);
	}
	return retorno;
}

int getIntMinMax(int* resP, int min, int max)
{
	int retorno = 0;
	int resultadoScanf=0;
	int numeroIngresado;

	fflush(stdin);
	fflush(stdout);
	printf("\nIngrese un numero: ");
	resultadoScanf = scanf("%d",&numeroIngresado);

	if(resP != NULL)
	{

		if(resultadoScanf != 1)
		{	retorno = -1; // si no es entero, error -1
			printf("\nEl numero no es entero. Cod. Error %d\n",retorno);
		}
		else if(resultadoScanf == 1 && numeroIngresado < min)
		{
			retorno = -2; //si entero y menor que minimo, error -2
			printf("\nEl numero no puede ser menor que el minimo "
					"establecido (%d)."
					"Cod. Error %d\n",min,retorno);
		}
		else if(resultadoScanf == 1 && numeroIngresado > max)
		{
			retorno = -3; //si entero y mayor que max, error -3
			printf("\nEl numero no puede ser mayor que el maximo "
					"establecido (%d)."
					"Cod. Error %d\n",max,retorno);
		}

		else if(resultadoScanf == 1 && numeroIngresado >= min && numeroIngresado <= max)
		{
			retorno = 1; // si es entero, mayor que minimo y menor que max
			*resP = numeroIngresado;
			printf("\nNumero cargado %d."
					"Retorno %d\n",*resP,retorno);
		}
	}
	else
	{
		printf("\nPuntero vacío.\n Cod. Error %d",retorno);
	}
	return retorno;
}



int getFloat(float* resP)
{
	int retorno = 0;
	int resultadoScanf=0;
	float numeroIngresado;

	fflush(stdin);
	fflush(stdout);
	printf("\nIngrese un numero flotante: ");
	resultadoScanf = scanf("%f",&numeroIngresado);

	if(resP != NULL)
	{

		if(resultadoScanf != 1)
		{	retorno = -1; // si no es flotante, error -1
			printf("\nEl numero no es flotante. Cod. Error %d\n",retorno);
		}

		else
		{
			retorno = 1; // si es flotante
			*resP = numeroIngresado;
			printf("\nNumero cargado %.2f."
					"Retorno %d\n",*resP,retorno);
		}
	}
	else
	{
		printf("\nPuntero vacío.\n Cod. Error %d",retorno);
	}
	return retorno;
}


int getFloatMinMax(float* resP, float min, float max)
{
	int retorno = 0;
	int resultadoScanf=0;
	float numeroIngresado;

	fflush(stdin);
	fflush(stdout);
	printf("\nIngrese un numero flotante: ");
	resultadoScanf = scanf("%f",&numeroIngresado);

	if(resP != NULL)
	{

		if(resultadoScanf != 1)
		{	retorno = -1; // si no es entero, error -1
			printf("\nEl numero no es flotante. Cod. Error %d\n",retorno);
		}
		else if(resultadoScanf == 1 && numeroIngresado < min)
		{
			retorno = -2; //si entero y menor que minimo, error -2
			printf("\nEl numero no puede ser menor que el minimo "
					"establecido (%.2f)."
					"Cod. Error %d\n",min,retorno);
		}
		else if(resultadoScanf == 1 && numeroIngresado > max)
		{
			retorno = -3; //si entero y mayor que max, error -3
			printf("\nEl numero no puede ser mayor que el maximo "
					"establecido (%.2f)."
					"Cod. Error %d\n",max,retorno);
		}

		else if(resultadoScanf == 1 && numeroIngresado >= min && numeroIngresado <= max)
		{
			retorno = 1; // si es entero, mayor que minimo y menor que max
			*resP = numeroIngresado;
			printf("\nNumero cargado %.2f."
					"Retorno %d\n",*resP,retorno);
		}
	}
	else
	{
		printf("\nPuntero vacío.\n Cod. Error %d",retorno);
	}
	return retorno;
}

int getChar(char* resP)
{
	int retorno = 0;
	int resultadoScanf=0;
	char charIngresado;

	fflush(stdin);
	fflush(stdout);
	printf("\nIngrese un dígito: ");
	resultadoScanf = scanf("%c",&charIngresado);

	if(resP != NULL)
	{

		if(resultadoScanf != 1)
		{	retorno = -1; // si no es char, error -1
			printf("\nEl digito no es un caracter. Cod. Error %d\n",retorno);
		}

		else
		{
			retorno = 1; // si es char
			*resP = charIngresado;
			printf("\nDigito cargado %c."
					"Retorno %d\n",*resP,retorno);
		}
	}
	else
	{
		printf("\nPuntero vacío.\n Cod. Error %d",retorno);
	}
	return retorno;
}


int Sumar1(int num1, int num2, int* resultado)
{
	int retorno = 0;

	//printf("\nDDM almacenada en resultado: %d",resultado);
	if(resultado != NULL)
	{
		*resultado = num1 + num2;
	}
	else
	{
		retorno = -1;
	}

	return retorno;
}

int factorizar(int*resP,int numAFactorizar)
{
	int retorno = 0;
	int resultado = numAFactorizar;

	if(resP != NULL)
	{
		while(numAFactorizar > 1)
		{
			printf("\nNumero ingresado: %d",numAFactorizar);
			resultado = resultado * (numAFactorizar -1);

		}


	}




	return retorno;
}

int inicializarArrayEnteros(int array[], int len, int valor)
{
	int i;
	int retorno = -1;
	if(array != NULL && len != 0)
	{
			for (i=0; i<len;i++)
		{
			array[i] = valor;
			printf("%d ",array[i]);
		}
			retorno = 1;
	}
	else{
		printf("\nArray, longitud y valor son obligatorios\n");
	}

	return retorno;
}

int cargarArrayEnteros(int array[], int len)
{
	int i;
	int retorno = -1;
	int numeroIngresado;
	int resultado;
	if(array != NULL && len != 0)
	{
			for (i=0; i<len;i++)
		{
			do
			{	resultado = getInt(&numeroIngresado);
			}while(resultado != 1);
			array[i] = numeroIngresado;
			printf("%d ",array[i]);
		}
			retorno = 1;
	}
	else{
		printf("\nArray y longitud son obligatorios\n");
	}

	return retorno;
}

int mostrarArrayEnteros(int array[], int len)
{
	int i;
	int retorno = -1;

	if(array != NULL && len != 0)
	{
			for (i=0; i<len;i++)
		{
			printf("%d ",array[i]);
		}
			retorno = 1;
	}

	else{
		printf("\nArray y longitud son obligatorios\n");
	}

	return retorno;
}

int calcularPromedioArrayEnteros(int array[], int len)
{
	int i;
	int retorno = -1;
	int acumulador = 0;
	float promedio;
	if(array != NULL && len != 0)
	{
			for (i=0; i<len;i++)
		{
			acumulador = acumulador + array[i];
			printf("\nAcumulador + %d (posición %d del array): %d",array[i],i,acumulador);
		}
			promedio = ((float)acumulador / len);
			printf("\nEl promedio es: %.2f (%d / %d)",promedio,acumulador,len);
			retorno = 1;
	}

	else{
		printf("\nArray y longitud son obligatorios\n");
	}

	return retorno;
}
