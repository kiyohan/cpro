#include <stdio.h>
#include <string.h>

int main (){
    char original[1001];
    scanf("%s",original);
    int len=strlen(original);
    char str[len];
    strcpy(str,original);
    // printf("%d",len);
    char temp;
    char min[len+1];
    char max[len+1];
    strcpy(min,str);
    strcpy(max,str);
    for (int i = 0; i < len; i++)
    {
        temp=str[len-1];
        for (int j = len-1 ; j >= 0; j--)
        {
            str[j]=str[j-1];
        }
        str[0]=temp;
        if (strcmp(min,str) > 0)
        {
            strcpy(min,str);
        }
        else if (strcmp(max,str) < 0)
        {
            strcpy(max,str);
        }
    }
    printf("%s\n%s\n",min,max);
    
}           