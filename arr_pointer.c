#include <stdio.h>

int main (){
    int arr[5]={1,2,3,4,5},i;
    int *ptr=arr;
    printf("%p %p %p %p\n",ptr , &arr[0],arr,&arr);
    //here &arr+1 when used with the differs by &arr by the size of the array
    printf("%d %d %d %d",ptr , &arr[0],arr,&arr+1);
    return 0;
}
