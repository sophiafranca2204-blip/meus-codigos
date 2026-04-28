#include <stdio.h> 
int main()
{
    int n1 = 0, n2 = 1, prox;

    printf("%d\n%d\n", n1, n2);
    
    for( int i = 3; i <= 10; i++){
        prox = n1 + n2;
        printf("%d\n", prox);

        n1 = n2;
        n2 = prox;
    }

    return 0;
}