// Using Ternary Operator

#include <stdio.h>

int main()
{
    int num;
    printf("\nEnter a number: ");
    scanf("%d", &num);

    printf("The number is ");
    (num % 2 == 0) ? printf("even.\n\n") : printf("odd.\n\n");

    return 0;
}
