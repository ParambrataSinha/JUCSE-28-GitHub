

#include <stdio.h>

int is_happy(int num)
{
    int seen[100] = {0}; // Array to detect cycles
    while (num != 1 && !seen[num])
    {
        seen[num] = 1;
        int sum = 0;
        while (num > 0)
        {
            int digit = num % 10;
            sum += digit * digit;
            num /= 10;
        }
        num = sum;
    }
    return num == 1;
}

int main()
{
    int count = 0, num = 1;

    printf("\nFirst 10 happy numbers:\n");
    while (count < 10)
    {
        if (is_happy(num))
        {
            printf("%d ", num);
            count++;
        }
        num++;
    }
    printf("\n\n");
    return 0;
}