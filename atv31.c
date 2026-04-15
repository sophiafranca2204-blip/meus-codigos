#include <stdio.h>
int main()
{
    int num, maior;
    printf("Digite um numero: ");
    scanf("%d", &num);
    maior = num;
    for (int i = 1; i < 20; i++){
        printf("digite um numero: ");
        scanf("%d", &num);
        if (num > maior){
            maior = num;
        }
    }

    printf ("O maior numero e: %d\n", maior);

    return 0;
}