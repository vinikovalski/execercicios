# include <stdio.h>
int main()
{
   float distancia, LU;

    printf ("distancia que automovel ira percorrer:");
    scanf ("%f", &distancia);

    LU = distancia / 12;

    printf("quantidade de combustivel a ser usada: %f\n", LU);

    return 0;
}