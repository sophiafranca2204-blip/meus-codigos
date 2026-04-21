#include <stdio.h>
int main()
{
    int ini, fim, passo;
    int i;

    printf("Digite o inicio: ");
    scanf("%d", &ini);

    printf("Digite o fim: ");
    scanf("%d", &fim);

    printf("Digite o passo: ");
    scanf("%d", &passo);

    for (i = ini; i <= fim; i = i + passo){
        printf("%d\n", i);
    }

    return 0;

}