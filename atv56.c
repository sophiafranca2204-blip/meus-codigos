#include <stdio.h>
int main()
{
    int num, i, primo = 0;

    while (primo == 0 ){
        printf("Digite um numero: ");
        scanf("%d", &num);

        if(num <= 1){
            primo = 0;
        }
        else{
            primo = 1;

            for (i = 2; i < num; i++){
                if(num % i == 0){
                    primo = 0;
                }
            }
        }
    }

    printf("Numero primo encontrado: %d\n", num);

    return 0;
}