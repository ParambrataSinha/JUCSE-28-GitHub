// Using Recursion

#include <stdio.h>

void swapRecursive(int *x, int *y, int depth)   // Recursive function to swap two numbers
{
    if (depth == 0)
        return;
    int temp = *x;
    *x = *y;
    *y = temp;
    swapRecursive(x, y, depth - 1); // Recursive call with depth - 1
}

int main()
{
    int a, b;
    printf("\nEnter two numbers: ");
    scanf("%d %d", &a, &b);

    // Swapping using recursion
    swapRecursive(&a, &b, 1);

    // Result
    printf("After swapping: a = %d, b = %d\n\n", a, b);
    return 0;
}
