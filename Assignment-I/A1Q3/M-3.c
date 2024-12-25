// Using While Loop

#include <stdio.h>

int main()
{
    int num, sum = 0;
    printf("\nEnter a three-digit number: ");
    scanf("%d", &num);

    while (num > 0)
    {                    // Loop until num becomes 0
        sum += num % 10; // Add the last digit
        num /= 10;       // Remove the last digit
    }

    printf("Sum of digits: %d\n\n", sum);
    return 0;
}
