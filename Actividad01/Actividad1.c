#include <stdio.h>

int main()
{
// Actividad 1 - Entrada de Datos (scanf)
// by Francisco Javier Fonseca Zaragoza

    // Definiendo variables
    float grade1, grade2, grade3;
    float average;
    
    // Captura de valores
    printf("Ingresa calificacion 1: ");
    scanf("%f", &grade1);
    printf("Ingresa calificacion 2: ");
    scanf("%f", &grade2);
    printf("Ingresa calificacion 3: ");
    scanf("%f", &grade3);
    
    // Calculo correspondiente
    average = (grade1 + grade2 + grade3) / 3;
    
    // Imprimiendo Resultados
    printf("El promedio de las calificaciones es %.2f", average);
    
    return 0;
}
