#include<stdio.h>
int main(){
    int i,j,k;
    i=1;
    j=3;
    // here it is a alternate for if else
    //k= i>j ? i:j ;
    k=(i>=0 ? i:0) +j;
    printf("%d\n",k);
    return 0;
}