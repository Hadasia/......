#include <stdio.h>

int main() {
    int codigo, quantidade;
    double valor;

    // Leitura do código e quantidade
    scanf("%d %d", &codigo, &quantidade);

    // Cálculo do valor
    switch (codigo) {
        case 1:
            valor = 4.00 * quantidade;
            break;
        case 2:
            valor = 4.50 * quantidade;
            break;
        case 3:
            valor = 5.00 * quantidade;
            break;
        case 4:
            valor = 2.00 * quantidade;
            break;
        case 5:
            valor = 1.50 * quantidade;
            break;
        default:
            printf("Código inválido\n");
            return 1;
    }

    // Saída formatada
    printf("Total: R$ %.2f\n", valor);

    return 0;
}