#include<stdio.h>
int main(){
    int rev=0,rem,n,a;
    scanf("%d",&n);
    a=n;
    while (n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if (rev==a)
    {
        printf("palindrome");
    }
    else
    {
        printf("not palindrome");
    }
    
    return 0;
}