#include <stdio.h>
int main()
{
    int a,b,m,d;
    scanf("%d", &a);
    scanf("%d", &b);
    d=a/b;
    m=a%b;
    printf("%d\n", d);
    printf("%d\n", m);
    printf("(%d, %d)", d, m);
    return 0;

}