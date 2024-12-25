

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     int choice, num;
//     printf("\nChoose the input number system:\n");
//     printf("\t1. Binary\n\t2. Decimal\n\t3. Octal\n\t4. Hexadecimal\n");
//     scanf("%d", &choice);

//     printf("Enter the number: ");
//     if (choice == 1)
//     {
//         scanf("%d", &num);
//         printf("Decimal: %d\n", strtol((char[]){num, '\0'}, NULL, 2));
//     }
//     else if (choice == 2)
//     {
//         scanf("%d", &num);
//         printf("Binary: ");
//         for (int i = 31; i >= 0; i--)
//         {
//             printf("%d", (num >> i) & 1);
//         }
//         printf("\n");
//     }
//     else if (choice == 3)
//     {
//         scanf("%o", &num);
//         printf("Decimal: %d\n", num);
//     }
//     else if (choice == 4)
//     {
//         scanf("%x", &num);
//         printf("Decimal: %d\n", num);
//     }
//     else
//     {
//         printf("Invalid choice!\n");
//     }
//     printf("\n");

//     return 0;
// }
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
    int choice, decimal_value;
    char number[32];

    do
    {
        // Display menu
        printf("\nMenu:\nWhat is your input number format?\n");
        printf("\t1. Binary number\n");
        printf("\t2. Decimal number\n");
        printf("\t3. Octal number\n");
        printf("\t4. Hexadecimal number\n");
        printf("\t5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            // Binary to other systems
            printf("\nEnter a binary number: ");
            scanf("%s", number);
            decimal_value = binary_to_decimal(number);
            printf("\nDecimal: %d\n", decimal_value);
            decimal_to_octal(decimal_value);
            decimal_to_hexadecimal(decimal_value);
            break;

        case 2:
            // Decimal to other systems
            printf("\nEnter a decimal number: ");
            scanf("%d", &decimal_value);
            printf("\n");
            decimal_to_binary(decimal_value);
            decimal_to_octal(decimal_value);
            decimal_to_hexadecimal(decimal_value);
            break;

        case 3:
            // Octal to other systems
            printf("\nEnter an octal number: ");
            scanf("%s", number);
            decimal_value = octal_to_decimal(number);
            printf("\nDecimal: %d\n", decimal_value);
            decimal_to_binary(decimal_value);
            decimal_to_hexadecimal(decimal_value);
            break;

        case 4:
            // Hexadecimal to other systems
            printf("\nEnter a hexadecimal number: ");
            scanf("%s", number);
            decimal_value = hex_to_decimal(number);
            printf("\nDecimal: %d\n", decimal_value);
            decimal_to_binary(decimal_value);
            decimal_to_octal(decimal_value);
            break;

        case 5:
            // Exit
            printf("\nExiting program.\n");
            break;

        default:
            printf("\nInvalid choice. Please try again.\n");
        }
        break;
    } while (choice != 5);

    printf("\n");

    return 0;
}
