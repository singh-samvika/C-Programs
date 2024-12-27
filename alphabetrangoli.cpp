#include <stdio.h>
void triangle1(int);
void triangle2(int);

int main()
{
    int n;
    printf("Enter an odd no.");
    scanf("%d", &n);
    triangle1(n);
    triangle2(n);
    return 0;
}
void triangle1(int n1)
{
    int i, x, y,z, j;
    x=(n1+1)/2;
    z=1;
    for(i=1;i<=(n1+1)/2; i=i+1)
    {
        y=0;
        for(j=1;j<=n1;j=j+1)
        {
            if(j>=x && y<z)
            {
                printf("*");
                y=y+1;
            }
            else
            {
                printf(" ");
        
            }
        }
        z=z+2;
        x=x-1;
        printf("\n");
    }
}
void triangle2(int num)
{
    int i, x, y,z, j;
    x=1;
    z=num;
    for(i=1;i<=(num+1)/2; i=i+1)
    {
        y=0;
        for(j=1;j<=num;j=j+1)
        {
            if(j>=x && y<z)
            {
                printf("*");
                y=y+1;
            }
            else
            {
                printf(" ");
        
            }
        }
        z=z-2;
        x=x+1;
        printf("\n");
    }
}