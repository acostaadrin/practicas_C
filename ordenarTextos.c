#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 20

void main(){
    char texto[5][MAX];
    char aux_tex[1][MAX]; 
    int i, j, longitud[5], vocales[5], aux, contador; 
    printf("Ingrese 5 textos cortos:\n"); 
    for (i = 0; i < 5; i++){
		contador = 0;
		printf("Texto %d:", i + 1); 
		gets(texto[i]);
		fflush(stdin);
		strcpy(aux_tex[0], texto[i]);
		longitud[i] = strlen(aux_tex[0]);
		for (j = 0; j < longitud[i]; j++){
		    if (aux_tex[0][j] == 'a' || aux_tex[0][j] == 'A' ||
				aux_tex[0][j] == 'e' ||	aux_tex[0][j] == 'E' ||
				aux_tex[0][j] == 'i' ||	aux_tex[0][j] == 'I' ||
				aux_tex[0][j] == 'o' ||	aux_tex[0][j] == 'O' ||
				aux_tex[0][j] == 'u' ||	aux_tex[0][j] == 'U' ) {
		    	contador++;
		    }
		}
		vocales[i] = contador;
    }
    
    for (i = 0; i<4; i++){
		for (j = i+1; j<5; j++){
		    if (longitud[i] > longitud[j]){
				aux = longitud[i];
				longitud[i] = longitud[j];
				longitud[j] = aux;
				strcpy(aux_tex[i], texto[i]);
				strcpy(texto[i], texto[j]);
				strcpy(texto[j], aux_tex[i]);
		    } else if (longitud[i] == longitud[j]){
			    if (vocales[i] > vocales[j]){
					aux = longitud[i];
					longitud[i] = longitud[j];
					longitud[j] = aux;
					strcpy(aux_tex[i], texto[i]);
					strcpy(texto[i], texto[j]);
					strcpy(texto[j], aux_tex[i]);
			    }
			}
	    }
	}
	system("cls");
    for (i = 0; i < 5; i++){
	    printf("Texto %d: ", i + 1);
		puts(texto[i]);
    }
}
