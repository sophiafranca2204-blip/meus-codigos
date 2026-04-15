#include <stdio.h>
int main()
{
    int num, menor;
    printf("Digite um numero: ");
    scanf("%d", &num);
    menor = num;
    for (int i = 1; i < 20; i++){
        printf("digite um numero: ");
        scanf("%d", &num);
        if (num < menor){
            menor = num;
        }
    }

    printf ("O maior numero e: %d\n", menor);

    return 0;
}