

#include <stdio.h>

int main()
{
    int num, reverse = 0;
    printf("\nEnter a number: ");
    scanf("%d", &num);

    while (num > 0)
    {
        reverse = reverse * 10 + num % 10;
        num /= 10;
    }

    printf("Reversed number: %d\n\n", reverse);
    return 0;
}