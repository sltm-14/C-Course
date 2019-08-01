#include <stdio.h>
#include <stdlib.h>


int main(void){

    int a   = 0;
    int b   = 0;
    int aux = 0;

    printf("Val A: ");
    scanf("%d", &a);

    printf("Val B: ");
    scanf("%d", &b);

    aux = a;
    a   = b;
    b   = aux;

    printf("A: %d\n",a);
    printf("B: %d\n",b);

    return 0;
}
