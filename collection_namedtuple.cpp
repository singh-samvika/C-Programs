#include <stdio.h>
int main()
{
    int N, i, sum;
    float avg;
    char c1[100], c2[100], n[100];
  scanf("%d", &N);
  scanf("%s%s", c1, c2);
  int m[N];
  for(i=0;i<N;i++)
  {
    scanf("%d%s", &m[i], n);
    sum=sum+m[i];

  }
  avg=sum/N;
  printf("%f", avg);
  return 0;

}  