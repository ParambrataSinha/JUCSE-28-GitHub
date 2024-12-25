

#include <stdio.h>

int main()
{
    int n;
    unsigned long long factorial = 1;
    printf("\nEnter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }

    printf("Factorial: %llu\n\n", factorial);
    return 0;
}