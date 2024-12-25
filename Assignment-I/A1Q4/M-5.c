// Using Function

#include <stdio.h>

int is_even(int num)    // Function to check if a number is even
{
    return num % 2 == 0; // Returns 1 if even, 0 if odd
}

int main()
{
    int num;
    printf("\nEnter a number: ");
    scanf("%d", &num);

    printf("The number is ");

    if (is_even(num))
        printf("even.\n\n");
    else
        printf("odd.\n\n");

    return 0;
}
