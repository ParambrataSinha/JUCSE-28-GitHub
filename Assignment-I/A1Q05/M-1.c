// Using if statement (not simplified fraction)

#include <stdio.h>

int main()
{
    int num1, num2;
    printf("\nEnter two integers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 < num2)
    {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    printf("\nFraction: %d/%d\n", num1, num2);
    printf("Decimal: %.2f\n\n", (float)num1 / num2);

    return 0;
}
