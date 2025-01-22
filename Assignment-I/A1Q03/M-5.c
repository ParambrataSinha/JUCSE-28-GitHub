// Using String Conversion and Array Indexing

#include <stdio.h>
#include <string.h>

int main()
{
    char num[4];    // 3 digits + 1 null character
    int sum = 0;    // Initialize sum to 0
    printf("\nEnter a three-digit number: ");
    scanf("%s", num);   // Read the number as a string

    for (int i = 0; i < strlen(num); i++)   // Loop through each character in the string
    {
        sum += num[i] - '0'; // Convert character to integer and add
    }

    printf("Sum of digits: %d\n\n", sum);
    return 0;
}
