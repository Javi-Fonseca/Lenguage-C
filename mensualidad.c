#include <stdio.h>

int main() {
    int tipo;
    float inscription=100, mensualidad=150, total;
    printf("¿Es alumno de la Universidad? (1-Si, 2-No): ");
    scanf("%i", &tipo);
    if(tipo==1) {
        total=(inscription+mensualidad)*.5;
    } else {
        total = inscription + mensualidad;
    }
    printf("Monto total a pagar: $%.2f\n", total);
    return 0;
}