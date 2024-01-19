#include <stdio.h>
int main()
{
    int n, count = 0, i=0, j, k, l;
    scanf("%d", &n);
    while (i < n)
    {
        scanf("%d %d %d", &j, &k, &l);
        if ((j & k) == 1 || (k & l) == 1 || (j & l) == 1)
        {
            ++count;
        }
        ++i;
    }
    printf("%d", count);
    return 0;
}