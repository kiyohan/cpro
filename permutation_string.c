#include <stdio.h>
#include <string.h>
#include<stdlib.h> 
//function declaration
void swap(char *x, char *y);
void permute(char *a, int l, int r);
//string permutation using recursion with comments
void permute(char *a, int l, int r)
{
    int i;
    if (l == r){ //if the left and right are equal then print the string
        printf("%s\n", a);
    }
    else
    {
        for (i = l; i <= r,; i++) //else loop through the string
        {
            swap((a + l), (a + i)); //swap the left and the ith element
            permute(a, l + 1, r);   //call the permute function again
            swap((a + l), (a + i)); //swap the left and the ith element
        }
    }
}

int cmpStr(const void *x,const void *y){
    return (*(char *)x-*(char *)y);
}
//function to swap the elements
void swap(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
//main function
int main()
{
    char str[] = "BCC";
    int n = strlen(str);

    qsort(str,n,sizeof(char),cmpStr);
    // printf("%s",str);
    permute(str, 0, n - 1);
    return 0;
}