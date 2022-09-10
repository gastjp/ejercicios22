#ifndef UTN_H_
#define UTN_H_



int	sumarDosEnteros(int primerNumero, int segundoNumero);
int	dividirDosEnteros(int primerNumero, int segundoNumero);
int imprimirFloat(float numAImprimir);
int esPar(int numero);
int getInt(int* resP);
int getIntMinMax(int* resP, int min, int max);
int getFloat(float* resP);
int getFloatMinMax(float* resP, float min, float max);
int getChar(char* resP);
int Sumar1(int num1, int num2,int* resultado);
int inicializarArrayEnteros(int array[], int len, int valor);
int cargarArrayEnteros(int array[], int len);
int mostrarArrayEnteros(int array[], int len);
int calcularPromedioArrayEnteros(int array[], int len);

#endif /* UTN_H_ */
