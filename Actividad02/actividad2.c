#include <stdio.h>

int main()
{
// Actividad 2 - Condicion if-else
//by Francisco Javier fonseca Zaragoza

    // Definiendo variable
    int finalGrade;
    
    // Captura de valores
    printf("Ingresa tu calificacion final: ");
    scanf("%i", &finalGrade);
    
    // Evaluando Condicion
    if (finalGrade < 0 || finalGrade > 100 ){
        printf("Error: la calificacion no es valida.");
        return 0; //termina el programa
    }
    if (finalGrade >= 60) {
        printf("Aprobaste la materia.");
    }
    else {
        printf("No aprobaste la materia.");
        }
    return 0;
}
