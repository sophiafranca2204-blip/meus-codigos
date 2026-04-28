#include <stdio.h>
int main()
{
    int num, i = 1, contador = 0;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);

    if (num > 0 ){
        while (i <= num){
            if (num % i == 0){
                contador ++;
            }
            i ++;
        }

        printf ("O numero %d tem %d divisores.\n", num, contador);    
    } else {
        printf("Valor invalido! O numero deve ser positivo.\n");
    }

    return 0;
}