// Using Pointers and a Function

#include <stdio.h>

void swap(int *x, int *y)   // Function to swap two numbers
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a, b;
    printf("\nEnter two numbers: ");
    scanf("%d %d", &a, &b);

    // Swapping using pointers
    swap(&a, &b);

    // Result
    printf("After swapping: a = %d, b = %d\n\n", a, b);
    return 0;
}
