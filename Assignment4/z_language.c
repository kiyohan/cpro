#include <stdio.h>
#include <string.h>

int main (){
    int n;
    scanf("%d",&n);
    
    char str[n];
    scanf("%s",str);

    int cd=1;

    for (int i = 0; i < n; i++)
    {
        
        if (cd==1 && str[i]=='"')
        {
            cd=0;
        }
        else if (cd==1 && str[i]==',')
        {
            str[i]='*';
        }
        else if (cd==0 && str[i]=='"')
        {
            cd=1;
        }
        
    }

    printf("%s",str);


    return 0;

}