#include <stdio.h>
#include <string.h>

int main() {
    char palavra[21];  // Tamanho máximo da palavra é 20 + 1 para o caractere nulo
    while (scanf("%s", palavra) != EOF) {
        if (strlen(palavra) >= 10) {
            printf("palavrao\n");
        } else {
            printf("palavrinha\n");
        }
    }

    return 0;
}
