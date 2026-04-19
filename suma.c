/*/////////////////////////////////////////
// Repaso
// 2026.04.19
// By: Francisco Javier Fonseca Zaragoza
// Prof. Michel Davalos Boites
// ///////////////////////////////////////*/

#include <stdio.h>
/******************************************
El programa imprime la suma de 10 valores
contenidos en un arreglo.
*******************************************/
int main() {
    /*Variables*/
    int x[10]= {6,7,9,2,4,7,4,3,2,9};
    int i, s=0;

    /*Outputs*/
    for(i=0;i<10;i++){
        s=s+x[i];
    }
    printf("La suma total es %i", s);
    return 0;
}