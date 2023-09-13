/*Mitansh is world’s best investor. Whatever the amount he has today, it doubles on the next day.
Initially he starts, with amount zero. Each day in the morning, he can choose to invest x more in addition to his
previous amount y . And on next day, his total amount becomes 2(x+y) .
However, he wants to get exactly z on some day.
What is the minimum amount of money he needs to invest, in order to get z at some moment*/

#include <stdio.h>
#include<math.h>

int main (){
    int desired_amount , flag =0;
    int no_of_invest=0,temp;
    scanf("%d",&desired_amount);
    if ((float)log2((double)desired_amount) / (float)1 == (float)0)
    {
        printf("1");
        flag=21;
    }
    temp=desired_amount;
    
    while (temp>0)
    {
        if (flag==21)
        {
            break;
        }
        if (temp%2 == 0)
        {
            
            if ((temp/2)%2 == 0)
            {
                temp=temp/2;
            }
            else
            {
                temp=(temp/2)-1;
                no_of_invest++;   
            }
        }
        else
        {
            temp=temp/2;
            no_of_invest++;
        }   
    }
    if (flag==0)
    {
        printf("%d",no_of_invest);
    }
    
    return 0;
}