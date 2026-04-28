#include <stdio.h>
int main()
{
    int num;
    int soma = 0;

    printf("Digite numeros (0 para parar):\n");
    scanf("%d", &num);

    while (num != 0);{
        soma = soma + num;
        scanf("%d", &num);
    }
    
    printf("soma = %d\n", soma);

    return 0;

}