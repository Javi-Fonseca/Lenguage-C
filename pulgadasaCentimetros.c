/*
    Actividad 7.7
    Conversion de pulgadas a centimetros
    By: Francisco Javier Fonseca Zaragoza
*/
#include <stdio.h>

int main () {
    // Variables
    float pulgadas;
    float centimetros;

    // Entrada
    puts("Conversion de pulgadas a centimetros.");
    printf("Ingresa una cantidad en pulgadas(in): ");
    scanf("%f", &pulgadas);

    // Operaciones
    centimetros = pulgadas*2.54;

    // Salida
    printf("%.4fin equivale a %.4fcm\n", pulgadas, centimetros);

    return 0;
}