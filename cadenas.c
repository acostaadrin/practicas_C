//Ingresar 5 textos y ordenarlos del mas corto al mas largo

#include <stdio.h>
#include <string.h>

void main()
{
    int largo[5], i, j, aux[5];
    char arrayCadenas[5][30];
    char auxtex[1][30];
    
    printf("Ingrese diez textos cortos.\n");
    for(i=0;i<5;i++){
        printf("Texto %d: ", i+1);
        gets(arrayCadenas[i]);
		largo[i] = strlen(arrayCadenas[i]);
        fflush(stdin);
    }
    
    for (i = 0; i<4; i++){
		for (j = i+1; j<5; j++){
		    if (largo[i] > largo[j]){
				// cambiar de lugar las posiciones
				aux[i] = largo[i];
				largo[i] = largo[j];
				largo[j] = aux[i];
				// cambiar de lugar los textos
				strcpy(auxtex[0], arrayCadenas[i]);
				strcpy(arrayCadenas[i], arrayCadenas[j]);
				strcpy(arrayCadenas[j], auxtex[0]);
		    }
		}
    }
    printf("El orden de los textos ingresados (de mas corto a mas largo) es:\n");
    for (i = 0; i < 5; i++){
		puts(arrayCadenas[i]);
	}
}

