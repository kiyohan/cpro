//write a code for identifying prime numbers
#include<stdio.h>
int main(){
    int n,i,flag=0;
    scanf("%d",&n);
    for (i=2; i<n; i++)
    {
        if (n%i==0)
        {
            flag=1;
            break;
        }
    }
    if (flag==0)
    {
        printf("prime");
    }
    else
    {
        printf("not prime");
    }
    return 0;
}
