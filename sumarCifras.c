// ingresar un numero entero de al menos tres cifras
// imprimir la suma de las cifras que forman el numero
// explicar los pasos realizados

#include <stdio.h>

void main(){
    float aux = 0, num;
    int suma = 0, ent = 0;
    printf("Ingrese un numero de al menos 3 cifras: ");
    scanf("%f", &num);
    
    while (num > 0){
		// dividir por 10 el numero ingresado para ir separando en cifras
		aux = num / 10;
		// separar la parte entera de la decimal luego de dividir el numero
		while (aux >= 1){
		    aux--;
		    ent++;
		}
		// reemplazar el numero ingresado por la parte entera calculada
		num = ent;
		// convertir a entero la parte decimal
		aux = aux * 10;
		// ir sumando los digitos separados
		suma = suma + aux;
		// reiniciar la variable que almacena la parte entera
		ent = 0;
    }
    // imprimir los resultados
    printf("La suma de las cifras del numero ingresado es: %d", suma);
}