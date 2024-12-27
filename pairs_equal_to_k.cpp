#include <stdio.h>
#include <stdlib.h>
int main()
{
    int k, N, i, j, c=0;
    printf("Enter size of array ");
    scanf("%d", &N);
    printf("Enter k ");
    scanf("%d", &k);
    int *no = (int *)malloc(N * sizeof(int));
    for(i=0;i<N;i++)
    {
        scanf("%d", &no[i]);
    }
    for(i=0;i<N-1;i++)
    {
        for(j=i+1;j<N;j++)
        {
            if(no[i]-no[j]==k)
            c=c+1;
        }
    }
    printf("no. of pairs %d", c);
    return 0;

}
