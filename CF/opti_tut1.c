#include <stdio.h>
int main()
{
    int test;
    scanf("%d\n", &test);
    while (test--)
    {
        int n;
        scanf("%d\n", &n);
        printf("%d\n", (n + 2 * (n / 2) + 2 * (n / 3)));
    }
    return 0;
}