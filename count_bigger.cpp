#include <stdio.h>
#include <stdlib.h>
int main()
{
    int N, i, c=0, n;
    scanf("%d", &N);
    int *no = (int *)malloc(N * sizeof(int));
    for(i=0;i<N;i++)
    {
       scanf("%d", &no[i]);
    }
    scanf("%d", &n);
    for(i=0;i<N;i++)
    {
        if(no[i]>n)
        {
            c=c+1;
        }

    }
    printf("%d", c);
}
