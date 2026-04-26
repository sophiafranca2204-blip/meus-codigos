#include <stdio.h>
int main()
{
    int x, n;

    printf("Digite o numero base: ");
    scanf("%d", &x);

    printf("Quantos multiplos?: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        printf("%d\n", x * i);
    }

    return 0;
}