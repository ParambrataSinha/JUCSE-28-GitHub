// Using Pointers only

#include <stdio.h>

void swap(int *x, int *y)
{
    int temp = *x; // Store the value of x in temp
    *x = *y;       // Assign the value of y to x
    *y = temp;     // Assign the value of temp (original x) to y
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
