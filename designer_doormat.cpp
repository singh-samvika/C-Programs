#include <stdio.h>

void printDoorMat(int N, int M) {
    int mid = N / 2;
    int i, j;

    // Print the top half of the door mat
    for (i = 0; i < mid; i++) {
        for (j = 0; j < M; j++) {
            if (j == (M / 2) - i || j == (M / 2) + i) {
                printf(".");
            } else {
                printf("-");
            }
        }
        printf("\n");
    }

    // Print the middle line with 'WELCOME'
    for (j = 0; j < M; j++) {
        if (j == (M / 2) - mid || j == (M / 2) + mid) {
            printf("WELCOME");
            j += 6;
        } else {
            printf("-");
        }
    }
    printf("\n");

    // Print the bottom half of the door mat
    for (i = mid - 1; i >= 0; i--) {
        for (j = 0; j < M; j++) {
            if (j == (M / 2) - i || j == (M / 2) + i) {
                printf(".");
            } else {
                printf("-");
            }
        }
        printf("\n");
    }
}

int main() {
    int N, M;

    printf("Enter the size of the door mat (N x M): ");
    scanf("%d %d", &N, &M);

    printDoorMat(N, M);

    return 0;
}