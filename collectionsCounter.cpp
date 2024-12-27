#include <stdio.h>

int main() 
{
    int X, N, revenue=0; // Number of shoes in the shop
    scanf("%d", &X);
    int sizes[X]; // Array to store sizes of shoes
    for (int i = 0; i < X; i++) 
    {
        scanf("%d", &sizes[i]);
    }
     scanf("%d", &N);// Number of customers

    for (int i = 0; i < N; i++) 
    {
        int desiredSize, price;
        scanf("%d%d", &desiredSize, &price);
        for (int j = 0; j < X; j++) 
        {
            if (sizes[j] == desiredSize) 
            {
                revenue += price;
                sizes[j] = 0; 
                break;
            }
        }
    }

    printf("%d\n", revenue);

    return 0;
}