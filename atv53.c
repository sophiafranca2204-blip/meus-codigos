#include <stdio.h>
int main()
{
    int idade, i;
    int cont = 0;

    for (i = 1; i <= 5; i++){
        printf("Digite a idade %d: ", i);
        scanf("%d", &idade);

        if (idade > 60){
            cont++;
        }
    }

    printf("Quantidade de pessoas com mais de 60 anos: %d\n", cont);

    return 0;
}