

#include <stdio.h>

int main()
{
    int i = 0;
    printf("\nASCII values and their characters:\n");
    while (i <= 255)
    {
        printf("%d %c %c\n\n", i, 26, i);   // %c of 26 is printed to get right arrow symbol
        i++;
    }
    return 0;
}