/*escreva dois numeros e faça a soma dos dois*/
#include <stdio.h>
#include <stdlib.h>
    int main(){
      int num1, num2, soma;
        printf("Escreva um numero: ");
        scanf("%d", &num1);
        printf("Escreva um segundo numero: ");
        scanf("%d", &num2);

    soma= num1 + num2;
        printf("A soma de %d + %d e igual a: %d", num1, num2, soma);

return 0;
    }