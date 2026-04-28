#include <stdio.h>
int main()
{
    float populacao = 1500;
    float ini = populacao;
    int anos = 0;

    printf("Digite a populacao inicial: ");
    scanf("%f", &populacao);

    ini = populacao;

    while (populacao < ini *1.10 ){
        populacao = populacao * 1.10;
        anos++;
    }

    printf("Tempo para crescer 10%%: %d ano(s)\n", anos);

    populacao = ini;
    anos = 0;

    while (populacao < ini * 2){
        populacao = populacao * 1.10;
        anos++;
    }

    printf("Tempo para dobrar: %d ano(s)\n", anos);

    return 0;
}