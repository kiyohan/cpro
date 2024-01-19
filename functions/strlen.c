#include<stdio.h>

int strlen(char *str){

    int count;
    count=0;
    while (*(str+count) != '\0')
    {
        count++;
    }
    return count;
}
void Strcpy(char *s,char *f){
    int i=0;
    while (*(f+i) != '\0')
    {
        *(s+i)=*(f+i);
        i++;
    }

}

void str_rev(char *a){
    for (int  i = 0; i < strlen(a)/2; i++)
    {
        char temp;
        temp=*(a+strlen(a)-i-1);
        *(a+strlen(a)-i-1)=*(a+i);
        *(a+i)=temp;

    }
    
}
int main(){
    char s[27]= "abcdefghijklmnopqrstuvwxyz";
    char f[10]="akmlalaks";
    printf("%d\n",strlen(s));
    // Strcpy(f,s);
    str_rev(s);
    printf("%s\n",s);
    // printf("%s\n",f);
}