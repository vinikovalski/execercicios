#include <stdio.h>

void main() {

int a,b;
int aux;

printf("In digite a primeira variavel:\n");
scanf("%d", &a);
printf("digite a segunda variavel:\n");
scanf("%d", &b);
printf("a:%d b:%d", a,b);

aux=b;
b=a;
a=aux;

printf("In os valores invertidos são in:\n");
printf("%d", a);
printf("%d", b);


}  
