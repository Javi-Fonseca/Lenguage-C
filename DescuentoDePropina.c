/*  
    Actividad 7.5
    By: Francisco Javier Fonseca Zaragoza
    Descuento de Propina
*/
#include <stdio.h>

int main(){
    //Variables
    float cuenta;
    int porcentajePropina;
    float propina;
    float montoFinal;

    // Entradas
    puts("Calculador del monto final descontando la propina.");
    printf("Ingresa el monto de la cuenta a pagar:  ");
    scanf("%f", &cuenta);
    printf("Ingresa el porcentaje de propina (0%c-100%c): ", 37, 37);
    scanf("%i", &porcentajePropina);

    if (cuenta < 0 || porcentajePropina  < 0 || porcentajePropina > 100){
        puts("Error: El valor ingresado es incorrecto.");
    } else {
    // Operaciones
    propina = cuenta*porcentajePropina/100;
    montoFinal = cuenta-propina;

    // Salidas
    puts("-------------------------------");
    printf("Cuenta: %.2f\n", cuenta);
    printf("Propina: %.2f\n", propina);
    puts("-------------------------------");
    printf("Total a pagar: %.2f\n", montoFinal);
    }
    return 0;
}