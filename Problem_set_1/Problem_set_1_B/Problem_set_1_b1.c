#include <stdio.h>
#include <stdlib.h>

int factorial(int n){
    int factorial = 1;

    for (int x = 1; x <= n; x++){
        factorial = factorial * x;
    }

    return factorial;
}

int main(void){
    int n = 0;
    int p = 0;

    printf("N: ");
    scanf("%d", &n);

    printf("P: ");
    scanf("%d", &p);

    printf("Combinations: %d",(factorial(n)/((factorial(p)*(factorial(n-p))))));

    return 0;
}
