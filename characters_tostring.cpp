#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d", &N);

    char *list = (char *)malloc(N * sizeof(char));

    for (int i = 0; i < N; i++) 
    {
        scanf(" %c", &list[i]);
    }
    list[N] = '\0';
    printf("%s\n", list);
    return 0;
}