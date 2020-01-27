


#include <stdio.h>
#include <stdlib.h>

void function(char * word){
    printf("Word: %s",word);
}

int main(){
    char word[] = "Hello World!";

    function(word);

    return 0;
}
