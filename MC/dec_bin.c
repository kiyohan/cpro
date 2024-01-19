#include<stdio.h>
int main(){
    long long int number,bin=0,x=0,i ,y=1,j ;
    scanf("%llu",&number);
    while (number>0)
    {
        for (j=0; j<x; j++)
        {
            y=y*10;
        }
        
        i=number%2;
        bin=bin+i*(y);
        number=number/2;
        x=+1;        
    }
    printf("%llu",bin);
    return 0;    
}