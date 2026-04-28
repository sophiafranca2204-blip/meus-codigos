#include <stdio.h>
int main()
{
    int num;
    int cont = 0;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if(num < 0){
        num = -num;
    }

    while(num > 0){
        if (num % 10 == 3){
            cont++;
        }

        num = num / 10;
    }

    printf("O digito 3 aparece %d vezes.\n", cont);

    return 0;
}