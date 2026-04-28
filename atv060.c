#include <stdio.h>
int main()
{
    int num, cont = 0, impar = 1;

    printf("Digite um numero: ");
    scanf("%d", &num);

    while(num >= impar){
        num = num - impar;
        impar = impar + 2;
        cont++;
    }

    printf("Raiz quadrada inteira: %d\n", cont);

    return 0;
}