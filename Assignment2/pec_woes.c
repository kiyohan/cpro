/*
As you all know, no student in IIIT likes PEC because they make us do some strange things. Once, they assigned x1 task to Pratham. They spread some rectangles sheets on the football ground and asked Pratham to calculate the total area covered by the rectangular sheets.

So, the task is like you are given some rectangles which are parallel to X or Y axis. Specifically, the i-th sheet covers all points (x,y)
 that satisfy ai≤x≤bi
 and ci≤y≤di
. You have to calculate the total area which is covered by the rectangular sheets.

You have to calculate the total area which is covered by the recatngular sheets.
sample input
3
0 1 0 1
0 3 0 5
5 10 0 10
sample output
65
*/
#include <stdio.h>

int main (){
    int number,area=0;
    scanf("%d",&number);
    int x1[100],x2[100],y1[100],y2[100];
    for (int i = 0; i < number; i++)
    {
        scanf("%d %d %d %d",&x1[i],&x2[i],&y1[i],&y2[i]);
    }
    
    int max_of_x2=x2[0];
    int max_of_y2=y2[0];
    for (int i = 1; i < number; ++i) {
        if (max_of_x2 < x2[i]) {
            max_of_x2 = x2[i];
        }
        if (max_of_y2 < y2[i]) {
            max_of_y2 = y2[i];
        }
    }

    int arr[max_of_x2][max_of_y2];
    for (int i = 0; i < max_of_x2; i++)
    {
        for (int j = 0; j < max_of_y2; j++)
        {
            arr[i][j]=0;
        }
    }
    
    for (int i = 0; i < max_of_x2; i++)
    {
        for (int j = 0; j < max_of_y2; j++)
        {
            for (int k = 0; k < number; k++)
            {
                if (i>=x1[k] && i<x2[k] && j>=y1[k] && j<y2[k])
                {
                    arr[i][j]=1;
                }
            }
        }
    }
    for (int i = 0; i < max_of_x2; i++)
    {
        for (int j = 0; j < max_of_y2; j++)
        {
            // printf("%d ",arr[i][j]);
            if (arr[i][j]==1)
            {
                area++;
            }
        }
        // printf("\n");
    }
    printf("%d",area);
        
    return 0;
}