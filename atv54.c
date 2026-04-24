#include <stdio.h>
int main()
{
    float salario, total = 0;

    while (total <= 50000){
        printf("Digite o salario: ");
        scanf("%f", &salario);

        total = total + salario;
    }

    printf("Total da folha: %.2f\n", total);

    return 0;
}