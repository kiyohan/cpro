//write a program for rotating edges of a matrix by 90 degree
#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],i,j,n;
    // printf("Enter the size of the matrix\n");
    scanf("%d",&n);
    // printf("Enter the elements of the matrix\n");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            b[j][n-1-i]=a[i][j];
    // printf("The rotated matrix is\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            printf("%d ",b[i][j]);
        printf("\n");
    }
    return 0;
}