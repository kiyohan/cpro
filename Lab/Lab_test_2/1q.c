#include <stdio.h>
#include <string.h>


int unique(char* arr){
    char unq[11]={'z'};
    int unique=0;
    int flag=0;
    for (int i = 0; i < strlen(arr); i++)
    {
        flag=0;
        for (int j = 0; j < 10; j++)
        {
            if (arr[i]==unq[j])
            {
                flag=1;
                break;
            }
            unq[j]=arr[i];
        }
        if (flag==0)
        {
            unique++;
        }
    }
    return unique;
}

int strong(char* st){
    int u=unique(st);
    // printf("%d\n",u);
    char unq[11];
    if (strlen(st)>100)
    {
        return 0;
    }
    
    for (int i = 0; i < strlen(st); i++)
    {
        for (int  j = 0; j < 10; j++)
        {
            if (st[i]==unq[j])
            {
                break;
            }
            unq[j]=st[i];
        }
    }
    for (int i = 0; i < 10; i++)
    {
        int temp=0;
        for (int j = 0; j < strlen(st); j++)
        {
            if (unq[i]==st[j])
            {
                temp++;
            }
           
        }
        unq[i]=temp;
       
    }
    for (int i = 0; i < 10; i++)
    {
        if (unq[i]>u)
        {
            return 0;
        }
       
    }
    return 1;
   
   
   
}

int per(char* str ,int size){
    char st[size];
    int count=0;
    for (int i = 0; i < size; i++)
    {
        
        for (int j = i ; j < size ; j++) {
            
            int k=i;
            int l=j;
            int h=0;
            while (k<=l)
            {
                st[h]=str[k];
                k++;
                h++;    
            }
            st[h]='\0';

            printf("%s",st);
            printf("\n");
            count+=strong(st);
            
            
              
        }
    }
    return count;
}

int permute(char* str,int size){
    char st[size+1];
    int cout=0;
    int sq=1,aq=size;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < sq; j++)
        {
            int h=0;
            int d=2;
            for (int k = j; k < aq; k++)
            {
                st[k]=str[h];
                h=h+(size/d);
                d++;
            }
            aq--;
            // printf("%s\n",st);
            cout+=strong(st);

        }
        sq++;
        // printf("%s\n",st);
        // cout+=strong(st);

       
    }
    return cout;

}
int main(){

    int cases;
    scanf("%d",&cases);
    while (cases--)
    {
        int size;
        scanf("%d",&size);
        char arr[size+1];
        scanf("%s",arr);
       
        int s=per(arr,size);
        // printf("%d\n",s);
       
    }
   
}