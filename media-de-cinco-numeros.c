/*escreva cinco numeros e mostre a soma e a media */
#include <stdio.h>
#include <stdlib.h>
    int main(){
      float num, soma, media;
        int i;
        for ( i = 1; i <= 5; i++)
        {
            printf("escreva o %d° numero: ", i);
            scanf("%f", &num);
            soma += num;
            media= soma/ 5;
        }
        printf("A soma total e: %2.2f \n", soma);
        printf("A media dos numeros e: %2.2f \n", media);
        
return 0;
    }