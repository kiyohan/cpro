#include <stdio.h>
int main (){
    int i,j;
    scanf("%d\n",&i);
    int arr[i];
    for ( j=0; j<i; j++)
    {
        scanf("%d",&arr[j]);
    }
    for (j = 0; j < i-1; j++)
    {
        arr[j+1]=arr[j]^arr[j+1];
    }
    printf("%d",arr[i-1]);
    return 0;
}