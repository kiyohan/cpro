//       1
//      1 1
//     1 2 1
//    1 3 3 1
//   1 4 6 4 1
//  1 5 10 10 5 1
// write a program to print the above pattern
#include<stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    for (i=0; i<n; i++)
    {
        for (j=0; j<n-i; j++)
        {
            printf(" ");
        }
        int val=1;
        for (j=0; j<=i; j++)
        {
            printf("%d ",val);
            val=val*(i-j)/(j+1);
        }
        printf("\n");
    }
    return 0;
}
