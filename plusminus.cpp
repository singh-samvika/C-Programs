#include <stdio.h>

void calculateRatios(int arr[], int n) {
    int positiveCount = 0;
    int negativeCount = 0;
    int zeroCount = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            positiveCount++;
        } else if (arr[i] < 0) {
            negativeCount++;
        } else {
            zeroCount++;
        }
    }

    double positiveRatio = (double) positiveCount / n;
    double negativeRatio = (double) negativeCount / n;
    double zeroRatio = (double) zeroCount / n;

    printf("%.6lf\n", positiveRatio);
    printf("%.6lf\n", negativeRatio);
    printf("%.6lf\n", zeroRatio);
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    calculateRatios(arr, n);

    return 0;
}