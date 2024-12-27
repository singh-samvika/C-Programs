#include <stdio.h>
#include <stdlib.h>
int main()
{
    int N, sum, i;
    char s[100];
    scanf("%d", &N);
    char *name = (char *)malloc(N * sizeof(char));
    int *marks = (int *)malloc(N * sizeof(int));
    for( i=0;i<N;i++)
    {scanf("%s%d", name[i], &marks[i]);}
    scanf("%s", s);
    float avg;
    for( i=0;i<N;i++)
    {
        sum=sum+marks[i]; 

    }
    avg=sum/N;
    printf("%d", avg );
    return 0;

}