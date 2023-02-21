//Crear un programa que convierta numeros con base decimal a números binarios.

#include <stdio.h>
#include <math.h>

#define MAX_VAL 20

void main(){
	float num;
	int i, num1, resto, cociente = 2, contador = 0;
	int aux = MAX_VAL - 1;
	int residuos[MAX_VAL] = {0};
	printf("Ingresar un numero entero: ");
	scanf("%f", &num);
	num1 = num;
	while (cociente != 1 && cociente != 0){
		cociente = num / 2;
		resto = fmod(num, 2);
		residuos[aux] = resto;
		aux--;
		num = cociente;
		contador++;
	}
	residuos[aux] = cociente;
	contador++;
	printf("El numero %d en formato binario es: ", num1);
	for (i = (MAX_VAL - contador); i < MAX_VAL; i++){
		printf("%d", residuos[i]);
	}
}

