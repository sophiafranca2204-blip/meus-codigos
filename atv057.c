#include <stdio.h>
int main()
{
    int num, i;
    int cont = 0;

    for(i = 1; i <= 10; i++){
        printf("Digite o numero: ");
        scanf("%d", &num);

        if ((num >= 10) && (num <=100)){
            cont++;
        }
    }

    printf("Quantidade de numeros entre 10 e 100: %d\n", cont);

    return 0;

    
}