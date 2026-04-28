#include <stdio.h>
int main()
{
    int num, i = 0;


    printf("Digite um numero: ");
    scanf("%d", &num);
    
    while(i < num){
        if (i % 2 == 0){
            printf("%d\n", i);
        }
        i++;
    }

    return 0;
}