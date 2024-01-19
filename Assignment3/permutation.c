#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//function declaration
void swap(char *x, char *y);
void permute(char *a, int l, int r);
int cmpStr(const void *x,const void *y);
int shouldSwap(char str[], int start, int curr);
int compare_strings(const void *a, const void *b);
void lexo(int n);


//global variables
int count =0;
char combi[40320][9];


//main function

int main()
{
    char stri[9];
    scanf("%s",stri); 
    int n=0;
    for (int i = 0; i < 9; i++)
    {
        if (stri[i]=='\0')
        {
            break;
        }
        n++;  
    }

    qsort(stri,n,sizeof(char),cmpStr);//sorting the given array

    
    permute(stri, 0, n - 1);
    
    printf("%d\n",count);
    // printf("%d\n",sizeof(combi) / sizeof(combi[0]));

    
    lexo(n);

    for (int i = 0; i < count; ++i)
    {
        printf("%s\n",combi[i]);
    }
    return 0;
}


//function to check if we should swap the given indexes
int shouldSwap(char str[], int start, int curr)
{
    for (int i = start; i < curr; i++)
        if (str[i] == str[curr])
            return 0;
    return 1;
}


//permutation using recursion
void permute(char *a, int l, int r)
{
    int i;
    if (l == r ){ //if the left and right are equal then print the string
        
        // printf("%s\n",a);
        strcpy(combi[count],a);
        count++;
        
    }
    else
    {
        for (i = l; i <= r; i++) //else loop through the string
        {
            if (shouldSwap(a, l, i))//checking condition for avoiding repeated strings
            {
                swap((a + l), (a + i)); //swap the left and the ith element
                permute(a, l + 1, r);   //call the permute function again
                swap((a + l), (a + i)); //swap the left and the ith element
            }
        }
    }
}

//qsort cmp function
int cmpStr(const void *x,const void *y){
    return (*(char *)x-*(char *)y);
    
    // return strcmp(*(char *)x, *(char *)y);
}
int compare_strings(const void *a, const void *b) {
  return strcmp(a,b);
}

//function to swap the elements
void swap(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}


//a function to arrange the strings in lexographical order
void lexo(int n){
    // char temp[50];
    qsort(combi,count,(sizeof(char))*9,compare_strings);
    // int new = sizeof(combi) / sizeof(combi[0]);
    // qsort(combi, count, sizeof(char), compare_strings);

    // for (int i = 0 ; i < count-1; ++i)
    //     {
    //         for (int j = i + 1; j < count; ++j)
    //         {
    //             if (strcmp(combi[i], combi[j]) > 0)
    //             {
    //                 strcpy(temp, combi[i]);
    //                 strcpy(combi[i], combi[j]);
    //                 strcpy(combi[j], temp);
    //             }
    //         }
    //     }

    
}


