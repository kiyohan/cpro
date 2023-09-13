#include<stdio.h>
int main(){
    int n ;
    printf("Enter the number:");
    scanf("%d",&n);
    //Here --n means n is decreasing by 1 before every iteration
    while (--n)
    {
        printf("%d\n",n);
    }
    return 0;
}