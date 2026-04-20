/*  
    Actividad 7.3
    By: Francisco Javier Fonseca Zaragoza
    Horas a segundos
*/
#include <stdio.h>

int main () {
    // Variables
    int horas;
    int segundos;

    // Entradas
    printf("Calculador de segundos en una hora.\n");
    printf("Ingresa un numero de horas (sin decimales): ");
    scanf("%i", &horas);

    if (horas < 0){
        puts("Error: El valor ingresado no puede ser negativo.");
    } else {
    // Operaciones
    segundos = horas*3600;

    //Salida
    printf("Hay %i segundos en %i horas.\n", segundos, horas);
    }
    return 0;
}