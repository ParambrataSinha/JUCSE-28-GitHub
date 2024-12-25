// Using Field Width

#include <stdio.h>

int main()
{
    int d1, d2, d3;
    printf("\nEnter a three-digit number: ");
    scanf("%1d%1d%1d", &d1, &d2, &d3); // Read each digit separately using field width

    int sum = d1 + d2 + d3; // Calculate the sum of the digits

    printf("Sum of digits: %d\n\n", sum);
    return 0;
}
