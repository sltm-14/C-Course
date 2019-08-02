
#include <stdio.h>
#include <stdlib.h>

int main(void){
    char  str[25];

    while(1){
        printf("\nEnter string: ");
        gets(str);
        fflush(stdin);

        if(strnlen(str) > 5){
            printf("%.5s", &str[5]);
        }
        else{
            printf("%s", str);
        }
    }

    return 0;
}

// printf("%*.*s",20,,5,2,"hello there");
