#include <stdio.h>
int main()
{
    int andares = 0;
    int ciclos = 0;

    while(andares < 20){
        ciclos++;

        andares = andares + 3;
        printf("Ciclo %d: subiu para o andar %d\n", ciclos, andares);

        if(andares < 20){
            andares = andares - 1;
            printf("Ciclo %d: desceu para %d\n", ciclos, andares);
        }
    }
    printf("\nTotal de ciclos: %d\n", ciclos);

    return 0;
}