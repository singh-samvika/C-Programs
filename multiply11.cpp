#include <stdio.h>
int main()
{
    int t, i;
    scanf("%d", &t);
    int a[t];
    for(i=1;i<=t;i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=1;i<=t;i++)
    {

        printf("%d\n", a[i]*11);

    }
    return 0;

}