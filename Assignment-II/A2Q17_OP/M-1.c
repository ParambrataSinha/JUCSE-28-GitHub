#include <stdio.h>

int main()
{
    printf("\nArmstrong numbers between 1 and 500:\n");

    for (int num = 1; num <= 500; num++)
    {
        int sum = 0, temp = num;
        while (temp > 0)    // Loop to calculate the sum of cubes of digits
        {
            int digit = temp % 10;  // Extract the last digit
            sum += digit * digit * digit;   // Add the cube of the digit to sum
            temp /= 10; // Remove the last digit
        }
        if (sum == num) // If the sum of cubes of digits is equal to the number itself
            printf("%d ", num);
    }
    printf("\n\n");
    return 0;
}
