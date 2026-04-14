#include <stdio.h>
int main()
{
    int num, i = 1, contador = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf ("%d", &num);
    
    if (num > 0){
        while (i <= num){
            if (num % i == 0){
                contador ++;
            }
            i ++;
        }

        if (contador == 2){
            printf("O numero %d e primo.\n", num);
        } else {
            printf("O numero %d nao e primo.\n", num);
        }
    } else {
        printf("Valor invalido! O numero deve ser positivo.\n");
    }

    return 0;
}