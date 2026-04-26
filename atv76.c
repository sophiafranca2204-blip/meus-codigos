#include <stdio.h>
int main()
{
    int num1, num2;
    int soma = 0;

    printf("Digite dois numeros: ");
    scanf("%d%d", &num1, &num2);

    if(num1 > num2){
        num1 = num1 + num2;
        num2 = num1 - num2;
        num1 = num1 - num2;
    }

    while(num1 <= num2){
        soma = soma + num1;
        num1++;
    }

    printf("Soma dos numeros: %d\n", soma);

    return 0;
}