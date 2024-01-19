#include<stdio.h>



int main()
{
    int p,q,k;
    scanf("%d %d %d",&p,&q,&k);
    int board[p+1][q+1];
    for (int i = 0; i <=p; i++)
    {
        for (int j = 0; j <=q; j++)
        {
            board[i][j]=0;
        }
        
    }
    int modulo=1000000007;
    
    // printf("%d %d %d",p,q,k);
    int a,b;
    for (int i = 0; i < k; i++){
        scanf("%d %d",&a,&b);
        board[a][b]=-1;
    }
    for (int i = 0; i <= p; i++)
    {
        board[i][0]=-1;
        for (int j = 0; j <= q; j++){
            board[0][j]=-1;
            board[1][j]=1;
        }
       
    }
    // paths(board,p,q);
    int n=p;
    int m=q;
    for (int i = 1; i<=n ; i++)
     {
        for (int j = 1; j<=m ; j++)
        {
            if (board[i][j]!=-1 && board[i][j]!=0)
            {
                if (board[i+1][j+2]!=-1 && i+1>=1 && i+1<=n && j+2>=1 && j+2<=m)
                {
                    board[i+1][j+2]+=board[i][j]%modulo;
                    // board[i+1][j+2]=board[i+1][j+2]%modulo;
                }
                if (board[i+1][j-2]!=-1 && i+1>=1 && i+1<=n && j-2>=1 && j-2<=m)
                {
                    board[i+1][j-2]+=board[i][j]%modulo;
                    // board[i+1][j+2]=board[i+1][j+2]%modulo;

                }
                if (board[i+2][j+1]!=-1 && i+2>=1 && i+2<=n && j+1>=1 && j+1<=m)
                {
                    board[i+2][j+1]+=board[i][j]%modulo;
                    // board[i+1][j+2]=board[i+1][j+2]%modulo;

                }
                if (board[i+2][j-1]!=-1 && i+2>=1 && i+2<=n && j-1>=1 && j-1<=m)
                {
                    board[i+2][j-1]+=board[i][j]%modulo;
                    // board[i+1][j+2]=board[i+1][j+2]%modulo;

                }
                 
            }
            
        }
         }
     for (int i = 1; i <=q; i++)
     {
        printf("%d ",board[p][i]%modulo);
     }
    // for (int i = 1; i <=p; i++)
    // {
    //     for (int j = 1; j <=q; j++)
    //     {
    //         printf("%d ",board[i][j]);
    //     }
    //     printf("\n");
        
    // }
     
    
    
    
      
    return 0;
}