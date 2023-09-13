#include<stdio.h>
int main(){
    int a=12,b=10;
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a=%d,b=%d",a,b);
    return 0;
}