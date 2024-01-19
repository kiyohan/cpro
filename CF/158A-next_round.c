#include <stdio.h>

int main (){
    int number,qualification,count=0 ; scanf("%d %d",&number,&qualification);
    int arr[number];
    for (int i = 0; i < number; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < number; i++)
    {
        if (arr[i]>=arr[qualification-1] && arr[i]>0 && qualification<=number)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}