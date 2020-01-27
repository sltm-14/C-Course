


#include <stdio.h>
#include <stdlib.h>

void matrix_addition(int (*m)[3],int (*n)[3], int (*r)[3]){
    for (int y = 0; y < 3 ; y++){
        for (int x = 0; x < 3 ; x++){
            r[y][x] = m[y][x] + n[y][x];
        }
    }
}

int main(){
    int matrix_a[3][3]={{1,2,3},
                        {4,5,6},
                        {7,8,9}};

    int matrix_b[3][3]={{9,8,7},
                        {6,5,4},
                        {3,2,1}};

    int result[3][3];

    matrix_addition( matrix_a , matrix_b , result );

    for (int y = 0; y < 3 ; y++){
        for (int x = 0; x < 3 ; x++){
            printf("%d ",result[y][x]);
        }
        printf("\n");
    }

    return 0;
}
