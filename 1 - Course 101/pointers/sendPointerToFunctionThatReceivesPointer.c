



#include <stdio.h>
#include <stdlib.h>

void function(int * x,int num){
    printf("Working...\n\n");

    printf("X: %d\n", *x);
    printf("Num: %d\n\n",num);

    *x = (*x) + num;

    printf("X + Num = %d\n", *x);
}

int main(){
    int * a;
    int val;

    val = 15;
    *a = 10;

    function(a,val);

    return 0;
}
