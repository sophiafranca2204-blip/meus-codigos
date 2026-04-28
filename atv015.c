#include <stdio.h>
int main()
{
    int num, i, soma = 0;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num > 0){
        for (i = 1; i < num; i ++){
            if (num % i == 0){
                soma += i;
            }
        }

        if (soma == num){
            printf("O numero %d e perfeito.\n", num);
        } else {
            printf("O numero %d nao e perfeito.\n", num);
        }
    } else {
        printf ("Valor invalido! O numero deve ser positivo.\n");
    }
}