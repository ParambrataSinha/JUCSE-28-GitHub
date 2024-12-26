
#include <stdio.h>

void printBinary(int n)
{
    if (n > 1)
    {
        printBinary(n / 2);
    }
    printf("%d", n % 2);
}

int main()
{
    int num;
    printf("\nEnter a positive integer: ");
    scanf("%d", &num);

    printf("Binary equivalent: ");
    printBinary(num);
    printf("\n\n");
    return 0;
}