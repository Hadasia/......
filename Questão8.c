#include <stdio.h>

int main() {
    int numCasos;
    scanf("%d", &numCasos);

    while (numCasos--) {
        int anos;
        scanf("%d", &anos);

        if (anos == 0) {
            printf("2015\n");
        } else if (anos > 0) {
            printf("%d D.C.\n", 2015 - anos);
        } else {
            printf("%d A.C.\n", -anos + 1);
        }
    }

    return 0;
}
