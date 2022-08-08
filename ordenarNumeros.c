#include <stdio.h>

void main(){
    int num[4][6], i, j, k, aux;
    printf("Ingrese 24 numeros:\n");
    for (i = 0; i < 4; i++){
		for (j = 0; j < 6; j++){
		    printf("Posicion %d.%d: ", i, j);
		    scanf("%d", &num[i][j]);
		}	
    }
	
	for (i = 0; i < 4; i++){
		for (j = 0; j < 6; j++){
		    printf("%d\t", num[i][j]);
		}
		printf("\n");
    }
	printf("\n");
	
    for (i = 0; i < 4; i++){
		for (j = 0; j < 5; j++){
			for (k = j + 1; k < 6; k++){
				if (num[i][j] > num[i][k]){
				    aux = num[i][j];
				    num[i][j] = num[i][k];
				    num[i][k] = aux;
				}
			}
		}
    }

    for (i = 0; i < 4; i++){
		for (j = 0; j < 6; j++){
		    printf("%d\t", num[i][j]);
		}
		printf("\n");
    }
}
