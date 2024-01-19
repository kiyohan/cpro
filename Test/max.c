#include <stdio.h>
#include<stdlib.h>


int main (){
    int a,b;
    scanf("%d %d",&a,&b);
    int max,min;
    printf("max = %d\n", ((a+b) + abs(a-b))/2);
    printf("min = %d", ((a+b) - abs(a-b))/2);
    return 0; 
}