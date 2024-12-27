#include <stdio.h>

int superDigit(char *n, int k) {
    if (n[0] == '\0' || n[1] == '\0') {
        return n[0] - '0';
    }
    
    
    int sum = 0;
    for (int i = 0; n[i] != '\0'; i++) {
        sum += n[i] - '0';
    }

    
    char sumStr[100];
    sprintf(sumStr, "%d", sum);
    
    return superDigit(sumStr, 1);
}

int main() 
{
    char n[100];
    int k;
    
    scanf("%s %d", n, &k);
    
    int result = superDigit(n, k);
    
    printf("%d\n", result);
    
    return 0;}