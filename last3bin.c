#include<stdio.h>
int main(){
    int number,bin=0,x=0,i ,y=1,j,z=3,temp,last=0,l3=0 ;
    printf("Enter a number:");
    scanf("%d",&number);
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
    printf("%d\n",bin);
    while (z!=0)
    {
        temp=bin%10;
        last=last*10+temp;
        bin=bin/10;
        z--;
    }
    z=3;
    while (z!=0)
    {
        temp=last%10;
        l3=l3*10+temp;
        last=last/10;
        z--;
    }
    printf("%03d\n",l3);
    return 0;    
}