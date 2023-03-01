//Escribir un algoritmo para calcular el factorial de un numero ingresado

#include <stdio.h>

int factorial(int num);

void main(){
	int num1;
	printf("Ingrese un numero: ");
	scanf("%d", &num1);
	printf("El factorial del numero ingresado es: %d\n", factorial(num1));	
}

int factorial(int num){
	int i, factorial = 1;
	for (i = 0; i < num; i++){
		factorial = factorial * (num - i);
	}
	return factorial;
}
