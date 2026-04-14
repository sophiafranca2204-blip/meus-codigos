#include <stdio.h>
int main()
{
    float media, nota, soma = 0;
    int i = 0;

    printf("Digite uma nota: ");
    scanf("%f", &nota);

    while ((nota >= 0) && (nota <= 10)){
        soma += nota;
        i++;

        printf("Digite outra nota: ");
        scanf("%f", &nota);
    }
    
    if (i > 0){
        media = soma  / i;
        printf("Media das notas: %2.f\n", media);
    }
    else {
        printf("Nenhuma nota valida foi digitada.\n");
    }

    return 0;


}