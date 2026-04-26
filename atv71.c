#include <stdio.h>
int main()
{
    int num, n, cont = 0;

    printf("Quantos numeros?: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("Digite um numero: ");
        scanf("%d", &num);

        if (((num >= 10) && (num <=99)) || ((num <= - 10) && (num >= -99))){
            cont++;
        } 
    }

    printf("Quantidade de numeros com dois algarismos: %d\n", cont);

    return 0;
}