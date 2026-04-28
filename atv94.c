#include <stdio.h>
int main()
{
    float h;
    int cont = 0;


    printf("Digite a altura inicial: ");
    scanf("%f", &h);

    while(h > 1){
        cont++;
        printf("Quique %d:  h = %.2f\n", cont, h);

        h = h / 2;
    }

    printf("\nQuantidade de quiques acima de 1 m: %d\n", cont);

    return 0;
}