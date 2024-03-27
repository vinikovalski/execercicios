# include <stdio.h>

#define PI 3.14

int main(){
    float raio, altura, volume;
    
    printf("Digite o valor do raio (r) da lata cilindrica: ");
    scanf("%f", &raio);
    printf("Digite o valor da altura (h) da lata cilindrica: ");
    scanf("%f", &altura);

    volume = PI * raio * raio * altura;

    printf("O volume da lata cilindrica é: %.2f\n", volume);

    return 0;
  
}