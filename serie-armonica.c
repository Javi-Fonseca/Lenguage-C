/*/////////////////////////////////////////
// Repaso
// 2026.04.19
// By: Francisco Javier Fonseca Zaragoza
// Prof. Michel Davalos Boites
// ///////////////////////////////////////*/

#include <stdio.h>
/******************************************
El programa solicita un numero y regresa
la serie armonica hasta ese digito
*******************************************/
int main() {
    /*Variables*/
    float d, i;
    float suma=0;

    /*Inputs*/
    printf("Ingrese el valor de d: ");
    scanf("%f", &d);

    /*Outputs*/
    for (i=1;i<=d;i++) {
        suma = suma + (1/i);/*Formula: 1+(1/2)+...+(1/d)*/
    }
    printf("Suma total: %.2f", suma);
    return 0;
}