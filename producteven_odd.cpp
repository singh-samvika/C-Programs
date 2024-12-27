#include <stdio.h>

int main() {
    int T,i;
    scanf("%d", &T);
    int a[T];
    
    /*while (T!=0) 
    {
        int N1, N2;
        scanf("%d", &N1);
        scanf("%d", &N2);
        
        int product = N1 * N2;
        
        if (product % 2 == 0) 
        {
            a[]
            //printf("1\n");
        } else {
            printf("0\n");
        }
        T--;
    }*/
    
    //return 0;
//}
for(i=0;i<T;i++)
{
    int N1, N2;
        scanf("%d", &N1);
        scanf("%d", &N2);
        int product = N1 * N2;
        
        if (product % 2 == 0)
        a[i]=1;
        else
        a[i]=0;
}
for(i=0;i<T;i++)
printf("%d ", a[i]);
return 0;
}