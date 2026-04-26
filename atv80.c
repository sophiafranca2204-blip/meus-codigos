#include <stdio.h>
int main()
{
    int idade;

    printf("Digite idades (maior que 120 para parar):\n");
    scanf("%d", &idade);

    while (idade <= 120){
        printf("Idade valida: %d\n", idade);
        scanf("%d", &idade);
    }

    printf("Encerrado: uma idade invalida foi digitada.\n");

    return 0;
}