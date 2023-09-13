#include<stdio.h>
int main (){
    int number; 
    scanf("%d",&number);
    if ((number & number-1)==0)
    {
        printf("pow2");
    }
    return 0;
}