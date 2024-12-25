#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// Function to convert binary to decimal
int binary_to_decimal(char binary[])
{
    int decimal = 0;
    int base = 1;
    int length = strlen(binary);
    for (int i = length - 1; i >= 0; i--)
    {
        if (binary[i] == '1')
        {
            decimal += base;
        }
        base *= 2;
    }
    return decimal;
}

// Function to convert decimal to binary
void decimal_to_binary(int decimal)
{
    int binary[32];
    int index = 0;
    while (decimal > 0)
    {
        binary[index] = decimal % 2;
        decimal /= 2;
        index++;
    }
    printf("Binary: ");
    for (int i = index - 1; i >= 0; i--)
    {
        printf("%d", binary[i]);
    }
    printf("\n");
}

// Function to convert decimal to octal
void decimal_to_octal(int decimal)
{
    int octal[32];
    int index = 0;
    while (decimal > 0)
    {
        octal[index] = decimal % 8;
        decimal /= 8;
        index++;
    }
    printf("Octal: ");
    for (int i = index - 1; i >= 0; i--)
    {
        printf("%d", octal[i]);
    }
    printf("\n");
}

// Function to convert decimal to hexadecimal
void decimal_to_hexadecimal(int decimal)
{
    char hex[32];
    int index = 0;
    while (decimal > 0)
    {
        int remainder = decimal % 16;
        if (remainder < 10)
        {
            hex[index] = remainder + '0';
        }
        else
        {
            hex[index] = remainder - 10 + 'A';
        }
        decimal /= 16;
        index++;
    }
    printf("Hexadecimal: ");
    for (int i = index - 1; i >= 0; i--)
    {
        printf("%c", hex[i]);
    }
    printf("\n");
}

// Function to convert octal to decimal
int octal_to_decimal(char octal[])
{
    int decimal = 0;
    int base = 1;
    int length = strlen(octal);
    for (int i = length - 1; i >= 0; i--)
    {
        if (octal[i] >= '0' && octal[i] <= '7')
        {
            decimal += (octal[i] - '0') * base;
        }
        base *= 8;
    }
    return decimal;
}

// Function to convert hexadecimal to decimal
int hex_to_decimal(char hex[])
{
    int decimal = 0;
    int base = 1;
    int length = strlen(hex);
    for (int i = length - 1; i >= 0; i--)
    {
        if (hex[i] >= '0' && hex[i] <= '9')
        {
            decimal += (hex[i] - '0') * base;
        }
        else if (hex[i] >= 'A' && hex[i] <= 'F')
        {
            decimal += (hex[i] - 'A' + 10) * base;
        }
        base *= 16;
    }
    return decimal;
}

int main()
{
    int input_format, decimal_value;
    char number[32];
    int output_format;

    // Display menu for input
    printf("\nMenu:\nWhat is your input number format?\n");
    printf("\t1. Binary number\n");
    printf("\t2. Decimal number\n");
    printf("\t3. Octal number\n");
    printf("\t4. Hexadecimal number\n");
    printf("Enter your input format: ");
    scanf("%d", &input_format);

    // Ask for the output format
    printf("Choose the format(s) to display the result:\n");
    printf("\t1. Binary\n");
    printf("\t2. Decimal\n");
    printf("\t3. Octal\n");
    printf("\t4. Hexadecimal\n");
    printf("\t5. All formats\n");
    printf("Enter your output format: ");
    scanf("%d", &output_format);

    switch (input_format)
    {
    case 1:
        // Binary to other systems
        printf("\nEnter a binary number: ");
        scanf("%s", number);
        printf("\n");
        decimal_value = binary_to_decimal(number);
        if (output_format == 1 || output_format == 5)
            decimal_to_binary(decimal_value);
        if (output_format == 2 || output_format == 5)
            printf("Decimal: %d\n", decimal_value);
        if (output_format == 3 || output_format == 5)
            decimal_to_octal(decimal_value);
        if (output_format == 4 || output_format == 5)
            decimal_to_hexadecimal(decimal_value);
        break;

    case 2:
        // Decimal to other systems
        printf("\nEnter a decimal number: ");
        scanf("%d", &decimal_value);
        printf("\n");
        if (output_format == 1 || output_format == 5)
            decimal_to_binary(decimal_value);
        if (output_format == 2 || output_format == 5)
            printf("Decimal: %d\n", decimal_value);
        if (output_format == 3 || output_format == 5)
            decimal_to_octal(decimal_value);
        if (output_format == 4 || output_format == 5)
            decimal_to_hexadecimal(decimal_value);
        break;

    case 3:
        // Octal to other systems
        printf("\nEnter an octal number: ");
        scanf("%s", number);
        printf("\n");
        decimal_value = octal_to_decimal(number);
        if (output_format == 1 || output_format == 5)
            decimal_to_binary(decimal_value);
        if (output_format == 2 || output_format == 5)
            printf("Decimal: %d\n", decimal_value);
        if (output_format == 3 || output_format == 5)
            decimal_to_octal(decimal_value);
        if (output_format == 4 || output_format == 5)
            decimal_to_hexadecimal(decimal_value);
        break;

    case 4:
        // Hexadecimal to other systems
        printf("\nEnter a hexadecimal number: ");
        scanf("%s", number);
        printf("\n");
        decimal_value = hex_to_decimal(number);
        if (output_format == 1 || output_format == 5)
            decimal_to_binary(decimal_value);
        if (output_format == 2 || output_format == 5)
            printf("Decimal: %d\n", decimal_value);
        if (output_format == 3 || output_format == 5)
            decimal_to_octal(decimal_value);
        if (output_format == 4 || output_format == 5)
            decimal_to_hexadecimal(decimal_value);
        break;

    default:
        printf("\nInvalid input_format. Please try again.\n");
    }
    printf("\n");

    return 0;
}
