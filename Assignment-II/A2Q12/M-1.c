

#include <stdio.h>

int main()
{
    int n;
    printf("\nEnter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", n, i, n * i);
    }
    printf("\n");
    
    return 0;
}