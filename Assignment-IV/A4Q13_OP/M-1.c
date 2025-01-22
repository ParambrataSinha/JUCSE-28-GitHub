
#include <stdio.h>
#include <string.h>

void convert(int n, char *s, int w)
{
    int i = 0, isNegative = 0;

    if (n < 0)
    {
        isNegative = 1;
        n = -n;
    }

    do
    {
        s[i++] = (n % 10) + '0';
        n /= 10;
    } while (n > 0);

    if (isNegative)
    {
        s[i++] = '-';
    }

    while (i < w)
    {
        s[i++] = ' ';
    }

    s[i] = '\0';

    for (int j = 0, k = i - 1; j < k; j++, k--)
    {
        char temp = s[j];
        s[j] = s[k];
        s[k] = temp;
    }
}

int main()
{
    int n, w;
    char s[50];
    printf("\nEnter an integer: ");
    scanf("%d", &n);
    printf("Enter minimum field width: ");
    scanf("%d", &w);

    convert(n, s, w);
    printf("Converted string: \"%s\"\n\n", s);
    return 0;
}