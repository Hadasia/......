#include <stdio.h>

int main() {
    int tempoViagem, velocidadeMedia;
    double litrosNecessarios;

    printf("Informe o tempo de viagem: ");
    scanf("%d", &tempoViagem);

    printf("Informe a velocidade média: ");
    scanf("%d", &velocidadeMedia);

    // Calcula a distância percorrida e os litros necessários
    double distanciaPercorrida = tempoViagem * velocidadeMedia / 12.0;
    litrosNecessarios = distanciaPercorrida / 1.0;

    
    printf("Quantidade de litros necessários: %.3lf\n", litrosNecessarios);

    return 0;
}
