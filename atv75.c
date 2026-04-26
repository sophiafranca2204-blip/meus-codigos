#include <stdio.h>
int main()
{
    int N;
    int soma = 0;
    int i = 1;
    int triangular = 0;

    printf("Digite um numero: ");
    scanf("%d", &N);

    while(soma < N){
        soma = soma + i;
        i++;

        if(soma == N){
            triangular = 1;
        }
    }

    if(triangular == 1){
        printf("O numero e triangular.\n");
    }
    else{
        printf("O numero nao e triangular.\n");
    }

    return 0;
}