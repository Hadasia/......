#include <stdio.h>

int main() {
    int golsInter, golsGremio, numGrenais = 0, vitoriasInter = 0, vitoriasGremio = 0, empates = 0, novoGrenal;

    do {
        scanf("%d %d", &golsInter, &golsGremio);

        numGrenais++;
        
        if (golsInter > golsGremio) {
            vitoriasInter++;
        } else if (golsGremio > golsInter) {
            vitoriasGremio++;
        } else {
            empates++;
        }

        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &novoGrenal);

    } while (novoGrenal == 1);

    printf("%d grenais\n", numGrenais);
    printf("Inter:%d\n", vitoriasInter);
    printf("Gremio:%d\n", vitoriasGremio);
    printf("Empates:%d\n", empates);

    if (vitoriasInter > vitoriasGremio) {
        printf("Inter venceu mais\n");
    } else if (vitoriasGremio > vitoriasInter) {
        printf("Gremio venceu mais\n");
    } else {
        printf("Nao houve vencedor\n");
    }

    return 0;
}