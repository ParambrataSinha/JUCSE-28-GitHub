// Using In-line Calculation in printf

#include <stdio.h>

int main()
{
    float fahrenheit;
    printf("\nEnter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    printf("Temperature in Centigrade: %.2f\n\n", (fahrenheit - 32) * 5 / 9);

    return 0;
}
