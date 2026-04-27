#include <stdio.h>
int main()
{
    int cent;
    int m100 = 0; 
    int m50 = 0;
    int m25 = 0;
    int m10 = 0;
    int m5 = 0;

    printf("Digite o valor do troco em centavos: ");
    scanf("%d", &cent);

    if (cent % 5 != 0){
        printf("Erro! Nao da pra dar troco com essas moedas, seu burro.\n");
        return 0;
    }

    while(cent >= 5){
        if (cent >= 100){
            cent = cent - 100;
            m100++;
        }
         else if (cent >= 50){
            cent = cent - 50;
            m50++;
        }
        else if (cent >= 25){
            cent = cent - 25;
            m25++;
        }
        else if (cent >= 10){
            cent = cent - 10;
            m10++;
        }
        else{
            cent = cent - 5;
            m5++;
        }
    }

    printf("Quantidade de moedas d 1.00: %d\n", m100);
    printf("Quantidade de moedas d 0.50: %d\n", m50);
    printf("Quantidade de moedas d 0.25: %d\n", m25);
    printf("Quantidade de moedas d 0.10: %d\n", m10);
    printf("Quantidade de moedas d 0.05: %d\n", m5);

        return 0;
    
}