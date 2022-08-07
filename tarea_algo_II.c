#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define MAX_VAL 20

int f_modulo(int a, int b);
void numerosAmigos();
void modulo();
void conversorBinario();
void secuenciaContigua();

void main(){
	int seleccion;
	printf("Opcion 1: Numeros amigos.\nOpcion 2: Rutina Metodo.\nOpcion 3: Conversor a Binario.\nOpcion 4: Secuencia contigua.\nOtro: Salir.\n");
	printf("Elija un proceso: ");
	scanf("%d", &seleccion);
	switch (seleccion){
		case 1:
			system("cls");
			numerosAmigos();
			break;
		case 2:
			system("cls");
			modulo();
			break;
		case 3:
			system("cls");
			conversorBinario();
			break;
		case 4:
			system("cls");
			secuenciaContigua();
			break;
		default:
			printf("Adios.");
			break;
	}
}

void numerosAmigos(){
    int i = 1, j = 1, num1 = 0, num2 = 0, divisores1 = 0, divisores2 = 0;
    printf("Ingrese dos numeros diferentes:\n");
    printf("Numero 1: ");
    scanf("%d", &num1);
    printf("Numero 2: ");
    scanf("%d", &num2);
    for (i = 1; i < num1; i++){
        if (num1%i == 0){
            divisores1 = divisores1 + i;
        }
    }
    for (j = 1; j < num2; j++){
        if (num2%j == 0){
            divisores2 = divisores2 + j;
        }
    }
    if (divisores1 == num2 && divisores2 == num1){
        printf("Son numeros amigos!");
    } else {
        printf("Los numeros no son amigos.");
    }
}

void modulo(){
	int num1 = 0, num2 = 0, resto = 0;
	printf("Ingrese dos numeros enteros:\n");
	printf("Primer numero: ");
	scanf("%d", &num1);
	printf("Segundo numero: ");
	scanf("%d", &num2);
	if (num2 != 0){
		resto = f_modulo(num1, num2);
		printf("El resto de dividor %d con %d es: %d", num1, num2, resto);
	} else {
		printf("La division de cualquier numero por cero es indefinida.");
	}
}

f_modulo(a, b){
	int cociente, residuo;
	cociente = a / b;
	residuo = a - b*cociente;
	return(residuo);
}

void conversorBinario(){
	float num;
	int i, num1 = 0, resto = 0, cociente = 2, contador = 0;
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

void secuenciaContigua(){
	int i, num = 1, num1 = 0, cociente = 2, resto = 0, contador = 0, aux = 0, indice = 0, posicion = 0;
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
