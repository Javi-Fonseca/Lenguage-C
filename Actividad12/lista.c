#include <stdio.h>

int main() {
    int c=1, acum=0, numero;
    while(c<=10) {
        printf("Escriba un numero entero: \n");
        scanf("%i", &numero);
        if((numero%2)==0) {
            acum = acum + numero;
            c = c + 1;
        }
    }
    printf("Suma de los 10 numeros pares:%i\n", acum);
    return 0;
}
