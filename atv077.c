#include <stdio.h>
int main()
{
    int N;
    int potencia = 1;

    printf("Digite um numero: ");
    scanf("%d", &N);

    if(N <= 0){
        potencia = 0;
    }
    else{
        while((N > 1) && (potencia == 1)){
            if(N % 2 != 0){
                potencia = 0;
            }

            N = N / 2;
        }
    }

    if(potencia == 1){
        printf("O numero e potencia de 2.\n");
    }
    else{
        printf("O numero NAO e potencia de 2.\n");
    }

    return 0;
}