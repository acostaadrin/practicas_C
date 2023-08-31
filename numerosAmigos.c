// Dos numeros son amigos cuando la suma de los divisores de uno es igual al otro número

#include <stdio.h>

int sumar_divisores(int n);

int main(){
    int n1, n2, b1, b2;
    printf("Ingrese dos numeros para saber si son amigos!\n");
    printf("Ingrese el primer numero: ");
    scanf("%d", &n1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &n2);
    if (n2 == sumar_divisores(n1)){
        b1 = 1;
    }
    if (n1 == sumar_divisores(n2)){
        b2 = 1;
    }
    if (b1 == 1 && b2 == 1){
        printf("Los numeros son amigos!");
    }
    else {
        printf("Los numeros no son amigos.");
    }

    return 0;
}

int sumar_divisores(int n){
    int i, suma = 0;
    for (i = 1; i <= n/2; i++){
        if (n % i == 0){
            suma += i;
        }
    }
    return(suma);
}