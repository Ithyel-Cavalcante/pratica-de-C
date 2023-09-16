/*Ler um valor inteiro (aceitar apenas valores entre 1 e 10) e escrever a tabuada de soma de 1 a 10*/
#include <stdio.h>
#include <stdlib.h>
    int main(){
        float num1, num2, tabuada;
        printf("Escreva um numero entre 1 e 10: ");
        scanf("%f", &num1);
        if (num1 >= 10);
        {
            for (num2 = 0; num2 <= 10; num2++)
            {
                tabuada = num1 + num2;
                printf("Sua tabuada e: %2.0f + %2.0f = %2.0f \n", num1, num2, tabuada);
            }
        }
        


return 0;
    }
