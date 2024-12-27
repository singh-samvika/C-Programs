#include <stdio.h>
int main()
{
    int n,k;
    printf("Enter size of array ");
    scanf("%d", &n);
    printf("Enter k ");
    scanf("%d", &k);
    int arr[n];
    int i,j,t;
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr[j]>arr[j+1])
            {
                t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
    }
    printf("%d", arr[k-1]);
    return 0;
}