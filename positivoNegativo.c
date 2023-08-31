#include <stdio.h>

int main(){
    int i, b_p = 0, b_n = 0, n, valor, contador = 0;
    do{
        printf("Introduzca la cantidad de numeros a cargar: ");
        scanf("%d", &n);
    }while (n <= 0);
    for (i = 0; i < n; i++){
        printf("Numero %d: ", i + 1);
        scanf("%d", &valor);
        if (valor < 0){
            b_n = 1;
        } else {
            if (valor > 0){
                b_n = 0;
                b_p = 1;
            } else {
                b_n = 0;
                b_p = 0;
            }
        }
        if (b_n == 1 && b_p == 1){
            contador++;
            b_p = 0;
        }
    }
    printf("La cantidad de veces que a un numero positivo le sigue un numero negativo es: %d", contador);
    return 0;
}
