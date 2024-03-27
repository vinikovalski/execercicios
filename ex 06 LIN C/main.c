#include <stdio.h>

int main() {
    float cd, vr, vd;

    printf("Informe a cotação do Dólar: ");
    scanf("%f", &cd);
    printf("Informe a quantidade de Reais a ser convertida: ");
    scanf("%f", &vr);

    vd = vr / cd;

    printf("Cotação do Dólar: R$ %f\n", cd);
    printf("Valor em Real: R$ %f\n", vr);
    printf("Valor em Dólar: $ %f\n", vd);

    return 0;
}