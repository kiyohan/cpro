#include<stdio.h>
int main()
{
    int power;
    scanf("%d",&power);
    int num=1;
    int modulo=1000000007;
    for (int i = 0; i < power; i++)
    {
        num*=2;
        num%=modulo;
    }
    printf("%d",num);
    
    return 0;
}