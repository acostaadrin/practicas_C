#include <stdio.h>

int main() {
    int num1, num2, num3;
    printf("Ingrese 3 numeros enteros diferentes:\nPrimer numero: ");
    scanf("%d", &num1);
    printf("Segundo numero: ");
    scanf("%d", &num2);
    printf("Tercer numero: ");
    scanf("%d", &num3);
    int suma = num1 + num2 + num3;
    int prom = (num1 + num2 + num3)/3;
    int prod = num1 * num2 * num3;
    printf("La suma de los numeros ingresados es: %d\n", suma);
    printf("El promedio de los numeros ingresados es: %d\n", prom);
    printf("El producto de los numeros ingresados es: %d\n", prod);
    if (num1 <= num2){
		if (num1 <= num3) {
		    printf("El menor numero ingresado fue: %d\n", num1);
		} else {
		    printf("El menor numero ingresado fue: %d\n", num3);
		}
    } else if (num2 <= num3) {
		printf("El menor numero ingresado fue: %d\n", num2);
    } else {
		printf("El menor numero ingresado fue: %d\n", num3);
    }
    if (num1 >= num2){
		if (num1 >= num3) {
		    printf("El mayor numero ingresado fue: %d\n", num1);
		} else {
		    printf("El mayor numero ingresado fue: %d\n", num3);
		}
    } else if (num2 >= num3) {
		printf("El mayor numero ingresado fue: %d\n", num2);
    } else {
		printf("El mayor numero ingresado fue: %d\n", num3);
    }    
    return 0;
    system("PAUSE");
}
