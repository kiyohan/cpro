#include<stdio.h>
int main(){
    int a=12,b=10;
    b=(a++)+(++a);
    printf("a=%d,b=%d",a,b);
    return 0;
}