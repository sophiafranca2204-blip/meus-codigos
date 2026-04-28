#include <stdio.h>
int main()
{
    int num = 100, cont = 0;

    while (num <= 200){
        if (num % 4 == 0){
            cont++;
        }
        num++;
    }

    printf("Quantidade de numeros entre 100 e 200 que sao divisiveis por 4: %d\n", cont);

    return 0;
}