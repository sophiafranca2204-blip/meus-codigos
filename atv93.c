#include <stdio.h>
int main()
{
    float salario = 1000;
    float ini = salario;
    int anos = 0;

    while(salario < 2 * ini){
        salario = salario * 1.05;
        anos++;
    }

    printf("Anos para dobrar: %d\n", anos);

    return 0;
}