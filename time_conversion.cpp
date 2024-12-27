#include <stdio.h>

int main() {
    int hours, minutes;
    char period;

    printf("Enter the time in 12-hour format (HH:MM AM/PM): ");
    scanf("%d:%d %c", &hours, &minutes, &period);
    if (period == 'P' || period == 'p') 
    {
        if (hours != 12) 
        {
            hours += 12;
        }
    } else if (period == 'A' || period == 'a') 
    {
        if (hours == 12) 
        {
            hours = 0;
        }
    }

    printf("The time in military format is: %d:%d\n", hours, minutes);

    return 0;
}