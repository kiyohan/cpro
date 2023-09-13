#include <stdio.h>
int main()
{
    int row, col, limit;
    printf("Enter The Number Of Rows: \n");
    scanf("%d", &row);
    for (col = row; col >= 1; col--)
    {
        for (limit = 1; limit <= col; limit++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
