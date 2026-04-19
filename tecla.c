/*/////////////////////////////////////////
// Repaso
// 2026.04.19
// By: Francisco Javier Fonseca Zaragoza
// Prof. Michel Davalos Boites
// ///////////////////////////////////////*/

#include <stdio.h>
/******************************************
El programa solicita un solo caracter e 
imprime si es una letra mayuscula, minuscula,
digito o caracter especial.
*******************************************/
int main() {
    /*Variables*/
    char t;

    /*Inputs*/
    printf("Ingrese un caracter: ");
    scanf(" %c", &t);

    /*Outputs*/
    if(t>='A'&&t<='Z') //Mayusculas
        printf("\n Es una letra Mayuscula");
    else if(t>='a'&&t<='z') //Minusculas
        printf("\n Es una letra Minuscula");
    else if(t>='0'&&t<='9') //Digitos
        printf("\n Es un digito");
    else //Caracteres especiales
        printf("\nEs un caracter Especial");
    
    return 0;
}