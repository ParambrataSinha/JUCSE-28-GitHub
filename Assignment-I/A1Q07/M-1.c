// Using If-Else Ladder

#include <stdio.h>
int main()
{
    int a, b, c;
    printf("\nEnter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    float avg = (a + b + c) / 3.0;
    printf("Average: %.2f\n", avg);
    if (a == avg)
        printf("%d is the average number.\n", a);
    else if (a < avg)
        printf("%d is below average.\n", a);
    else
        printf("%d is above average.\n", a);
    if (b == avg)
        printf("%d is the average number.\n", b);
    else if (b < avg)
        printf("%d is below average.\n", b);
    else
        printf("%d is above average.\n", b);
    if (c == avg)
        printf("%d is the average number.\n\n", c);
    else if (c < avg)
        printf("%d is below average.\n\n", c);
    else
        printf("%d is above average.\n\n", c);
    return 0;
}