# include <stdio.h>
int main()
{
    int id, dobro, triplo;

    printf("Informe a sua idade:");
    scanf("%d", &id);

    dobro = id * 2;
    triplo = id * 3;

    printf("Dobro da sua idade: %d\n", dobro);
    printf("Triplo da sua idade: %d\n", triplo);

    return 0;

}

