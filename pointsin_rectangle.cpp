#include <stdio.h>

int main() 
{
    int T;
    scanf("%d", &T);

    while (T!=0) 
    {
        int x1, y1, x2, y2;
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

        int N;
        scanf("%d", &N);

        int count = 0;
        while (N!=0) 
        {
            int X, Y;
            scanf("%d %d", &X, &Y);

            if (X > x1 && X < x2 && Y > y1 && Y < y2) 
            {
                count++;
            }
            N--;
        }

        printf("%d\n", count);
        T--;
    }

    return 0;
}