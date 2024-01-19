#include<stdio.h>
int reverse(Number){
        int rev=0,rem;
    while (Number!=0)
    {
        rem=Number%10;
        rev=rev*10+rem;
        Number=Number/10;
    }
    return rev;
    }   
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",reverse(n));
}