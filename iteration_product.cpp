#include <stdio.h>

int main() 
{
    int list1[100], list2[100], p[100][2];
    int size1, size2, psize = 0;
    printf("Enter the size of the first list: ");
    scanf("%d", &size1);
    printf("Enter the elements of the first list: ");
    for (int i = 0; i < size1; i++) 
    {
        scanf("%d", &list1[i]);
    }
    printf("Enter the size of the second list: ");
    scanf("%d", &size2);
    printf("Enter the elements of the second list: ");
    for (int i = 0; i < size2; i++) 
    {
        scanf("%d", &list2[i]);
    }
    for (int i = 0; i < size1; i++) 
    {
        for (int j = 0; j < size2; j++) 
        {
            p[psize][0] = list1[i];
            p[psize][1] = list2[j];
            psize++;
        }
    }
    printf("Cartesian Product:\n");
    for (int i = 0; i < psize; i++) 
    {
        printf("(%d, %d)\n", p[i][0], p[i][1]);
    }

    return 0;
}