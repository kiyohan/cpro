// #include<stdio.h>
// int main(){
//     int a=12,b=10;
//     b=(a++)+(++a);
//     printf("a=%d,b=%d",a,b);
//     return 0;
// }
#include <stdio.h>
#include <string.h>

// int main (){
//     char a1[10]={"akmkals"};
//     char a2[10]={"akmkalz"};
//     char a3[10]={"akmkavjbls"};
//     char str[3][10];
//     // for (int i = 0; i < 3; i++)
//     // {
//     //     strcpy(str[i],a1);
//     // }
//     // for (int i = 0; i < 3; i++)
//     // {
//     //     printf("%s\n",str[i]);
//     // }
//     printf("%d",strcmp(a1, a2));

    
//     return 0;
// }
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare_strings(const void *a, const void *b) {
  return strcmp(a,b);
}

int main() {
  char strings[] = "banana";
  int n = strlen(strings);
  // printf("%d\n",n);
  // for (int i = 0; i < n; i++)
  // {
  //   strings[i]+=1;
  // }
  

  // qsort(strings, n, sizeof(char), compare_strings);

  // for (int i = 0; i < n; i++) {
    printf("%s\n", strings);
  // }

  return 0;
}