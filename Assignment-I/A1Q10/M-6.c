// Using Functions and Structures

#include <stdio.h>

typedef struct
{
    int notes100;
    int notes50;
    int notes10;
} Notes;

Notes calculate_notes(int amount)
{
    Notes n;
    n.notes100 = amount / 100;
    amount %= 100;
    n.notes50 = amount / 50;
    amount %= 50;
    n.notes10 = amount / 10;
    return n;
}

int main()
{
    int amount;
    printf("\nEnter the amount to withdraw: ");
    scanf("%d", &amount);

    Notes notes = calculate_notes(amount);
    printf("100s: %d, 50s: %d, 10s: %d\n\n", notes.notes100, notes.notes50, notes.notes10);
    return 0;
}
