#include<stdio.h>
int main(){
    int a,b;
    scanf("Enter a= %d\n , b= %d \n",&a,&b);
    a=a + b - (b=a);
    printf("a=%d,b=%d",a,b);
    return 0;
}