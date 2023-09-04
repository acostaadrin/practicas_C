#include <stdio.h>

int main(){
    int i, j, largest, suma = 0, aux, aux_posicion, vector[10], posicion[10];
    printf("Ingrese 10 numeros naturales:\n");
    for (i = 0; i < 10; i++){
        printf("Posicion %d: ", i + 1);
        scanf("%d", &vector[i]);
        posicion[i] = i + 1;
    }
    printf("Matriz original:\n");
    for (i = 0; i < 10; i++){
        printf("%d\t", vector[i]);
    }

    for (i = 0; i < 9; i++){
        for (j = i + 1; j < 10; j++){
            if (vector[i] < vector[j]){
                aux = vector[i];
                vector[i] = vector[j];
                vector[j] = aux;
                aux_posicion = posicion[i];
                posicion[i] = posicion[j];
                posicion[j] = aux_posicion;
            }
        }
    }
    largest = vector[0];
    printf("\n");
    for (i = 0; i < 10; i++){
        if (vector[i] == largest){
            suma++;
        }
        else {
            printf("\nEl numero %d\tse repite %d veces en las posiciones: ", vector[i - 1], suma);
            for (j = i - suma; j < i; j++){
                printf("%d ", posicion[j]);
            }
            suma = 1;
            largest = vector[i];
        }
    }
    printf("\nEl numero %d\tse repite %d veces en las posiciones: ", vector[i - 1], suma);
    for (j = 10 - suma; j < 10; j++){
        printf("%d ", posicion[j]);
    }
    
    return 0;
}