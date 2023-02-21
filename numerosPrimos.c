//Escribir un algoritmo que indique si un numero es primo o no

#include <stdio.h>

void primo(int a);

void main(){
    int num, i, mitad, contador = 0;
    printf("Ingrese un numero: ");
    scanf("%d", &num);
    if (num == 1) {
        printf("Es primo.");
    } else {
        for (i = 1; i <= num; i++){
        	if (num % i == 0){
        		contador++;
			}
		}
		if (contador <= 2){
			printf("Es Primo");
		} else {
			printf("No es Primo");
		}
    }
}

