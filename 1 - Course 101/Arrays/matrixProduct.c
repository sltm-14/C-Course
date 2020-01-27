
#include <stdio.h>
#include <stdlib.h>

void clean_matrix(int (*r)[3]){
    for (int y = 0; y < 3 ; y++){
        for (int x = 0; x < 3 ; x++){
            r[y][x] = 0;
        }
    }
}

void matrix_product(int (*m)[3],int (*n)[3], int (*r)[3]){
    clean_matrix(r);
    for (int z = 0; z < 3 ; z++){
        for (int y = 0; y < 3 ; y++){
            for (int x = 0; x < 3 ; x++){
                r[y][z] =r[y][z] + (m[y][x] * n[x][z]);
            }
        }
    }
}

int main(){
    int m[3][3]={   {2,0,1},
                    {3,0,0},
                    {5,1,1}};

    int n[3][3]={   {1,0,1},
                    {1,2,1},
                    {1,1,0}};

    int result[3][3];

    matrix_product( m , n , result );

    for (int y = 0; y < 3 ; y++){
        for (int x = 0; x < 3 ; x++){
            printf("%d ",result[y][x]);
        }
        printf("\n");
    }

    return 0;
}
