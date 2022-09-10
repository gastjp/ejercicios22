#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int main(void) {

	setbuf(stdout, NULL);

	char opcion;
	int arrayEnteros[5];
	int resultado = 0;

	do
	{
		printf ("\n1-Inicializar"
				"\n2-Cargar"
				"\n3-Mostrar"
				"\n4-Calcular Promedio"
				"\n5-Ordenar"
				"\n9-Salir"
				"\nIngrese una opción: ");
		fflush(stdin);
		fflush(stdout);
		scanf ("%c",&opcion);

		switch (opcion)
		{
		case '1':

			printf ("Ud. ha seleccionado lo opción 1-Inicializar\n");
			do{
			resultado = inicializarArrayEnteros(arrayEnteros, 5, 0);
			}while(resultado != 1);
			resultado = 0;
		break;

		case '2':
			printf ("Ud. ha seleccionado lo opción 2-Cargar\n");
			do{
			resultado = cargarArrayEnteros(arrayEnteros, 5);
			}while(resultado != 1);
			resultado = 0;
		break;

		case '3':

			printf ("Ud. ha seleccionado lo opción 3-Mostrar\n");
			do{
			resultado = mostrarArrayEnteros(arrayEnteros,5);
			}while(resultado != 1);
			resultado = 0;


		break;

		case '4':

			printf ("Ud. ha seleccionado lo opción 4-Calcular promedio\n");
			do{
			resultado = calcularPromedioArrayEnteros(arrayEnteros,5);
			}while(resultado != 1);
			resultado = 0;

		break;

		case '5':


		break;


		}




	}while (opcion != '9');

	setbuf(stdout, NULL);
	return EXIT_SUCCESS;
}




//ANEXO 5-1:
//Armar un Menú de Opciones con las siguientes opciones
//1-Inicializar
//2-Cargar
//3-Mostrar
//4-Calcular Promedio
//5-Ordenar
//Al ingresar a cada opción del menú deberá imprimir en pantalla el nombre del mismo. Ej: Si se presiona la opción 1 mostrar por pantalla “Ud. ha seleccionado lo opción 1-Inicializar”
//ANEXO 5-2:
//Realizar un programa que desde el main llame o invoque a la función que muestre el Menú del punto anterior.
//Utilizar funciones y bibliotecas.
//ANEXO 5-3:
//Crear un Array de 5 elementos de tipo numérico donde se cargarán edades.
//Agregar la funcionalidad para la opción 1 del Menú del ejercicio anterior utilizando funciones, es decir una función que inicialice el Array.
//Agregar la funcionalidad para la opción 2 del Menú utilizando funciones, es decir una función que le pida los números o edades al usuario para cargar el Array de forma secuencial.
//ANEXO 5-4:
//Modificar la funcionalidad de la opción 2 del Menú para que la carga del Array sea de forma aleatoria.
//Agregar la funcionalidad de la opción 3 del Menú para mostrar por pantalla los elementos del Array, o sea las edades.
//ANEXO 5-5:
//Modificar la funcionalidad de la opción 3 del Menú de forma que existan 2 funciones una que muestre solamente un elemento o edad y otra que muestre todos los elementos o edades. La función que muestra todos los elementos o edades debe llamar a la que muestra solo uno.
//ANEXO 5-6:
//Realizar una función que calcule el promedio de los números ingresados en el Array y agregarlo a la opción de Menú 4. La misma deberá imprimir el resultado por pantalla.
//ANEXO 5-7:
//Modificar la función que calcula el promedio en la opción 4 del Menú, para que el resultado del promedio lo devuelva por retorno y sea main quien lo imprima por pantalla.
//ANEXO 5-8:
//Modificar la función que calcula el promedio en la opción 4 del Menú, para que devuelva el resultado del promedio por parámetro por referencia.  El retorno de la misma debe indicar si funcionó correctamente.
