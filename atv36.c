#include <stdio.h>
int main()
{
    int num, cont = 0;

    printf("Digite um numero(0 para parar): ");
    scanf("%d", &num);

    while (num != 0){

        if (num % 2 != 0){
            cont++;
        }

        printf("Digite outro numero (0 para parar): ");
        scanf("%d", &num);
    }

    printf("Quantidade de numeros impares: %d\n", cont);

    return 0;
}