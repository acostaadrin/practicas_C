#include <stdio.h>

void suma(int a, int b);

void main() {
    int num1, num2, menor, mayor;
    printf("Ingrese dos numeros (enteros y diferentes).\nPrimer numero: ");
    scanf("%d", &num1);
    printf("Segundo numero: ");
    scanf("%d", &num2);
    if (num1 < num2) {
		menor = num1;
		mayor = num2;
    } else {
		mayor = num1;
		menor = num2;
    }
    suma(menor, mayor);
}

void suma(a, b) {
    int i, acumulador = 0;
    for (i = a+1; i < b; i++) {
		if (i%2 == 0) {
		    acumulador = acumulador + i;
		    printf("%d ", acumulador);
		}
    }
    printf("La suma de los pares comprendidos entre ambos numeros ingresados es: %d", acumulador);
}
