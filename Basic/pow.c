#include <stdio.h>  
#include <math.h>  
int main ()  
{  
// declare base and exp variable   
int base, exp;  
int result; // store the result  
printf (" Enter the base value from the user: ");  
scanf (" %d", &base); // get base from user  
printf (" Enter the power value for raising the power of base: ");  
scanf (" %d", &exp); // get exponent from user  
  
// use pow() function to pass the base and the exp value as arguments  
result = pow ( base, exp);  
printf (" %d to the power of %d is = %d ", base, exp, result);  
return 0;  
}  
