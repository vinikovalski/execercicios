# include <stdio.h>
int main(){
   int n1, n2, n3;
   int soma, quadrado_da_soma;

    printf ("informe 3 numeros\n");
    scanf ("%d %d %d", &n1, &n2, &n3);

    soma = n1 + n2 + n3;
    quadrado_da_soma = soma * soma;

    printf("O quadrado da soma dos três valores é: %d\n", quadrado_da_soma);

    return 0;

}