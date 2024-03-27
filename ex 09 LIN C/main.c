#include <stdio.h>

    int main (void){
        float soma, media, ID1, ID2, ID3, ID4;

        printf ("\n informe 4 idades");
        scanf ("%f %f %f %f", &ID1, &ID2, &ID3, &ID4);
    
        soma = ID1 + ID2 + ID3 + ID4;
        media =  soma/4;

        printf ("\n a media das 4 idades inseridas e: %f", media);

        return 0;
          
    } 

