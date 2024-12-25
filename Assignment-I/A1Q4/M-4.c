// Using String Conversion and Array Indexing

#include <stdio.h>
#include <string.h>

int main()
{
    char num_str[20]; // 19 digits + 1 null character
    printf("\nEnter a number: ");
    scanf("%s", num_str); // Read the number as a string

    printf("The number is ");

    int last_digit = num_str[strlen(num_str) - 1] - '0'; // Get the last digit
    if (last_digit % 2 == 0)                             // Check if the last digit is even
        printf("even.\n\n");
    else
        printf("odd.\n\n");

    return 0;
}
