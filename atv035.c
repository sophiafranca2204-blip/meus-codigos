#include <stdio.h>
int main()
{
    float num, media = 0, soma = 0;
    int cont = 0;

    while (media < 7){
        printf("Digite um numero: ");
        scanf("%f", &num);

        soma += num;
        cont++;

        media = soma / cont;
    }

    printf("Media final: %.2f\n", media);

    return 0;
}