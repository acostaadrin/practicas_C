#include <stdio.h>
#include <string.h>

void main(){
	int i, num = 1, num1, cociente = 2, resto = 0, contador = 0, aux = 0, indice = 0, posicion = 0;
	char secuencia = 1 + '0';
	printf("Ingrese un numero entero POSITIVO: ");
	scanf("%d", &num1);
	while (cociente > 1){
		posicion++;
		cociente = num1 / 2;
		resto = num1 % 2;
		if (resto == 1){
			contador++;
			if (aux <= contador){
				aux = contador;
				indice = posicion;
				if (cociente == 1){
					aux++;
					indice++;
				}
			}
		} else {
			contador = 0;
		}
		num1 = cociente;
	}	
	posicion++;
	if (aux == 0){
		aux++;
		indice = posicion;
	}
	indice = posicion - indice;
	printf("La secuencia mas larga es: ");
	for (i = 0; i < aux; i++){
		printf("%c", secuencia);
	}
	printf(" y empieza en la posicion: %d", indice + 1);
}

