#include <stdio.h>

void primo(int a);

void main(){
    int num;
    printf("Ingrese un numero: ");
    scanf("%d", &num);
    primo(num);    
}

void primo(a) {
    int i, contador = 0;
    if (a != 1) {
        for (i = a; i > 0; i--) {
            if (a%i == 0) {
		contador++;
	    }
        }
        if (contador > 2) {
	   printf("No es primo.");
        } else {
	   printf("Es primo.");
	}
    } else {
        printf("Es primo.");
    }
}
