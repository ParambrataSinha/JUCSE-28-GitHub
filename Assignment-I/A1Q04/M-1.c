// Using modulo operator

#include <stdio.h>

int main()
{
    int num;
    printf("\nEnter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("The number is even.\n\n");
    else
        printf("The number is odd.\n\n");

    return 0;
}
