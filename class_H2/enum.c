#include<stdio.h>
enum xenum{c,b,d};
enum ynum{xenum};
int main()
{
    enum ynum var;
    printf("%d",sizeof(var));
    return 0;
}