

#include <stdio.h>

int main()
{
    int n;
    printf("\nEnter the value of n: ");
    scanf("%d", &n);

    printf("Numbers divisible by %d between 1 and 100 are:\n", n);
    for (int i = 1; i <= 100; i++)
    {
        if (i % n == 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n\n");
    return 0;
}