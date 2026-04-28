#include <stdio.h>
int main()
{
    int num, i = 2;

    printf("Digite um numero: ");
    scanf("%d", &num);

    printf("Fatores primos: ");

    while (num > 1){
        if (num % i == 0){
            printf("%d ", i);
            num = num / i;
        }
        else {
            i++;
        }
    }

    return 0;
}