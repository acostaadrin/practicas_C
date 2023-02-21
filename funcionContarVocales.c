//Ingresar 5 textos cortos y ordenarlos de mas corto a mas largo, en caso de ser iguales ira primero el que tenga mas vocales.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 20

int  i, j, contador;
char texto[5][MAX];
int contar_vocales(char aux_tex[MAX], int longitud);
void mostrar_resultado();

void main(){
    char aux_tex[1][MAX]; 
    int longitud[5], vocales[5], aux; 
    printf("Ingrese 5 textos cortos:\n"); 
    for (i = 0; i < 5; i++){
		contador = 0;
		printf("Texto %d:", i + 1); 
		gets(texto[i]);
		fflush(stdin);
		strcpy(aux_tex[0], texto[i]);
		longitud[i] = strlen(aux_tex[0]);
		vocales[i] = contar_vocales(texto[i], longitud[i]);
    }
    
    for (i = 0; i<4; i++){
		for (j = i+1; j<5; j++){
		    if (longitud[i] > longitud[j]){
				aux = longitud[i];
				longitud[i] = longitud[j];
				longitud[j] = aux;
				strcpy(aux_tex[0], texto[i]);
				strcpy(texto[i], texto[j]);
				strcpy(texto[j], aux_tex[0]);
		    } else if (longitud[i] == longitud[j]){
			    if (vocales[i] > vocales[j]){
					aux = longitud[i];
					longitud[i] = longitud[j];
					longitud[j] = aux;
					strcpy(aux_tex[0], texto[i]);
					strcpy(texto[i], texto[j]);
					strcpy(texto[j], aux_tex[0]);
			    }
			}
	    }
	}
	system("cls");
	
	mostrar_resultado();
}

int contar_vocales(char aux_tex[], int longitud){
	int vocales;
	for (j = 0; j < longitud; j++){
	    if (aux_tex[j] == 'a' || aux_tex[j] == 'A' ||
			aux_tex[j] == 'e' || aux_tex[j] == 'E' ||
			aux_tex[j] == 'i' || aux_tex[j] == 'I' ||
			aux_tex[j] == 'o' || aux_tex[j] == 'O' ||
			aux_tex[j] == 'u' || aux_tex[j] == 'U' ) {
	    	contador++;
	    }
	}
	vocales = contador;
	return vocales;
}

void mostrar_resultado(){
    for (i = 0; i < 5; i++){
	    printf("Texto %d: ", i + 1);
		puts(texto[i]);
    }
}

