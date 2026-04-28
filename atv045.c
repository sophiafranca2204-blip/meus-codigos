#include <stdio.h> 
int main()
{
    int base, exp;
    int result = 1;

    printf("Digite a base: ");
    scanf("%d", &base);
    printf("Digite o expoente: ");
    scanf("%d", &exp);

    for (int i = 0; i < exp; i++){
        result = result * base;
    }

    printf("Resultado: %d\n", result);

    return 0;
}