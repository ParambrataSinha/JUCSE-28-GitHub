// Using Pointers and Functions

#include <stdio.h>

void calculate_notes(int *amount, int *notes100, int *notes50, int *notes10)
{
    *notes100 = *amount / 100;
    *amount %= 100;
    *notes50 = *amount / 50;
    *amount %= 50;
    *notes10 = *amount / 10;
}

int main()
{
    int amount, notes100, notes50, notes10;
    printf("\nEnter the amount to withdraw: ");
    scanf("%d", &amount);

    calculate_notes(&amount, &notes100, &notes50, &notes10);

    printf("100s: %d, 50s: %d, 10s: %d\n\n", notes100, notes50, notes10);
    return 0;
}
