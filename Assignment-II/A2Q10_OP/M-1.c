

#include <stdio.h>

int main()
{
    int n;
    printf("\nEnter a number: ");
    scanf("%d", &n);

    printf("Prime factors of %d are: ", n);
    for (int i = 2; i <= n; i++)
    {
        while (n % i == 0)
        {
            printf("%d ", i);
            n /= i;
        }
    }
    printf("\n\n");
    return 0;
}
