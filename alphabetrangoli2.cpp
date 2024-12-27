/*#include <stdio.h>
 
int main()
{
    int number, i, k, count = 1;
 
    printf("Enter number of rows: \n");
    scanf("%d", &number);
    count = number - 1;
    for (k = 1; k <= number; k++)
    {
        for (i = 1; i <= count; i++)
            printf(" ");
        count--;
        for (i = 1; i <= 2 * k - 1; i++)
            printf("*");
        printf("\n");
     }
     count = 1;
     for (k = 1; k <= number - 1; k++)
     {
         for (i = 1; i <= count; i++)
             printf(" ");
         count++;
         for (i = 1 ; i <= 2 *(number - k)-  1; i++)
             printf("*");
         printf("\n");
      }
      return 0;
}*/
#include <stdio.h>

int main() {
    int size, i, j;

    printf("Enter the size of the pattern: ");
    scanf("%d", &size);

    for (i = 1; i <= size; i++) {
        for (j = 1; j <= size - i; j++) {
            printf("-");
        }

        for (j = 1; j <= i; j++) {
            printf("%c ", 'a' + i - j);
        }

        for (j = 2; j <= i; j++) {
            printf("%c ", 'a' + j - 1);
        }

        printf("\n");
    }

    for (i = size - 1; i >= 1; i--) {
        for (j = 1; j <= size - i; j++) {
            printf("-");
        }

        for (j = 1; j <= i; j++) {
            printf("%c ", 'a' + i - j);
        }

        for (j = 2; j <= i; j++) {
            printf("%c ", 'a' + j - 1);
        }

        printf("\n");
    }

    return 0;
}