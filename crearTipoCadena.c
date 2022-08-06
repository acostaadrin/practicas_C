#include <stdio.h>
#include <string.h>

void main()
{
    int largo[5], i, j, aux[5];
    char arrayCadenas[5][20]; //Creamos un vector de cadenas
    char auxtex[1][20];
    
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
			strcpy(auxtex[i], arrayCadenas[i]);
			strcpy(arrayCadenas[i], arrayCadenas[j]);
			strcpy(arrayCadenas[j], auxtex[i]);
		    }
		}
    }
    printf("El texto mas largo ingresado fue: ");
	puts(arrayCadenas[4]);
}
