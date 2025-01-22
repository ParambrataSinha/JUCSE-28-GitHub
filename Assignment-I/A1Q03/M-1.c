// Using Modulus Operator

#include <stdio.h>

int main()
{
    int num, sum = 0;
    printf("\nEnter a three-digit number: ");
    scanf("%d", &num);

    sum += num % 10; // Add the last digit
    num /= 10;       // Remove the last digit
    sum += num % 10; // Add the next digit
    num /= 10;       // Remove the next digit
    sum += num;      // Add the remaining digit

    printf("Sum of digits: %d\n\n", sum);
    return 0;
}
