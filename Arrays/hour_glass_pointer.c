#include <stdio.h>
#include <stdlib.h>

int max_val(int  arr_hg[16]){
    int max = arr_hg[0];

    for(int x = 1; x < 16; x++){
        if(arr_hg[x]>max){
            max = arr_hg[x];
        }
    }

    return max;
}

int hour_glass(int ** matrix, int n){


    int i = 0;
    int  arr_hg[16];

    for ( int y = 0 ; y < (n-2) ; y++ ){
        for ( int x = 0 ; x < (n-2) ; x++ ){
            arr_hg[i] = matrix[y][x]   + matrix[y][x+1]   + matrix[y][x+2] +
                                         matrix[y+1][x+1] +
                        matrix[y+2][x] + matrix[y+2][x+1] + matrix[y+2][x+2];
            i++;
        }
    }
    return max_val(arr_hg);

}


int main(){
    int  arr[36] = {-9,-9,-9, 1, 1, 1,
                     0,-9, 0, 4, 3, 2,
                    -9,-9,-9, 1, 2, 3,
                     0, 0, 8, 6, 6, 0,
                     0, 0, 0,-2, 0, 0,
                     0, 0, 1, 2, 4, 0 };

    int ** ptr = malloc(6 * sizeof(int*));
    int n = 6;
    int i = 0;

    for ( int y = 0 ; y < n ; y++ ){
        *(ptr + y) = malloc(6 * (sizeof(int)));
        for ( int x = 0 ; x < n ; x++ ){
             *(*(ptr + y) + x)  = arr[i];
             printf("%d ",ptr[y][x]);
             i++;
        }
        printf("\n");
    }

    printf("\n");


    printf("\nResult: %d\n",hour_glass(ptr,6));

    return 0;
}
