#include <stdio.h>

void irritation();

int max_irritation(int *array,int n,int size,int *maximum);

int main (){
    int t;
    scanf("%d",&t);
    while (t--)
    {
        irritation();
    }
    
    return 0;
}


void irritation(){
    int size;
    scanf("%d",&size);
    int arr[size];
    int maximum[size+1];
    for (int  i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
        maximum[i]=0;
        

    }
    // for (int  i = 0; i < size; i++)
    // {
    //     maximum[i]=0;
    // }
    // maximum[size-1]=arr[size-1];
    int max = maximum[size-1];
    for (int  i = size-2; i >=0 ; i--)
    {
        maximum[i]=max_irritation(arr,i,size,maximum);
        // if (max< maximum[i])
        // {
        //     max=maximum[i];
        // }
        

    }
    for (int  i = 0; i < size; i++)
    {
        // printf("%d ",maximum[i]);
        if (maximum[i]>max)
        {
            max=maximum[i];
        }
        
    }
    printf("%d\n",max);
    
    
}

int max_irritation(int *array,int n,int size,int *maximum)
{
    if (maximum[n] && n<size && n>=0)
    {
        return maximum[n];
    }
    else if (n<size)
    {
        return (array[n]+max_irritation(array,n+array[n],size,maximum));
    }
    else
    {
        return 0;
    }
    
    
}
//this code below is OJ submission
//code above was giving a RTE
//RTE rectified by chatgpt
// #include <stdio.h>
// #include <stdlib.h>

// void irritation(int t);

// int max_irritation(int *array, int n, int size, int *maximum);

// int main() {
//     int t;
//     scanf("%d", &t);
//     irritation(t);
//     return 0;
// }

// void irritation(int t) {
//     while (t--) {
//         int size;
//         scanf("%d", &size);
//         int *arr = (int *)malloc(size * sizeof(int));
//         int *maximum = (int *)malloc(size * sizeof(int));

//         for (int i = 0; i < size; i++) {
//             scanf("%d", &arr[i]);
//             maximum[i] = 0;
//         }

//         maximum[size - 1] = arr[size - 1];
//         int max = maximum[size - 1];

//         for (int i = size - 2; i >= 0; i--) {
//             maximum[i] = max_irritation(arr, i, size, maximum);

//             if (maximum[i] > max) {
//                 max = maximum[i];
//             }
//         }

//         printf("%d\n", max);

//         // Free allocated memory
//         free(arr);
//         free(maximum);
//     }
// }

// int max_irritation(int *array, int n, int size, int *maximum) {
//     if (n >= 0 && n < size && maximum[n] != 0) {
//         return maximum[n];
//     } else if (n < size) {
//         return (array[n] + max_irritation(array, n + array[n], size, maximum));
//     } else {
//         return 0;
//     }
// }
 