/*/////////////////////////////////////////
// Repaso
// 2026.04.19
// By: Francisco Javier Fonseca Zaragoza
// Prof. Michel Davalos Boites
// ///////////////////////////////////////*/
#include <stdio.h>

/******************************************
El programa solicita la operacion a realizar:
suma, resta, multiplicacion o division con
sus operadores; despues solicita dos numeros
enteros para realizar dicha operacion
*******************************************/
int main() {
    /*Variables*/
    char op;
    int n1, n2;

    /*Inputs*/
    printf("Operador (+, -, *, /): ");
    scanf( "%c", &op);
    printf("Ingrese primer numero: ");
    scanf("%i", &n1);
    printf("Ingrese segundo numero: ");
    scanf("%i", &n2);

    /*Outputs*/
    switch (op) {
        case '+': printf("Resultado: %i", n1+n2); break;
        case '-': printf("Resultado: %i", n1-n2); break;
        case '*': printf("Resultado: %i", n1*n2); break;
        case '/': 
            if(n2!=0) {
                printf("Resultado: %.2f", (float) n1/n2);
            } else {
                printf("Error: Division por cero.");
            } break;
        default : 
        printf("Error: el operador no es valido");
    }
    return 0;
}
