#include <stdio.h>

int main (){
    int number,no_of_leaders=0;
    scanf("%d",&number);
    int arr[number];
    for (int i = 0; i < number; i++)
    {
        scanf("%d",&arr[i]);
    }
    int a[number];
    int temp=-1;
    for (int i = 0; i < number; i++)
    {
        if (arr[i]>temp)
        {
            temp=arr[i];
            a[no_of_leaders]=arr[i];
            no_of_leaders++;
        }
        
    }
    printf("%d\n",no_of_leaders);
    for (int i = 0; i < no_of_leaders; i++)
    {
        printf("%d ",a[i]);
    }
    
    return 0;
}