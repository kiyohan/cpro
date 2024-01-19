#include <stdio.h>

int binary(int key, int arr[], int size)
{
    int low = 0;
    int high = size - 1;
    int mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (key == arr[mid])
        {
            return mid;
        }
        else if (key < arr[mid])
        {
            high = mid - 1;
        }
        else if (key > arr[mid])
        {
            low = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int size1;
    
    scanf("%d", &size1);
    int arr1[size1];
    for (int i = 0; i < size1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    int key;
    for (int i = 0; i < size1; i++)
    {
        scanf("%d", &key);
        // printf("%d\n", key);
        printf("%d ", binary(key, arr1, size1));
    }
    
    

    return 0;
}