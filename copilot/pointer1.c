//a program for demonsrating different pointer arithmetic operations
#include <stdio.h>
int main()
{
    int a = 10;
    int *p;
    p = &a;
    printf("The value of a is %d\n", a);
    printf("The value of a is %d\n", *p);
    printf("The address of a is %p\n", &a);
    printf("The address of a is %p\n", p-2);
    printf("The address of p is %p\n", &p);
    printf("The value of p is %p\n", p);
    printf("The value of p is %d\n", *(&p));
    printf("The value of p is %p\n", &(*p));
    printf("The value of p is %d\n", *&a);
    printf("The value of p is %d\n", *p);
    printf("The value of p is %d\n", *(&a));
    return 0;
}
