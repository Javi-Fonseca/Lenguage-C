/*
    Actividad 7.6
    Conversion de Moneda
    By: Francisco Javier Fonseca Zaragoza
*/
#include <stdio.h>

int main (){
    // Variables
    float dolar, pesoMx;

    //Entrada
    puts("Conversion de dolar a peso mexicano.");
    printf("Ingresa una cantidad en dolares: \n");
    scanf("%f", &dolar);

    // Operaciones
    pesoMx = dolar*18.89;

    // Salida
    printf("$%.2f dolares equivale a $%.2f pesos mexicanos\n", dolar, pesoMx);
    
    return 0;
}
