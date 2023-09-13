/*Madhav is a very lazy boy. He doesn’t like to do sports. So our PEC instructor has assigned him a task which he should complete in an hour.
There are n doors which are all 0d initially. Madhav should perform n iterations.
In the ith iteration he starts from ith door and goes to each multiple of i untill n
i.e. (i,2∗i,3∗i…..) and toggles the door.
Here toggles means if the door is open, he will 0 it and if it is 0d he will open it.
After all n iterations he has to tell which all doors are still opened.
As Madhav is smart, he tries to solve this task using some program. Can you help him with this task ?*/
/*  input format
    4 
    output format
    1 4
*/

#include<stdio.h>
int main()
{
    long long int number,i,j;
    scanf("%lld",&number);
    int arr[number];
    for ( i = 0; i < number; i++)
    {
        arr[i]=1;
    }
    for ( i = 1; i < number+1; i++)
    {
        for (j = i; j <= number ; j=j+i)
        {
            if (arr[j-1]==1)
            {
                arr[j-1]=0;
            }
            else
            {
                arr[j-1]=1;
            }
            
        }   
    }
    for ( i = 0; i < number ; i++)
    {
        if (arr[i]==0)
        {
            printf("%lld ",i+1);
        }  
    }
    return 0;
}