/*  
    Actividad 7.2
    By: Francisco Javier Fonseca Zaragoza
    IMC
*/
#include <stdio.h>

int main () {
    // Variables
    float masakg, altura;
    float imc;
    
    // Entradas
    printf("Calculador de Indice de Masa Corporal (IMC).\n");
    printf("Ingresa la masa en kilogramos(kg): ");
    scanf("%f", &masakg);
    printf("Ingresa la altura en metros(m): ");
    scanf("%f", &altura);

    if (altura < 0 || masakg < 0){
        puts("Error: El valor ingresado no puede ser negativo.");
    } else {
    
    // Operaciones
     imc = masakg/(altura*altura);

    // Clasificacion segun resultado
        // Bajo peso
    if (imc < 18.5) {
        printf("IMC : %.2f\n", imc);
        puts("Clasificacion: Bajo peso");
    }
        // Peso normal
    else if (imc >= 18.5 && imc <= 24.9) {
        printf("IMC : %.2f\n", imc);
        puts("Clasificacion: Peso normal");
    }
        // Sobrepeso
    else if (imc >= 25 && imc <= 29.9) {
        printf("IMC : %.2f\n", imc);
        puts("Clasificacion: Sobrepeso");
    }
        // Obesidad
    else if (imc > 30) {
        printf("IMC : %.2f\n", imc);
        puts("Clasificacion: Obesidad.");
    }
        }   
    return 0;
}
