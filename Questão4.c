#include <stdio.h>

int main() {
    int numCasosTeste;
    scanf("%d", &numCasosTeste);

    while (numCasosTeste--) {
        int numTermos;
        scanf("%d", &numTermos);

        int resultado = numTermos % 2 == 0 ? 0 : 1;
        printf("%d\n", resultado);
    }

    return 0;
}
