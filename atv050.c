#include <stdio.h> 
int main()
{
    int num, concec = 0;

    while (concec < 2){
        printf("Digite um numero: ");
        scanf("%d", &num);

        if (num % 5 == 0){
            concec++;
        }
        else{
            concec = 0;
        }
    }

    printf("Foram digitados 2 multiplos de 5 concecutivos!\n");

    return 0;
}