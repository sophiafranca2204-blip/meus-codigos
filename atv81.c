#include <stdio.h>
int main()
{
    int valor;
    int n100 = 0, n50 = 0, n20 = 0, n10 = 0;

    printf("Digite o valor: ");
    scanf("%d", &valor);

    if(valor % 10 != 0){
        printf("Valor invalido.\n");
    }

    while(valor >= 10){
        if(valor >= 100){
            valor = valor - 100;
            n100 ++;
        }
        else if(valor >= 50){
            valor = valor - 50;
            n50++;
        }
        else if(valor >= 20){
            valor = valor - 20;
            n20++;
        }
        else{
            valor = valor - 10;
            n10++;
        }
    }

    printf("Quantidade de notas d 100: %d\n", n100);
    printf("Quantidade de notas d 50: %d\n", n50);
    printf("Quantidade de notas d 20: %d\n", n20);
    printf("Quantidade de notas d 10: %d\n", n10);

    return 0;
}