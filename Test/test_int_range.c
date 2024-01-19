// // #include <stdio.h>

// // int main (){
// //     int i=256, j=256;
// //     i >>=8 ; j <<=24;
// //     printf("%d %d",i,j);
// //     return 0;
// // }
// #include <stdio.h>

// int main (){
//     int a[3][3]={{1,2,3},{4,5,6}};
//     int *ptr;
//     ptr= a;
//     printf("%d",*(*((a)+1)));

//     return 0;
// }
// #include <stdio.h>
// #include <stdlib.h>
 
// int main()
// {
//     int r = 3, c = 4, i, j, count;
 
//     int* arr[r];
//     for (i = 0; i < r; i++)
//         arr[i] = (int*)malloc(c * sizeof(int));
 
//     count = 0;




//     for (i = 0; i < r; i++)
//     {
//         for (j = 0; j < c; j++)
// 	{
//             arr[i][j] = ++count;
// 	}
//     printf("%d  ",count);
//     }
 



    // for (i = 0; i < r; i++)
    // {
    //     for (j = 0; j < c; j++)
    //     {
    //         printf("%d %d %d\n",&arr,*arr , *(arr+i));
    //     }

    //     printf("\n");

    // }
	


 
//     for (int i = 0; i < r; i++)
//         free(arr[i]);
 
//     return 0;
// }
// #include <stdio.h>

// #include <stdio.h>
  
// int main()
// {
//     int var = 12189;
  
//     int  *ptr2;
  
//     int *ptr1;
  
//     ptr2 = &var;
  
//     ptr1 = &ptr2;
  
//     printf("Value of var = %d\n", &var);
//     printf("Value of var using single pointer = %d\n", *ptr2);
//     printf("Value of var using double pointer = %d\n", *ptr1);
  
//     return 0;
// }
// #include <stdio.h>
// #include <stdlib.h>
 
// int main()
// {
//     int r = 3, c = 4, i, j, count;
 
//     int** arr = (int**)malloc(r * sizeof(int*));



//     for (i = 0; i < r; i++)
//         arr[i] = (int*)malloc(c * sizeof(int));
 
//     count = 0;

//     for (i = 0; i < r; i++)
//     {
//         for (j = 0; j < c; j++)
// 	{
//             arr[i][j] = ++count;

// 	}
//     }


//     for (i = 0; i < r; i++)
//     {
//      for (j = 0; j < c; j++)
// 	{
//             printf("%d ", *(*(arr + i) +j));
//             printf("%d %d %d\n",arr[i], arr , *(arr+i));
// 	}

// 	printf("\n");
//     }
 
 
//     for (int i = 0; i < r; i++)
//         free(arr[i]);
 
//     free(arr);
 
//     return 0;
// }
#include <stdio.h>

int main (){
    int a[2][3]={{1,2,3},{4,5,6}};
    int *ptr;
    ptr= a;
    printf("%d",(((a))));

    return 0;
}