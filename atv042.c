#include <stdio.h>
int main()
{
    int num = 0, cont = 0, soma = 0;


    printf("Digite um numero: ");
    scanf("%d", &num);

    while (num >= 0){
        soma = soma + num;
        
        cont++;

        printf("Digite um numero: ");
        scanf("%d", &num);
    }

    if (cont > 0 ){
        float media = (float)soma / cont;
        printf("Media: %.2f\n", media);
    }
    else{
        printf("Nenhum valor valido foi digitado.\n");
    }

    return 0;
}