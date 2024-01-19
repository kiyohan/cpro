#include<stdio.h>
#include<stdlib.h>


int cmpStr(const void *x,const void *y){
    return (*(int *)x-*(int *)y);
    
    // return strcmp(*(char *)x, *(char *)y);
}

void bsea();

int main (){
    int size;
    scanf("%d",&size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    qsort(arr,size,sizeof(int),cmpStr);
    int k;
    scanf("%d",&k);
    while (k--)
    {
        
    }
    
    return 0;
}

void bsea()
{
}
