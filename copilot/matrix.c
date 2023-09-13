//write a function that makes a marrix using the input of the user
//and then prints it out
//input: number of rows and columns
//output: matrix
#include <stdio.h>
void matrix(int rows, int columns)
{
    int i, j;
    int matrix[rows][columns];
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < columns; j++)
        {
            printf("Enter a number for row %d, column %d: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Your matrix is:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < columns; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
#include <stdio.h>
int main (){
    int rows, columns;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &columns);
    matrix(rows, columns);
    return 0;
}