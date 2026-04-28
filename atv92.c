#include <stdio.h>
int main()
{
    float media = 0;
    float notas;
    float soma = 0;
    int i = 0;

    while((i < 4) && (media < 7)){
        printf("Digite a nota %d: ", i + 1 );
        scanf("%f", &notas);

        soma = soma + notas;
        i++;

        media = soma / i;
        
    }

    printf("\nMedia final: %.2f\n", media);
    printf("Quantidade de provas: %d\n", i);

    return 0;
}