// Venta
#include <stdio.h>
int main() {
    int libros, cuadernos, plumas;
    float p_lib=100, p_cuad=15.5, p_plum=2.35, total;

    printf("Libros: "); scanf("%i", &libros);
    printf("Cuadernos: "); scanf("%i", &cuadernos);
    printf("Plumas: "); scanf("%i", &plumas);

    total = (cuadernos*p_cuad)+(libros*p_lib)+(plumas*p_plum);d

    printf("Venta total: $ %.2f\n", total);
    return 0;
}