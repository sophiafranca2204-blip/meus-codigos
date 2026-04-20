#include <stdio.h> 
int main()
{
    int valor, i = 1, produto = 1;

    printf("Digite um valor: ");
    scanf("%d", &valor);

    while (i <= valor){
        produto = produto * i;
        i++;
    }

    printf("Produto: %d\n", produto);

    return 0;
}