#include <stdio.h>

int main() {
    int n1, n2;
    int divisao, soma, subtracao, multiplicacao;

    printf("Digite dois numeros:\n ");
    scanf ("%d %d", &n1, &n2);

    soma = n1 + n2;
    subtracao = n1 - n2;
    multiplicacao = n1 * n2;
    divisao = n1 / n2;

    printf("%d + %d = %d\n", n1, n2, soma);
    printf("%d - %d = %d\n", n1, n2, subtracao);
    printf("%d x %d = %d\n", n1, n2, multiplicacao);
    printf("%d : %d = %d\n", n1, n2, divisao);

    return 0;
}
