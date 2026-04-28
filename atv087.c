#include <stdio.h>
int main()
{
    float div = 1000;
    int meses = 0;
    float pagamento;

    while (div > 0){
        div = div * 1.02;

        if (div < 150){
            pagamento = div;
        }
        else{
            pagamento = 150;
        }


        div = div - pagamento;
        meses++;

        printf("Mes %d: pagamento = R$ %.2f. Resto = R$ %.2f\n", meses, pagamento, div);
    }

    printf("Total de meses para quitar: %d\n", meses);

    return 0;
}