#include <stdio.h>

int main (){
    int day,month,year;
    scanf("%d-%d-%d",&month,&day,&year);
    printf("%02d-%02d-%02d",day,month,year);
    return 0;
}