// #include <stdio.h>

// int main (){
//     int i;
//     char str[3][5];
//     for (i = 0; i < 3; i++)
//     {
//         scanf("%s",str[i]);
//     }
//     for ( i = 0; i < 3; i++)
//     {
//         printf("%s\n",str[i]);
//     }
//     return 0;
// }
// #include <stdio.h>
  
// int main()
// {
//     int i;
  
//     // Lets say we have 3 words
//     int n = 3;
  
//     // Declaration of 2-D char array
//     char array[n][20];
  
//     // Initialization of 2-D char array
//     for (i = 0; i < 3; i++)
//         scanf("%s", array[i]);
  
//     // print the words
//     for (i = 0; i < 3; i++)
//         printf("%s\n", array[i]);
  
//     return 0;
// }
//write a code to sort an array of strings
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int cmpStr(const void *x,const void *y){
    return (*(char *)x-*(char *)y);
}
int main()
{
    int n;
    scanf("%d", &n); //number of strings to be sorted
    char str[n][50];
    // printf("Enter %d words:\n",n);
    for (int i = 0; i < n; ++i)
    {
        // fgets(str[i], sizeof(str[i]), stdin);
        scanf("%s",str[i]);
    }
    // char temp[50];
    // for (int i = 0; i < n-1; ++i)
    // {
    //     for (int j = i + 1; j < n; ++j)
    //     {
    //         if (strcmp(str[i], str[j]) > 0)
    //         {
    //             strcpy(temp, str[i]);
    //             strcpy(str[i], str[j]);
    //             strcpy(str[j], temp);
    //         }
    //     }
    // }
    qsort(str,n,sizeof(char),cmpStr);
    // printf("In the lexicographical order: \n");
    for (int i = 0; i < n; ++i)
    {
        // fputs(str[i], stdout);
        printf("%s\n",str[i]);
    }
    return 0;
}