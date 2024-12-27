#include <stdio.h>

int main() {
    int testCases;
    scanf("%d", &testCases);

    while (testCases > 0) {
        int size;
        scanf("%d", &size);

        int array[size];

        for (int i = 0; i < size; i++) {
            scanf("%d", &array[i]);
        }

        int left[size/2];
        int right[size/2];

        for (int i = 0; i < size/2; i++) {
            left[i] = array[i];
        }

        for (int i = size/2; i < size; i++) {
            right[i - size/2] = array[i];
        }

        int sumLeft = 0;
        int sumRight = 0;

        for (int i = 0; i < size/2; i++) {
            sumLeft += left[i];
            sumRight += right[i];
        }

        int product = sumLeft * sumRight;

        printf("Product of the subarrays: %d\n", product);

        testCases--;
    }

    return 0;
}