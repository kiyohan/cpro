#include <stdio.h>
int main (){
    int arr[]={1,35,36,35,2,3,4,22};
    int i,k,j,count;
    for (j=0;j<8;j++)
    {
        for ( i = j+1; i <8 ; i++)
        {
            count=0;
            if(arr[j]<arr[i]){
                count=1;
                break;
            } 
        }
        if (count==0){
            printf("%d ",arr[j]);
        }
    }
    
    return 0;
}