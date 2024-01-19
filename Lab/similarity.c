#include<stdio.h>
#include<stdlib.h>

// void bsea(char *arr,int mid,char search){
//     if (arr[mid]==search)
//     {
//         return 1;
//     }
//     else if (arr[mid]>search)
//     {
//         /* code */
//     }
    
    
// }

int main(){
    int num;
    int size;
    scanf("%d",&num);
    int output[num];
    for (int i = 0; i < num; i++){
    
        scanf("%d",&size);
        char arr1[size+1];
        char arr2[size+1];
        scanf("%s",arr1);
        scanf("%s",arr2);
        int ab1[26]={0};
        int ab2[26]={0};
        int special1=0;
        int special2=0;
        int flag=1;
        for (int j = 0; j < size; j++)
        {
            if (arr1[j]=='@')
            {
                special1++;
            }
            else
            {
                ab1[arr1[j]-'a']++;
            }
            if (arr2[j]=='@')
            {
                special2++;
            }
            else
            {
                ab2[arr2[j]-'a']++;
            }
        }
        for (int j = 0; j < 26; j++)
        {
            if (ab1[j]==ab2[j])
            {
                continue;
            }
            else
            {
                if (j>=7)
                {
                    printf("No\n");
                    flag=0;
                    break;
                }
                
                if (ab1[j]>ab2[j])
                {
                    special2=special2-(ab1[j]-ab2[j]);
                }
                else
                {
                    special1=special2-(ab2[j]-ab2[j]);
                }
                
                
            }
            
        }
        if (flag==0)
        {
            continue;
        }
        
        if (special1>=0 && special2 >=0 )
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
    
}