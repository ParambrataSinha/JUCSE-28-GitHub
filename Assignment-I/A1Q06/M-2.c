// Using nested if-else

#include <stdio.h>

int main()
{
    int a, b, c, max, min;
    printf("\nEnter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c)
        max = a;
    else if (b > c)
        max = b;
    else
        max = c;

    if (a < b && a < c)
        min = a;
    else if (b < c)
        min = b;
    else
        min = c;

    printf("Maximum: %d \nMinimum: %d\n", max, min);
    return 0;
}
