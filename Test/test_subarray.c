#include <stdio.h>

int main (){
    int no_of_elements,breakpoint=1,same_elements=1,case_changer=0;
    scanf("%d",&no_of_elements);
    int arr[no_of_elements];
    int i, j, k, l, no_of_palindromes=0;
    for ( i = 0; i < no_of_elements; i++)
    {
        scanf("%d",&arr[i]);
    }
    for ( i = 1; i < no_of_elements; i++)
    {
        if (arr[i-1]==arr[i])
        {
            same_elements++;
        }
        
    }
    if (same_elements==no_of_elements)
    {
        case_changer=1;
    }
    
    
    for ( i=0 ; i < no_of_elements; i++)
    {
        
        for ( j = i ; j < no_of_elements ; j++ ) {
            
            for ( k= i ; k < j+1 ; k++)
            {
                printf("%d ",arr[k]);
            }
            printf("\n");
            
        }
        
    } 
    return 0;
}
/*
Given an array of length , count the number of non-empty subarrays which are palindromes.
Note that two subarrays are considered to be different if they either start at different indices or end at different
indices. The actual elements in the two subarrays do not influence this.
A subarray is a contiguous segment of the array which can be obtained be deleting one or more elements from
the beginning or the end of the array.
An array is said to be a palindrome if it reads the same backwards and forwards. For example, 1 2 2 1,1,1, 2 2 ,2,2
 are all palindromic arrays
give me a code for above question
*/
#include <stdio.h>




