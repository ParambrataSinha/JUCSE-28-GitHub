#include <stdio.h>

int main()
{
    int n;
    unsigned long long factorial, sum = 0;
    printf("\nEnter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        factorial = 1;
        for (int j = 1; j <= i; j++)
        {
            factorial *= j;
        }
        sum += factorial;
    }

    printf("Sum of the series: %llu\n\n", sum);
    return 0;
}
