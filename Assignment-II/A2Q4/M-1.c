

#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("\nEnter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    printf("Sum of the series: %d\n\n", sum);
    return 0;
}