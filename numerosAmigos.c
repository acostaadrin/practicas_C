#include <stdio.h>

void main()
{
    int num1, num2, divisores1 = 0, divisores2 = 0;
    printf("Ingrese dos numeros diferentes:\n");
    printf("Numero 1: ");
    scanf("%d", &num1);
    printf("Numero 2: ");
    scanf("%d", &num2);
    for (int i = 1; i < num1; i++){
        if (num1%i == 0){
            divisores1 = divisores1 + i;
        }
    }
    for (int j = 1; j < num2; j++){
        if (num2%j == 0){
            divisores2 = divisores2 + j;
        }
    }
    if (divisores1 == num2 && divisores2 == num1){
        printf("Son numeros amigos!");
    } else {
        printf("Los numeros no son amigos.");
    }
}
