#include <stdio.h>
int main()
{
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    while(num > 0){
        printf("%d\n", num);
        num = num / 10;
    }

    printf("0\n");

    return 0;
}