/*////////////////////////////////////////////
// Data Types
// 2026.04.26
// By: Francisco Javier Fonseca Zaragoza
// /////////////////////////////////////////*/
#include <stdio.h>
int main() {
int x = 2;
int y = 10;
float z = 2.5;
float w = 0.5;

// Divisiones con float e int
printf("y/x = %i\n", y/x);
/* Division entre enteros: regresa un entero,
 sin punto decimal, descartando el residuo.*/
printf("z/w = %f\n", z/w);
/* Division entre flotantes: regresa un flotante*/
printf("y/z = %f\n", y/z);
/*division entero entre flotante: regresa un flotante*/
printf("w/x = %f\n", w/x);
/*division flotante entre entero: regresa un flotante*/

return 0;
}