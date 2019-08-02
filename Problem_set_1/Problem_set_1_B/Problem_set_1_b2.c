#include <stdio.h>
#include <stdlib.h>


float expo( float x , float n );
float power( float x , float n );
float factorial( float n );



int main(void){
    float x = 0;
    while(1){
        printf("X: ");
        scanf("%f", &x);

        printf("Expo: %f\n",expo(x,20));
    }
    return 0;
}

float expo( float x , float n ){

    if (n >= 1){
        return (power(x,n)/factorial(n) + expo(x,n-1));
    }
    else{
        return 1;
    }
}

float factorial(float n){
    float factorial = 1;

    for (float x = 1; x <= n; x++){
        factorial = factorial * x;
    }

    return factorial;
}

float power(float x, float n){
    float power = 1;

    for (float y = 1; y <= n; y++){
        power = power * x;
    }

    return power;
}
