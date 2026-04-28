#include <stdio.h>
int main()
{
    int n, num, cont = 0;

    printf("Quantos numeros?: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        printf("Numero %d ", i);
        scanf("%d", &num);

        if((num % 2 == 0) && (num % 10 == 0)){
            cont++;
        }
    }

    printf("Quantidade de numeros divisiveis por 10 e que terminam em 0: %d\n", cont);

    return 0;
}