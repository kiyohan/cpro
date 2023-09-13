// Purpose: To print the fibonacci series upto n terms.
// Fibonacci Series
// Name: Akmal Ali
// Date: 10/07/2021
// Time Complexity: O(n)
// Space Complexity: O(1)
// Logic: We are taking a number as input and then checking if it is divisible by any number between 2 and n-1.
#include <stdio.h>
int main (){
    int n,x,y,z;
    scanf("%d %d %d",&n,&x,&y);
    while (1)
    {
        if (n==1){
            printf("%d",x);
            break;
        }
        else if(n==2){
            printf("%d %d",x,y);
            break;
        }
        else if (n>=2){
            printf("%d %d ",x,y);
            n-=2;
        }
        while (n>0)
        {
            z=x+y;
            printf("%d ",z);
            x=y;
            y=z;
            --n;
        }
        break; 
    }
    return 0;
}