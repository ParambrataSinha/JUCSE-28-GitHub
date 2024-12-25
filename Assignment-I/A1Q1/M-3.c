// Using Temporary Array and Swapping

#include <stdio.h>

int main()
{
    int a, b, temp[2];
    printf("\nEnter two numbers: ");
    scanf("%d %d", &a, &b);

    // Swapping using a temporary array
    temp[0] = a;
    temp[1] = b;
    a = temp[1];
    b = temp[0];

    // Result
    printf("After swapping: a = %d, b = %d\n\n", a, b);
    return 0;
}
