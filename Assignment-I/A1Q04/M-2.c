// Using Division Operator

#include <stdio.h>

int main()
{
    int num;
    printf("\nEnter a number: ");
    scanf("%d", &num);

    if ((num / 2) * 2 == num) // Check if the number is divisible by 2
        printf("The number is even.\n\n");
    else
        printf("The number is odd.\n\n");

    return 0;
}
