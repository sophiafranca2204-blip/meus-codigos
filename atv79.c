#include <stdio.h>
int main()
{
    float nota, soma = 0;
    int cont = 0;

    printf("Digite a nota (negativa para parar): ");
    scanf("%f", &nota);

    while (nota > 0){
        soma = soma + nota;
        cont++;

        scanf("%f", &nota);
    }

    if(cont > 0){
        printf("Media das notas: %.2f\n", soma / cont);
    }
    else{
        printf("Nenhuma nota valida foi digitada.\n");
    }

    return 0;
}