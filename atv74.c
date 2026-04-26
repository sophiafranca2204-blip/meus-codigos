#include <stdio.h>
int main()
{
    int N;
    int i = 1;
    int impar = 1;
    int soma = 0;

    printf("Digite N: ");
    scanf("%d", &N);

    while(i <= N){
        soma = soma + impar;
        impar = impar + 2;
        i++;
    }

    printf("A soma dos %d primeiros impares e: %d\n", N, soma);

    return 0;
}