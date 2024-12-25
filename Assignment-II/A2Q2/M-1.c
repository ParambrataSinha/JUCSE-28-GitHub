

#include <stdio.h>

int main()
{
    int num, sum = 0;
    printf("\nEnter a number: ");
    scanf("%d", &num);

    while (num > 0)
    {
        sum += num % 10; // Add last digit
        num /= 10;       // Remove last digit
    }

    printf("Sum of digits: %d\n\n", sum);
    return 0;
}