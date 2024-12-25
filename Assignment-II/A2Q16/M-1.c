

#include <stdio.h>

int main()
{
    int n, first = 0, second = 1;
    long long unsigned next;
    printf("\nEnter the number of terms: ");
    scanf("%d", &n);

    // Special cases for when n is 1 or 2
    if (n >= 1)
    {
        printf("Fibonacci Sequence:\n");
        printf("%d ", first); // Print the first term (0)
    }
    if (n >= 2)
    {
        printf("%d ", second); // Print the second term (1)
    }

    // Generate Fibonacci sequence for n > 2
    for (int i = 2; i < n; i++)
    {
        next = first + second;
        first = second;
        second = next;
        printf("%llu ", next);
    }

    printf("\n\n");
    return 0;
}
