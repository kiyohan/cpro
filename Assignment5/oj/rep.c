#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int alpha[26]={0};


int max(){
    int max=alpha[0];
    for (int i = 1; i < 26; i++)
    {
        if (max<alpha[i])
        {
            max=alpha[i];
        }
        
    }
    return max;
}

void unq_char(char *str,int size){
    for (int i = 0; i < size ; i++)
    {
        alpha[str[i]-'a']++;
    }
    
}

int main (){
    int size;
    int k;
    scanf("%d %d",&size,&k);
    char *str= (char*) malloc(size*sizeof(char));
    scanf("%s",str);
    
    if(k==1){
        unq_char(str,size);
    }
    else{

    int rep=1;
    for (int i = 0; i < size-1; i++)
        {
            if (str[i]==str[i+1])
            {
                rep++;
            }
            else
            {
                rep=1;
            }
            
            if (rep==k)
            {
                alpha[str[i]-'a']++;
                i++;
                rep=1;
            }
        }
    }

    int m=max();

    printf("%d\n",m);
    
    free(str);
    
    return 0;
}
