#include <stdio.h>
int main()
{
    int num;
    int contador = 0;

    printf("Digite numeros (0 para parar):  ");
    scanf("%d", &num);

    while (num != 0){
        if (num < 0){
            contador++;
        }
        
        printf("Digite outro numero(0 para parar):  ");
        scanf("%d", &num);
    }

    printf("Voce ditou %d numeros negativos:  ", contador);
    
    return 0;
}