#include <stdio.h>

int gcd(int a, int b) 
{
    if (b == 0) 
    {
        return a;
    }
    return gcd(b, a % b);
}

void reduceFraction(int a, int b) 
{
    int gcdValue = gcd(a, b);
    int numerator = a / gcdValue;
    int denominator = b / gcdValue;
    printf("%d/%d\n", numerator, denominator);
}

int main() 
{
    int t;
    scanf("%d", &t);
    
    while (t!=0) 
    {
        int a, b;
        scanf("%d%d", &a, &b);
        reduceFraction(a, b);
        t--;
    }
    
    return 0;
}