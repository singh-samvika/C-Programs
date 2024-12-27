#include <stdio.h>
#include <stdlib.h>
#define R 6
#define C 6
int MaxSum(int arr[R][C])
{
    int i, j, sum;
    if (R<3 || C<3)
    {
         printf("Not Possible");
          exit(0);
    }
 
    int max_sum = -500000;
        for (i = 0; i < R - 2; i++) 
        {
         for (j = 0; j < C - 2; j++) 
         {
            sum = (arr[i][j] + arr[i][j + 1]
                   + arr[i][j + 2])
                  + (arr[i + 1][j + 1])
                  + (arr[i + 2][j] + arr[i + 2][j + 1]
                     + arr[i + 2][j + 2]);
                     if (sum > max_sum)
                      max_sum = sum;
                    else
                     continue;
        }
    }
    return max_sum;
}
int main()
{
    int arr[R][C] = { { 1, 1, 1, 0, 0, 0 },
                     { 0, 1, 0, 0, 0, 0 },
                     { 1, 1, 1, 0, 0, 0 },
                     { 0, 0, 2, 4, 4, 0 },
                     { 0, 0, 0, 2, 0, 0 },
                     { 0, 0, 1, 2, 4, 0} };
 
    int res = MaxSum(arr);
    printf("Maximum sum of hour glass = %d", res);
    return 0;
}