#include <stdio.h>
int main()
{
    float media;
    int idade, i = 0, soma = 0;

    printf("Digite uma idade: ");
    scanf("%d", &idade);

    while (idade >= 0){
        soma = soma + idade;
        i++;

        printf("digite outra idade: ");
        scanf("%d", &idade);
    }
    
    if (i > 0){
        media = (float)soma / i;
        printf("Media das idades: %2.f\n", media);
    }
    else {
        printf("Nenhuma idade valida foi digitada.\n");
    }

    return 0;


}