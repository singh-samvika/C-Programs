#include <stdio.h>

int count(char *arr, int n);

int main() 
{
  int n, i, result;
  
  scanf("%d", &n);
  char arr[n + 1];
  
  scanf("%s", arr);
  

  result = count(arr, n);
  printf("%d", result);
  return 0;
}
int count(char *arr, int n) 
{
  
  int i, count = 0;
  int vcount = 0;
  for (i = 0; i < n; i++) {
    if (arr[i] == 'U') {
      count++;
    } else {
      count--;
    }

    if (count == 0 && arr[i] == 'U') {
      vcount++;
    }
  }
  return vcount;
}