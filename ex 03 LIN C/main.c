#include <stdio.h>
 main()
{
   int n1, n2, n3;
   int soma_dos_quadrados;

    printf ("informe 3 numeros, valor da soma dos quadrados dos 3 numeros\n");
    scanf ("%d %d %d", &n1, &n2, &n3);

    soma_dos_quadrados = n1 * n1 + n2 * n2 + n3 * n3;

    printf ("soma dos quadrados dos 3 numeros e: %d\n", soma_dos_quadrados);

    return 0;
} 