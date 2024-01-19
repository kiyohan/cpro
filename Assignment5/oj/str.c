#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void strrev(char *str,int start,int end) {
    
    for (int i = start, j = end - 1; i < j; ++i, --j) {
        str[i] ^= str[j];
        str[j] ^= str[i];
        str[i] ^= str[j];
    }
}

int main() {
    
    char st[100001];

    scanf("%s", st);
    int len = strlen(st);


    char str[300001];
    for (int i = 0; i < len; i++)
    {
        str[100001+i]=st[i];
    }

    int start=100001;
    int end=len+100001;
    str[end]='\0';

    int m;
    scanf("%d", &m);


    int rev = 0;
    

    while (m--) {
        int q;
        scanf("%d", &q);
        if (q == 1) {
            rev += 1;
        } 
        else if (q == 2) {
            
            int l;
            scanf("%d", &l);

            char j;
            scanf(" %c",&j);

            if ((l == 1 && rev%2 == 0) || (l == 2 && rev%2 == 1)) {
                str[start-1]=j;
                start--;
            }
            else if ((l == 2 && rev%2 == 0) ||(l==1 && rev%2==1) ){
                
                str[end]=j;
                str[end+1]='\0';
                end++;
            }
            
        }
    
    }

    if (rev % 2 == 1) {
        strrev(str,start,end);
    }

    
    for (int i = start; i < end; i++)
    {
        printf("%c",str[i]);
    }

    return 0;
}