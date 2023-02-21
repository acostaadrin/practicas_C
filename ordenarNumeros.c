//Escribir un algoritmo que permita cargar numeros a una matriz de 4x6 y que los ordene (horizontalmente hacia la derecha y hacia abajo) de menor a mayor.

#include <stdio.h>

void main(){
    int num[4][6], vector[24], i, j, aux, contador = 0;
    printf("Ingrese 24 numeros:\n");
    for (i = 0; i < 4; i++){
		for (j = 0; j < 6; j++){
		    printf("Posicion %d.%d: ", i, j);
		    scanf("%d", &num[i][j]);
		    vector[contador] = num[i][j];
		    contador++;
		}	
    }
	
	printf("La matriz ingresada fue:\n");
	for (i = 0; i < 4; i++){
		for (j = 0; j < 6; j++){
		    printf("%d\t", num[i][j]);
		}
		printf("\n");
    }
	printf("\n");
	
	for (i = 0; i < 23; i++){
		for (j = i + 1; j < 24; j++){
			if (vector[i] > vector[j]){
				aux = vector[i];
				vector[i] = vector[j];
				vector[j] = aux;
			}
		}
	}
	
	contador = 0;
	for (i = 0; i < 4; i++){
		for (j = 0; j < 6; j++){
		    num[i][j] = vector[contador];
		    contador++;
		}	
    }

	printf("La nueva matriz es:\n");
    for (i = 0; i < 4; i++){
		for (j = 0; j < 6; j++){
		    printf("%d\t", num[i][j]);
		}
		printf("\n");
    }
}

