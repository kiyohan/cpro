#include <stdio.h>
int main() {
    int number,a,b,r,m,n,gcf,lcm,count=0;
    scanf("%d",&number);
    for (a=1; a<=number; ++a){
        for ( b=1; b<=number; ++b){
            if (a>=b)
            {
                m=a;
                n=b;
            }
            else if (a<=b)
            {
                m=b;
                n=a;
            } 
            while (n!=0)
            {
                r=m%n;
                m=n;
                n=r;
            }
            gcf=m;
            lcm=(a*b)/gcf;
            if (lcm/gcf<=3)
              count++;
        }
    }
    printf("%d",count);
    return 0;
}