#include <stdio.h>
#include <stdlib.h>

int main() {
    int size;
    printf("Enter the size of the list: ");
    scanf("%d", &size);

    char *list = (char *)malloc(size * sizeof(char));

    printf("Enter the characters:\n");
    for (int i = 0; i < size; i++) {
        scanf(" %c", &list[i]);
    }

    // Adding a null terminator at the end of the list
    list[size] = '\0';

    printf("The string is: %s\n", list);

    free(list);

    return 0;
}