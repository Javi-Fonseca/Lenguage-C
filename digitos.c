#include <stdio.h>
int main () {
    int n, c=0;
    printf("Ingrese un numero entero: ");
    scanf("%i", &n);
    do{
        n = n / 10;
        c = c + 1;
    } while(n != 0);
 printf("El numero tiene %i digitos\n", c);
    return 0;
}