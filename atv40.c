#include <stdio.h> 
int main()
{
    int num, anterior = 1;
    int encontrou = 0;

    while(!encontrou){
        printf("Digite um numero: ");
        scanf("%d", &num);

        if ((num %2 == 0) && (anterior % 2 == 0)){
            encontrou = 1;
        }

        anterior = num;
    }

    printf("Foram digitados dois numeros pares concecutivos!\n");

    return 0;
}