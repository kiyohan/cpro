#include <stdio.h>
int main()
{
    int num1, num2, temp;
    int i, b = 1, bin2 = 0, rem;
    scanf("%d %d %d", &num1, &num2, &temp);
    for (i = 0; i < temp; i++)
    {
        b = b * 2;
    }
    rem = num1 % b;
    num1 = num1 - rem;
    rem = num2 % b;
    bin2 = bin2 + rem;
    num1=num1+bin2;
    printf("%d",num1);
    return 0;
}