#include <stdio.h>

int RunnerUp(int a[], int N) 
{
    int max = 0;
    int runnerUp = 0;

    for (int i = 0; i < N; i++) 
    {
        if (a[i] > max) 
        {
            runnerUp = max;
            max = a[i];
        } 
        else if (a[i] > runnerUp && a[i] < max) 
        {
            runnerUp = a[i];
        }
    }

    return runnerUp;
}

int main() {
    //int scores[] = {5, 7, 2, 9, 3};
    //int size = sizeof(scores) / sizeof(scores[0]);
    int N;
    printf("Enter size of array");
    scanf("%d", &N);
    int a[N];
    printf("Enter the scores");
    for(int  i=0; i<N; i++)
    {
        scanf("%d", &a[i]);
    }

    int runnerUp = RunnerUp(a, N);
    
    printf("The runner-up score is: %d\n", runnerUp);

    return 0;
}