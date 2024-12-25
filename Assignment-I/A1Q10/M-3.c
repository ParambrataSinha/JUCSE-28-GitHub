// Using Array Indexing and Modulo Operator

#include <stdio.h>

int main()
{
    int amount, denominations[] = {100, 50, 10}, notes[3];
    printf("\nEnter the amount to withdraw: ");
    scanf("%d", &amount);

    for (int i = 0; i < 3; i++)
    {
        notes[i] = amount / denominations[i];
        amount %= denominations[i];
    }

    printf("100s: %d, 50s: %d, 10s: %d\n\n", notes[0], notes[1], notes[2]);
    return 0;
}
