#include <stdio.h>
int main (){
    int kilo;scanf("%d",&kilo);
    if (kilo==2){
        printf("NO");
    }
    else if ((kilo%2)==0){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}