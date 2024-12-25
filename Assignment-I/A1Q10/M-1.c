// Using Modulo Operator & Simple I/O and Arithmetic

#include <stdio.h>

int main()
{
    int amount, notes100, notes50, notes10;
    printf("\nEnter the amount to withdraw: ");
    scanf("%d", &amount);

    notes100 = amount / 100;
    amount %= 100;
    notes50 = amount / 50;
    amount %= 50;
    notes10 = amount / 10;

    printf("100s: %d, 50s: %d, 10s: %d\n\n", notes100, notes50, notes10);
    return 0;
}