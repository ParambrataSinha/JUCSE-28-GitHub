

#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("\nEnter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)    // 1 is a factor of all numbers
    {
        int factor_sum = 0;
        for (int j = 1; j <= i; j++)    // finding factors of i
        {
            if (i % j == 0) // if j is a factor of i
            {
                factor_sum += j;    // adding factors
            }
        }
        sum += factor_sum;
    }

    printf("Sum of the series: %d\n\n", sum);
    return 0;
}