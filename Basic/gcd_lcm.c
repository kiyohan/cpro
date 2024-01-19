#include<stdio.h>
int main(){
    int a,b,gcf,lcm,m,n,r;
    scanf("%d %d",&a,&b);
    if (a<b)
        {
            b=a+b;
            a=b-a;
            b=b-a;
        }
    m=a;
    n=b;
    while (n!=0)
        {
            r=m%n;
            m=n;
            n=r;
        }
    gcf=m;
    lcm=(a*b)/gcf;
    printf("%d,%d",gcf,lcm);
    return 0;
}
            
