#include <stdio.h>
int main()
{
    int num, i, ehprimo = 0;

    while (ehprimo == 0 ){
        printf("Digite um numero: ");
        scanf("%d", &num);

        if(num <= 1){
            ehprimo = 0;
        }
        else{
            ehprimo = 1;

            for (i = 2; i < num; i++){
                if(num % i == 0){
                    ehprimo = 0;
                }
            }
        }
    }

    printf("Numero primo encontrado: %d\n", num);

    return 0;
}