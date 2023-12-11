#include <stdio.h>

int main() {
    int numProdutos;
    scanf("%d", &numProdutos);

    double totalCompra = 0.0;

    while (numProdutos--) {
        int codigoProduto, quantidade;
        scanf("%d %d", &codigoProduto, &quantidade);

        double valorProduto = 0.0;

        switch (codigoProduto) {
            case 1001:
                valorProduto = 1.50;
                break;
            case 1002:
                valorProduto = 2.50;
                break;
            case 1003:
                valorProduto = 3.50;
                break;
            case 1004:
                valorProduto = 4.50;
                break;
            case 1005:
                valorProduto = 5.50;
                break;
            default:
                printf("Código de produto inválido.\n");
                return 1; // Saída com erro
        }

        totalCompra += valorProduto * quantidade;
    }

    printf("%.2lf\n", totalCompra);

    return 0;
}
