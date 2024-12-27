#include <stdio.h>
#include <stdlib.h>
int main()
{
    int N, i, c=0;
    scanf("%d", &N);
    int *no = (int *)malloc(N * sizeof(int));
    for(i=0;i<N;i++)
    {
       scanf("%d", &no[i]);
       if(no[i]==1)
       {
          c=c+1;
       }

    }
    printf("%d", c);
    return 0;
}