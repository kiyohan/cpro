#include<stdio.h>
// This is a program to rotates the edges of a matrix by clockwise if last input is 1 or anticlock wise if the last input is 0
int main()
{
    int n;
    scanf("%d",&n);
    //arr[n][m] explains us that n is no of rows and m is no of coulumns
    int a[n][n];
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int arr[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if (i==0 || i==n-1 || j==0 || j==n-1)
            {
                arr[i][j]=11;
            }
            else
            {
                arr[i][j]=a[i][j];
            }
        }
    }
    int d;
    scanf("%d",&d);
    if (d==1)
    {
         for ( i = 1; i < n; i++)
         {
             arr[0][i]=a[0][i-1];
         }
         for ( i = 1; i < n ; i++)
         {
             arr[i][n-1]=a[i-1][n-1];
         }
         for ( i = n-2; i >= 0 ; i--)
         {
             arr[n-1][i]=a[n-1][i+1];
         }
         for ( i = n-2; i >= 0 ; i--)
         {
             arr[i][0]=a[i+1][0];
         }
    }
    else
    {
        for ( i =0; i < n-1; i++)
        {
            arr[0][i]=a[0][i+1];
        }
        for ( i = 0; i < n-1 ; i++)
        {
            arr[i][n-1]=a[i+1][n-1];
        }
        for ( i = n-2; i >= 0 ; i--)
        {            
            arr[n-1][i+1]=a[n-1][i];
        }
        for ( i = n-2; i >= 0 ; i--)
        {
            arr[i+1][0]=a[i][0];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}