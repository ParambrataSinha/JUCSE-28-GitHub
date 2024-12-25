// Using Inline Calculation in printf

#include <stdio.h>

int main()
{
    int amount;
    printf("\nEnter the amount to withdraw: ");
    scanf("%d", &amount);

    printf("100s: %d, 50s: %d, 10s: %d\n\n",
           amount / 100,
           (amount % 100) / 50,
           ((amount % 100) % 50) / 10);
    return 0;
}
