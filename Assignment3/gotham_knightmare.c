#include<stdio.h>

// void paths(int *arr,int n,int m){
//      /**/

// }


int main()
{
    int p,q,k;
    scanf("%d %d %d",&p,&q,&k);
    int board[p+1][q+1];
    for (int i = 0; i <= p; i++)
    {
        for (int j = 0; j <= q; j++)
        {
            board[i][j]=0;
        }
    }
    for (int i = 0; i <= p; i++)
    {
        for (int j = 0; j <= q; j++)
        {
            printf("%d ",board[i][j]);
        }
    }
    // int board[1001][1001]={0};

    // printf("%d %d %d",p,q,k);
    // int a,b;
    // for (int i = 0; i < k; i++){
    //     scanf("%d %d",&a,&b);
    //     board[a][b]=-1;
    // }
    // for (int i = 0; i <= p; i++)
    // {
    //     for (int i = 0; i <= q; i++){
    //     board[i][0]=-1;
    //     board[0][i]=-1;
    // }
       
    // }
    
    
    
      
    return 0;
}