#include <stdio.h>
int main()
{
    int cont = 0;
    float num;

    printf("Digite um numero: ");
    scanf("%f", & num);

    while(num >= 1){
        num = num / 2;
        cont++;
    }

    printf("Quantidade de divisores: %d\n", cont);

    return 0;
}