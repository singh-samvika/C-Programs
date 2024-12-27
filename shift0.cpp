#include <stdio.h>

void shiftZerosToEnd(int arr[], int n) {
    int count = 0; 
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] != 0) {
            arr[count++] = arr[i]; 
        }
    }

    
    while (count < n) 
    {
        arr[count++] = 0;
    }
}

int main() 
{ 
    
    /*int arr[] = {1, 0, 2, 0, 3, 0, 4, 0, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    shiftZerosToEnd(arr, n);

    printf("\nArray after shifting zeros to the end: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;*/
}