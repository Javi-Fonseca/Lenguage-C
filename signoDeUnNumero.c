/*  
    Actividad 7.4
    By: Francisco Javier Fonseca Zaragoza
    Signo de un numero
*/
#include <stdio.h>

int main () {
    // Variables
    int numero;
    
    //Entradas
    printf("Identificador del signo de un numero.\n");
    printf("Ingresa un numero: ");
    scanf("%i", &numero);

    // Clasificacion segun valor ingresado
        // negativo
    if (numero < 0)  {
        printf("Numero : %i\n", numero);
        puts("El numero es negativo.");
    }
        // positivo
    else if (numero > 0) {
        printf("Numero : %i\n", numero);
        puts("El numero es positivo.");
    }
        // Cero
    else if (numero == 0) {
        puts("El numero es cero.");
    }
    
    return 0;
}