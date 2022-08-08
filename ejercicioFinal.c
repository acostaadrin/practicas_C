/* Realizar un algoritmo basado en un programa que solicite 10
n�meros y los guarde en un array. Posteriormente, el programa
solicitar� otro n�mero y nos indicar�:
� Cuantos n�meros del array son mayores que el n�mero le�do
� La suma de todos los n�meros del array que sean menores que el n�mero le�do
� Los n�meros del array que sean m�ltiplos del n�mero le�do */

/* Para resolver este ejercicio, utilizaremos programaci�n modular con
separaci�n en capas, es decir, el m�dulo principal se encargar� de la
lectura de datos y presentaci�n de resultados y la realizaci�n de los
c�lculos se har�n en procedimientos y/o funciones independientes. */

#include <stdio.h>

int contadorMayores(int num[10], int num1);
int sumaMenores(int num[10], int num1);
void multiplos(int num[10], int num1);

int i, j;

void main(){
	int num[10], num1;
	printf("Ingrese 10 numeros:\n");
	for (i = 0; i < 10; i++){
		printf("Ingrese el numero para la posicion %d: ", i);
		scanf("%d", &num[i]);
	}
	printf("Ingrese un numero de referencia: ");
	scanf("%d", &num1);
	
	printf("Matriz ingresada:\n");
	for (i = 0; i < 10; i++){
		printf("\t%d", num[i]);
	}
	printf("\n");
	
	printf("La cantidad de numeros en la matriz mayores al numero de referencia es: %d\n", contadorMayores(num, num1));
	printf("La suma de los numeros en la matriz menores al numero de referencia es: %d\n", sumaMenores(num, num1));
	multiplos(num, num1);
	
}

int contadorMayores(int num[], int num1){
	int contador = 0;
	for (i = 0; i < 10; i++){
		if (num[i] > num1){
			contador++;
		}
	}
	return contador;
}

int sumaMenores(int num[10], int num1){
	int suma = 0;
	for (i = 0; i < 10; i++){
		if (num[i] < num1){
			suma += num[i];
		}
	}
	return suma;
}

void multiplos(int num[10], int num1){
	int contador = 0;
	for (i = 0; i < 10; i++){
		if (num[i] % num1 == 0){
			contador++;
		}
	}
	int modulo[contador];
	int aux = 0;
	for (j = 0; j < 10; j++){
		if (num[j] % num1 == 0){
			modulo[aux] = num[j];
			aux++;
		}
	}
	printf("Los numeros de la matriz que son multiplos del numero referencia son:\n");
	for (i = 0; i < contador; i++){
		printf("%d\t", modulo[i]);
	}
}
