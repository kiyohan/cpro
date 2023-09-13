//here this program is being used for 3 divisibilty but you can change the divisor as you wish
//input digits and number 
//output YES or NO
#include <stdio.h>
int main (){
    int digits,sum=0;
    scanf("%d\n",&digits);
    char number;
    while (digits!=0)
    {
        scanf("%c",&number);
        sum+=(number-48);
        --digits;
    }
    if (sum%3==0){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}