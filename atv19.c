#include <stdio.h>
int main()
{
    int num, i;

    printf("Digite um numero: ");
    scanf("%d", &num);

    printf("\ntabuada de %d:\n", num);
    
    for (i = 1; i <= 10; i++){
        printf("%d X %d = %d\n", num, i, num * i);
    }

    return 0;
}