#include <stdio.h>
int main()
{
    int n;
    printf("Enter order of matrix");
    scanf("%d", &n);
    int mat[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d", &mat[i][j]);

        }
    }
    int pdiag=0;
    for(int i=0;i<n;i++)
    {
      pdiag=pdiag+mat[i][i];
    }
    printf("%d\n", pdiag);
    
    int sdiag=0;
    for(int i=0;i<n;i++)
    {
        sdiag=sdiag+mat[i][n-i-1];
    }
    printf("%d\n", sdiag);
    int diff = pdiag-sdiag;
    printf("difference= %d\n", diff);
}