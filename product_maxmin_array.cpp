#include <stdio.h>

int main() 
{
    int T,j;
    scanf("%d", &T);
    int prod[T];
    
    //while (T--) 
    for(j=0;j<T;j++)
    {
        int N1, N2;
        scanf("%d", &N1);
        
        int arr1[N1];
        for (int i = 0; i < N1; i++) {
            scanf("%d", &arr1[i]);
        }
        
        scanf("%d", &N2);
        
        int arr2[N2];
        for (int i = 0; i < N2; i++) {
            scanf("%d", &arr2[i]);
        }
        
        int max1 = arr1[0];
        for (int i = 1; i < N1; i++) {
            if (arr1[i] > max1) {
                max1 = arr1[i];
            }
        }
        
        int min2 = arr2[0];
        for (int i = 1; i < N2; i++) {
            if (arr2[i] < min2) {
                min2 = arr2[i];
            }
        }
        
        int product = max1 * min2;
        prod[j]=product;
        //printf("%d\n", product);
    }
    for(j=0;j<T;j++)
    {
        printf("%d\n", prod[j]);
    }
    
    return 0;
}
