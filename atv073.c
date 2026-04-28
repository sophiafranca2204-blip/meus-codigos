#include <stdio.h>
int main()
{
    int N;
    int i = 1;
    int soma = 0;
    int fat = 1;

    printf("Digite N: ");
    scanf("%d", &N);

    while(i <= N){
        fat = fat * i;
        soma = soma + fat;
        i++;
    }

    printf("Soma dos fatoriais de 1 a %d: %d\n", N, soma);

    return 0;
}