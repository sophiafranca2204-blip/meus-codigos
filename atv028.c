#include <stdio.h>
int main()
{
    float altura, media, soma = 0;

    for (int i = 1; i <= 10; i++){
        printf("Digite a altura: ", i);
        scanf("%f", &altura);
        
        soma = soma + altura;
    }

    media = soma / 10;

    printf("A media das alturas e: %2.f\n", media);

    return 0;
}