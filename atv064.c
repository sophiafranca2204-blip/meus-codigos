#include <stdio.h>
int main()
{
    int num, original, digito, soma = 0;
    int cont = 0;
    int temp;

    printf("Digite um numero: ");
    scanf("%d", &num);

    original = num;
    temp = num;

    while(temp != 0){
        temp = temp / 10;
        cont++;
    }

    temp = num;

    while (temp != 0){
        digito = temp % 10;

        int potencia = 1;

        for(int i = 0; i < cont; i++){
            potencia = potencia * digito;
        }

        soma = soma + potencia;
        temp = temp / 10;
    }

    if (soma == original){
        printf("Numero Armstrong.\n");
    }
    else{
        printf("Numero nao Armstrong.\n");
    }

    return 0;
}