#include <stdio.h>
int main()
{
    int num, original, invertido = 0, resto;

    printf("Digite um numero: ");
    scanf("%d", &num);

    original = num;

    while(num !=0){
        resto = num % 10;
        invertido = invertido * 10 + resto;
        num = num / 10;
    }

    if (original == invertido){
        printf("O numero e palindromo.\n");
    }
    else{
        printf("O numero nao e palindromo.\n");
    }

    return 0;
}