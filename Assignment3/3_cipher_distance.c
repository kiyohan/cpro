//This code is OJ submission (:
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int is_possible(char *a,int size,int req_diff){

    int cd[size+1];
    char str[size+1];
    int check[size+1];
    strcpy(str,a);
    for (int i = 0; i < size; i++)
    {
        if ((a[i]-'a')>('z'-a[i]))
        {
            cd[i]=a[i]-'a';
            check[i]=1;

        }
        else
        {
            cd[i]='z'-a[i];
            check[i]=-1;

        }
         
    }
    int sum=0;
    int c=0;
    for (int i = 0; i < size; i++)
    {
        sum+=cd[i];
    }
    if (sum<req_diff)
    {
        printf("-1");
    }
    else
    {
        c=1;
    }
    if (c==1)
    {
        int current=sum;
        int temp=req_diff;
        // int breakpoint=size-1;
        for (int i = 0; i < size; i++)
        {
            if (temp==0)
            {
                // breakpoint=i;
                break;
            }
            else if (temp>=str[i]-'a')
            {
                a[i]='a';
                temp=temp-str[i]+'a';
            }
            else if (temp<str[i]-'a')
            {
                if (str[i]-'a' > temp)
                {
                    a[i]=a[i]-temp;
                    temp=0;
                    // break;
                }
                else if ('z'-str[i] > temp)
                {
                    a[i]=a[i]+temp;
                    temp=0;
                    // break;
                }
                
            }
       
        }
        // printf("%d\n",temp);
        // printf("%d\n",breakpoint);
        // printf("%s\n",a);
        int i=size-1;
        while (temp>0)
        {
            if (cd[i]==str[i]-a[i])
            {
                i--;
                continue;
            }
            else if (cd[i]>str[i]-a[i] && check[i]==1 && cd[i]>=temp+str[i]-a[i])
            {
                temp=temp+str[i]-a[i];
                a[i]=str[i];
                a[i]=a[i]-temp;
                break;
            }
            else if (cd[i]>str[i]-a[i] && check[i]==-1 && cd[i]>=temp+str[i]-a[i])
            {
                temp=temp+str[i]-a[i];
                a[i]=str[i];
                a[i]=a[i]+temp;
                break;

            }
            else if (cd[i]>str[i]-a[i] && check[i]==1 && cd[i]<temp+str[i]-a[i])
            {
                temp=temp+str[i]-a[i];
                a[i]=str[i];
                a[i]=a[i]-cd[i];
                temp=temp-cd[i];
            }
            else if (cd[i]>str[i]-a[i] && check[i]==-1 && cd[i]<temp+str[i]-a[i])
            {
                temp=temp+str[i]-a[i];
                a[i]=str[i];
                a[i]=a[i]+cd[i];
                temp=temp-cd[i];
            }
            
            
            i--;
            
            
        }
        
        for (int i = 0; i < size; i++)
        {
            printf("%c",a[i]);
        }
 
    }

}


int main()
{

    int len,diff;
    scanf("%d %d",&len,&diff);
    char str[len+1];
    scanf("%s",str);
    
    int check ;
    check = is_possible(str,len,diff);
   
    return 0;
}