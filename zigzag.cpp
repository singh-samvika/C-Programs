#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void zigZagSequence(int arr[], int n) {
    int i;
    for (i = 0; i < n - 1; i++) 
    {
        if (i % 2 == 0) 
        {
            if (arr[i] > arr[i + 1]) 
            {
                swap(&arr[i], &arr[i + 1]);
            }
        } 
        else 
        {
            if (arr[i] < arr[i + 1]) 
            {
                swap(&arr[i], &arr[i + 1]);
            }
        }
    }
}

int main() 
{

    int arr[] = {2, 3, 5, 1, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    zigZagSequence(arr, n);
    
    printf("Zig Zag Sequence: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}