#include <stdio.h>
int main()
{
    //enter size of array
    int n, i;
    scanf("%d", &n);
    int A[n], B[n], C[n];
    for(i=0;i<n;i++)
    {
        scanf("%d", &A[i]);

    }
    for(i=0;i<n;i++)
    {
        scanf("%d", &B[i]);
    }
    for(i=0;i<n;i++)
    {
        C[i]=A[i]+B[i];
        printf("%d ", C[i]);
    }
    return 0;
}