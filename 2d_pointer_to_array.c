#include <stdio.h>

int main (){
    int arr[3][4]={
        {10,11,12,13},
        {20,21,22,23},
        {30,41,32,33}
    };
    int (*ptr)[3][4];
    ptr = &arr;
    printf("%d\n",sizeof(int*));

    printf("%d %d %d\n",*ptr ,*(ptr+1) , *(ptr+2));

    printf("%d %d %d\n",**ptr ,**(ptr+1) , **(ptr+2));

    printf("%d %d %d\n",***ptr ,*(*(*(ptr))+2) , *(*(*(ptr+0)+2)+2));

    return 0;
}