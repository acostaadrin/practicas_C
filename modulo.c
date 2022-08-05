#include <stdio.h>

int modulo(int a, int b);

void main(){
	int num1, num2, resto = 0;
	printf("Ingrese dos numeros enteros:\n");
	printf("Primer numero: ");
	scanf("%d", &num1);
	printf("Segundo numero: ");
	scanf("%d", &num2);
	if (num2 != 0){
		resto = modulo(num1, num2);
		printf("El resto de dividor %d con %d es: %d", num1, num2, resto);
	} else {
		printf("La division de cualquier numero por cero es indefinida.");
	}
}

modulo(a, b){
	int cociente, residuo;
	cociente = a / b;
	residuo = a - b*cociente;
	return(residuo);
}
