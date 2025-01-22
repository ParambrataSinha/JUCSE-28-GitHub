// Using Simple I/O and Arithmetic

#include <stdio.h>

int main()
{
    float fahrenheit, centigrade;
    printf("\nEnter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    centigrade = (fahrenheit - 32) * 5 / 9;
    printf("Temperature in Centigrade: %.2f\n\n", centigrade);

    return 0;
}