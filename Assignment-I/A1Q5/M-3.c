// Using Temporary Variable and Swapping to obtain the simplified fraction.

#include <stdio.h>

// Function to calculate the GCD of two numbers
int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
    int num1, num2;
    printf("\nEnter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Ensure num1 is the larger number
    if (num1 < num2)
    {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    // Calculate GCD and simplify the fraction
    int divisor = gcd(num1, num2);
    num1 /= divisor;
    num2 /= divisor;

    printf("\nSimplified Fraction: %d/%d\n", num1, num2);
    printf("Decimal: %.2f\n\n", (float)num1 / num2);

    return 0;
}
