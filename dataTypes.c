/*////////////////////////////////////////////
// Data Types
// 2026.04.26
// By: Francisco Javier Fonseca Zaragoza
// /////////////////////////////////////////*/
#include <stdio.h>
int main() {
    const int numero = 10;
    /*const = variable fija, su valor es read-only
            No puede asignarse su valor despues de 
            delclarar la variable*/
    double num ;
    /*double = tipo de dato mas exacto que float
                (hasta 15 digitos decimales),pero
                su tiempo de ejecucion es mas lento*/
    puts("Tabla de multiplicar");
    puts("-----------------------");
    puts("Ingresa un numero entero");
    scanf("%lf", &num);
    puts("-----------------------");
    for(int i=1; i<=numero; i++) {
        printf("%4i x %lf = %i\n", i, num, i*numero);
    }
    puts("-----------------------");
    return 0;
}