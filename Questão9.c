#include <stdio.h>

int main() {
    double raio, volume;

    // Entrada do raio da esfera
    scanf("%lf", &raio);

    // Cálculo do volume da esfera
    volume = (4.0 / 3) * 3.14159 * raio * raio * raio;

    // Saída formatada
    printf("VOLUME = %.3lf\n", volume);

    return 0;
}
