#include <stdio.h> 
int main()
{
    int cont = 0;

    for (int i = 0; i < 50; i++){
        if (i % 2 == 0){
            cont ++;
        }
    }

    printf("Quantidades de numeros multiplos de 2 e menores que 50: %d\n", cont);

    return 0;
}