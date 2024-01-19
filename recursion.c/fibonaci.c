#include <stdio.h>

int fibonacci(int i) {

   int a,b;

   if(i == 0) {
      return 0;
   }
	
   if(i == 1) {
      return 1;
   }

   a = fibonacci(i-1);
 
//    printf("%d\n",a);

   b = fibonacci(i-2); 

//    printf("%d\n",b);  

   return a + b;
}

int  main() {

   int i;
   scanf("%d",&i);
   for (int j = 0; j < i; j++)
   {
         printf("%d\n", fibonacci(j));
   }
   return 0;
}
// //make a priogram to print n fibonaci terms by using recursion
// #include <stdio.h>
// int fib(int n)
// {
//     if (n == 0)
//         return 0;
//     else if (n == 1)
//         return 1;
//     else
//         return (fib(n - 1) + fib(n - 2));
// }
// int main()
// {
//     int n;
//     printf("Enter the number of terms\n");
//     scanf("%d", &n);
//     printf("The first %d terms of the fibonacci series are:\n", n);
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", fib(i));
//     }
//     return 0;
// }