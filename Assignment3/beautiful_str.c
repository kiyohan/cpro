#include "stdio.h"


int lower(char str[], int length){
    for (int i = 0; i <length ; i++)
    {
        if (str[i]>=97 && str[i]<=122)
        {
            return 1;
        }
    }
    return 0;   
}
int upper(char str[], int length){
    for (int i = 0; i <length ; i++)
    {
        if (str[i]>=65 && str[i]<=90)
        {
            return 1;
        }
    }
    return 0;   
}
int rep(char str[], int length){
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length && j!=i ; j++)
        {
            if (str[i]==str[j])
            {
                return 0;
            }
            
        }
    }
    return 1;
}

int main (){
    char st[100];
    int count=0;
    int low,up,re;
    scanf("%s",st);
    for (int i = 0; i < 100; i++)
    {
        if (st[i]=='\0')
        {
            break;
        }
        count++;  
    }
    low=lower(st,count);
    up=upper(st,count);
    re=rep(st,count);
    if (low==1 && up==1 && re==1)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}