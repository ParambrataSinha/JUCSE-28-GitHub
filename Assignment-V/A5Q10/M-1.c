#include <stdio.h>
#include <stdint.h>
#include <math.h>

// Function to print binary representation with grouping
void printBinary(uint64_t num, int bits)
{
    for (int i = bits - 1; i >= 0; i--)
    {
        printf("%d", (num >> i) & 1);
        if (i % 4 == 0)
        { // Add a space every 4 bits for readability
            printf(" ");
        }
    }
}

// Function to print binary representation of a float (IEEE 754 single precision)
void printFloatRepresentation(float number)
{
    // Special cases for Infinity, NaN, Zero
    if (isnan(number))
    {
        printf("The number is NaN (Not a Number).\n");
        return;
    }
    if (isinf(number))
    {
        printf("The number is Infinity.\n");
        return;
    }
    if (number == 0)
    {
        printf("The number is Zero.\n");
        return;
    }

    // Interpret the float as an integer using a union
    union
    {
        float f;
        uint32_t i;
    } u;
    u.f = number;

    // Extract the sign, exponent, and mantissa
    int sign = (u.i >> 31) & 0x1;
    int exponent = (u.i >> 23) & 0xFF;
    int mantissa = u.i & 0x7FFFFF;

    // Print the results
    printf("Floating-point number: %f\n", number);
    printf("Binary representation (IEEE 754):\n");
    printf("Sign: %d\n", sign);
    printf("Exponent: %d (raw value: %d)\n", exponent - 127, exponent);
    printf("Mantissa (Hexadecimal): 0x%X\n", mantissa);
    printf("Mantissa (Binary): ");
    printBinary(mantissa, 23); // Group the bits for easier reading
    printf("\n");
}

// Function to print binary representation of a double (IEEE 754 double precision)
void printDoubleRepresentation(double number)
{
    // Special cases for Infinity, NaN, Zero
    if (isnan(number))
    {
        printf("The number is NaN (Not a Number).\n");
        return;
    }
    if (isinf(number))
    {
        printf("The number is Infinity.\n");
        return;
    }
    if (number == 0)
    {
        printf("The number is Zero.\n");
        return;
    }

    // Interpret the double as an integer using a union
    union
    {
        double d;
        uint64_t i;
    } u;
    u.d = number;

    // Extract the sign, exponent, and mantissa
    int sign = (u.i >> 63) & 0x1;
    int exponent = (u.i >> 52) & 0x7FF;
    uint64_t mantissa = u.i & 0xFFFFFFFFFFFFF;

    // Print the results
    printf("Floating-point number: %lf\n", number);
    printf("Binary representation (IEEE 754):\n");
    printf("Sign: %d\n", sign);
    printf("Exponent: %d (raw value: %d)\n", exponent - 1023, exponent);
    printf("Mantissa (Hexadecimal): 0x%lX\n", mantissa);
    printf("Mantissa (Binary): ");
    printBinary(mantissa, 52); // Group the bits for easier reading
    printf("\n");
}

int main()
{
    int choice;
    printf("Select precision:\n1. Single Precision (float)\n2. Double Precision (double)\n");
    scanf("%d", &choice);

    if (choice == 1)
    {
        float number;
        printf("Enter a single precision floating-point number: ");
        if (scanf("%f", &number) != 1)
        {
            printf("Invalid input. Please enter a valid floating-point number.\n");
            return 1;
        }
        printFloatRepresentation(number);
    }
    else if (choice == 2)
    {
        double number;
        printf("Enter a double precision floating-point number: ");
        if (scanf("%lf", &number) != 1)
        {
            printf("Invalid input. Please enter a valid floating-point number.\n");
            return 1;
        }
        printDoubleRepresentation(number);
    }
    else
    {
        printf("Invalid choice.\n");
        return 1;
    }

    return 0;
}
