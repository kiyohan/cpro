#include<stdio.h>
int main(){
    int rev=0,rem,n;
    printf("Enter the number:");
    scanf("%d",&n);
    while (n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    printf("The reversed number is %d",rev);
    return 0;
}