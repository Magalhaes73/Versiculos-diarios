#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    double soma = 0.0;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    for (i = 0; i <= n; i++) {
        soma += pow(2, -i);   // calcula 2^(-i) e soma
    }

    printf("Soma = %.6lf\n", soma);

    return 0;
}