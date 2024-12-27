#include <stdio.h>
#include <ctype.h>

void removeNonAlphabets(char *str) {
    int i, j;
    for (i = 0, j = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}

int main() 
{
    int t;
    scanf("%d", &t);
    while (t!=0) 
    {
        char str[100];
        scanf("%s", str);
        removeNonAlphabets(str);
        if (str[0] == '\0') {
            printf("-1\n");
        } else {
            printf("%s\n", str);
        }
        t--;
    }
    return 0;
}