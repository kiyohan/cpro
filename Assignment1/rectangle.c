#include <stdio.h>
int main()
{
    int width, height, i, j, l, temp;
    scanf("%d %d", &height, &width);
    for (i = 1; i<=width; i++)
    {
        for (j=1; j<=height; j++)
        {
            if ((i == width || i==1) && (j==height || j == 1))
            {
                printf("o");
                if (j==height)
                    break;
            }
            else if (i == width || i == 1)
            {
                printf("-");
            }
            else if (j==height || j==1)
            {
                printf("|");
            }
            else
            {
                printf(" ");
            }   
        }
        printf("\n");
    }
    return 0;
}