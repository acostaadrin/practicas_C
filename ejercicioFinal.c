/* Realizar un algoritmo basado en un programa que solicite 10
números y los guarde en un array. Posteriormente, el programa
solicitará otro número y nos indicará:
• Cuantos números del array son mayores que el número leído
• La suma de todos los números del array que sean menores que el número leído
• Los números del array que sean múltiplos del número leído */

/* Para resolver este ejercicio, utilizaremos programación modular con
separación en capas, es decir, el módulo principal se encargará de la
lectura de datos y presentación de resultados y la realización de los
cálculos se harán en procedimientos y/o funciones independientes. */

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
