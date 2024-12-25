// Using ternary operator (not simplified fraction)

#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Swap using a ternary operator
    num1 = (num1 < num2) ? (num1 + num2 - (num2 = num1)) : num1;

    printf("Fraction: %d/%d\n", num1, num2);
    printf("Decimal: %.2f\n", (float)num1 / num2);

    return 0;
}
