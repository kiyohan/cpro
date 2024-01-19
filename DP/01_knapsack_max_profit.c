#include<stdio.h>
int t[1001][1001];

int knapsack(int val[],int wt[],int max_wt,int size){
    if (max_wt==0 || size==0)
    {
        return 0;
    }
    if (t[max_wt][size]!=-1)
    {
        return t[max_wt][size];
    }
    
    if (wt[size-1]>max_wt)
    {
        return knapsack(val,wt,max_wt,size-1);
    }
    else if (wt[size-1]<=max_wt)
    {
        int x=val[size-1]+knapsack(val,wt,max_wt-wt[size-1],size-1);
        int y=knapsack(val,wt,max_wt,size-1);
        if (x>y)
        {
            return t[max_wt][size]=x;
        }
        else{
            return t[max_wt][size]=y;
        }
       
    }
}

int main()
{
    int val[]={1,3,4,5};
    int wt[]={1,2,5,4};
    int max_wt;
    scanf("%d",&max_wt);
    for (int i = 0; i < max_wt+1; i++)
    {
        for (int j = 0; j < (sizeof(val)/sizeof(int))+1 ; j++)
        {
            t[i][j]=-1;
        }
        
    }
    
    
    int max_profit;
    max_profit=knapsack(val,wt,max_wt,(sizeof(val)/sizeof(int)));

    printf("%d\n",max_profit);
    return 0;
}