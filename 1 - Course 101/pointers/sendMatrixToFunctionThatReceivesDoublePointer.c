
#include <stdio.h>
#include <stdlib.h>
void function(int (*matrix)[3]){

    for( int y = 0 ; y < 3 ; y++ ){
        for( int x = 0 ; x < 3 ; x++ ){
            printf("%d ",*(*(matrix + y) + x));
        }
        printf("\n");
    }

}

int main(){
    int matrix[3][3]={{1,2,3},
                    {4,5,6},
                    {7,8,9}};

    function(matrix);

    return 0;
}

