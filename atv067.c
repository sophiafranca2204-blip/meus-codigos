#include <stdio.h>
int main()
{
    int n;
    float nota, peso;
    float soma = 0; 
    float somaPesos = 0;

    printf("Quantidade de provas?: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        printf("Nota %d: ", i);
        scanf("%f", &nota);

        printf("peso %d: ", i);
        scanf("%f", &peso);

        soma = soma + (nota * peso);
        somaPesos = somaPesos + peso;
    }

    if(somaPesos != 0){
        float media = soma / somaPesos;
        printf("Media ponderada: %.2f\n", media);
    }
    else{
        printf("Erro!: soma dos pesos e 0\n");
    }

    return 0;

}