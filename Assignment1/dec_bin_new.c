// Purpose: To convert a decimal number to binary number
// Logic: We are taking a number as input and then checking if it is divisible by any number between 2 and n-1.
//If it is divisible by any number then it is not prime else it is prime.
// Complexity: O(n)
// Tags: decimal, binary, number, conversion
#include<stdio.h>
int main(){
    long long int number,x=0,i,y=1,j,temp,digits=0;
    scanf("%llu",&number);
    temp=number;
    while (temp>1)
    {
        ++digits;
        temp=temp/2;
    }
    for (j=0; j<digits; j++)
        {
            y=y*2;
        }
    while (y>=1)
    {   
        if ((number&y)==y)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
        y=y/2;
    }
    return 0;    
}
/*
code in python:
n=int(input('Enter a number:'))
bin=0
x=0
while n>0 :
	i=n%2
	bin=bin+i*(10**x)
	n=n//2
	x+=1
print(bin)
*/