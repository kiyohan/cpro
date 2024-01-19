#include<stdio.h>
void swap (int *x,int *y);

int main (){
    int x=10;
    int y=11;
    printf("%d %d\n",x,y);
    swap(&x,&y);
    printf("%d %d",x,y);
    return 0;
}

void swap (int *x,int *y){
    *y=*x+*y;
    *x=*y-*x;
    *y=*y-*x;
}
