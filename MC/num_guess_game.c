#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main (){
    int number,guess,nguess=1;
    srand(time(0));
    number=rand()%100 + 1;
    do
    {
        printf("Guess the number in the range 1 to 100:\n");
        scanf("%d",&guess);
        if (guess<number)
        {
            printf("Higher number please!\n");
        }
        else if (guess>number)
        {
            printf("Lower number please!\n");
        }
        else
        {
            printf("Congrats you have guessed the number in %d moves\n",nguess);
        }
        nguess++; 
    } while (guess!=number); 
    return 0;
}