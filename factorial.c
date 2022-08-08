#include <stdio.h>

int menor(int num1, int num2);
int mayor(int num1, int num2);
void sumaComprendida(int num1, int num2);
int factorial(int num);

void main(){
	int num1, num2;
	printf("Ingrese dos numeros distintos.\n");
	printf("Numero 1: ");
	scanf("%d", &num1);
	printf("El factorial del numero ingresado es: %d\n", factorial(num1));
	printf("Numero 2: ");
	scanf("%d", &num2);
	printf("El factorial del numero ingresado es: %d\n", factorial(num2));

	sumaComprendida(num1, num2);
	
}

int menor(num1, num2){
	int menor;
	if (num1 < num2){
		menor = num1;
	} else {
		menor = num2;
	}
	return menor;
}

int mayor(num1, num2){
	int mayor;
	if (num1 > num2){
		mayor = num1;
	} else {
		mayor = num2;
	}
	return mayor;
}

void sumaComprendida(num1, num2){
	int i, suma = 0;
	for (i = menor(num1, num2) + 1; i < mayor(num1, num2); i ++){
		suma += i;
	}
	printf("La suma de los numeros comprendidos entre los valores ingresados es: %d", suma);
}

int factorial(num){
	int i, factorial = 1;
	for (i = 0; i < num; i++){
		factorial = factorial * (num - i);
	}
	return factorial;
}
