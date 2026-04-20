/*  
    Actividad 7.1
    By: Francisco Javier Fonseca Zaragoza
    Kilogramos a libras
*/
#include <stdio.h>

int main(){
    // Variables
    float masakg, masalb;
    float conversorkgAlb = 2.20462;

    // Entradas
    printf("Conversor de unidades de masa en kilogramos a libras.\n");
    printf("Ingresa la masa en kilogramos(kg): ");
    scanf("%f", &masakg);

    if (masakg < 0){
        puts("Error: El valor ingresado no puede ser negativo.");
    } else {
    // Operaciones
    // Kilogramos a libras
    masalb = masakg * conversorkgAlb;

    // Salida
    printf("Una masa de %.2f kg equivale en libras a: %.5f lb\n", masakg, masalb);
    }

    return 0;
}