
#include <stdio.h>
#include <stdlib.h>

int main(void){
    char  date[10] ;

    int year  = 0;
    int month = 0;
    int day   = 0;


    long int days = 0;


    printf("Date: ");
    gets(date);

    year = year + ((date[6] - 48) * 1000);
    year = year + ((date[7] - 48) * 100);
    year = year + ((date[8] - 48) * 10);
    year = year + ((date[9] - 48)) ;

    month = ((date[3] - 48) * 10) + (date[4] - 48);

    day   = ((date[0] - 48) * 10) + (date[1] - 48);

    if(day > 31 || day < 1 || month > 12 || month < 1 || year < 0){
        printf("Date is not valid\n");
    }

    days = ((year - 1) * 365) + ( year/4) + ((month - 1) * 31) - ((month - 1) - month/2) + day;

    if (month > 2){
        days = days - 2;
    }

    printf("%d   ",year/4);

    printf("%ld\n", days);

    return 0;
}
