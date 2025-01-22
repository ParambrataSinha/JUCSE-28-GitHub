
#include <stdio.h>

void intToString(int num, char str[])
{
    int i = 0, isNegative = 0;

    if (num < 0)
    {
        isNegative = 1;
        num = -num;
    }

    do
    {
        str[i++] = (num % 10) + '0';
        num /= 10;
    } while (num > 0);

    if (isNegative)
    {
        str[i++] = '-';
    }

    str[i] = '\0';

    // Reverse the string
    for (int j = 0, k = i - 1; j < k; j++, k--)
    {
        char temp = str[j];
        str[j] = str[k];
        str[k] = temp;
    }
}

int main()
{
    int num;
    char str[20];
    printf("\nEnter an integer: ");
    scanf("%d", &num);

    intToString(num, str);
    printf("String representation: %s\n\n", str);
    return 0;
}