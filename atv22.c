#include <stdio.h>
int main()
{
    float num, soma = 0, media;
    int contador = 0;

    printf("Digite numeros (0 para parar):\n");

    scanf("%f", &num);

    while (num != 0){
        soma += num;
        contador++;

        scanf("%f", &num);
    }

    if (contador > 0){
        media = soma / contador;
        printf("Media = %.2f\n", media);
    } else {
        printf("Nenhum numero valido foi digitado.\n");
    }
    
    return 0;
}