#include <stdio.h> 
int main()
{
    float divida, parcela;
    int meses = 0;

    printf("Digite o valor da divida: ");
    scanf("%f", &divida);

    do {
        printf("Digite o valor da parcela mensal: ");
        scanf("%f", &parcela);

        if (parcela <= 0){
            printf("Valor invalido! A parcela deve ser maior que 0.\n");
        }
    }
    while (parcela  <= 0);

    while(divida > 0){
        divida -= parcela;
        meses++;
    }

    printf("Voce levara %d meses para pagar a divida.\n", meses);

    return 0;
}