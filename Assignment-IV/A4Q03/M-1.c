
#include <stdio.h>

int main()
{
    char str[100];
    printf("\nEnter a string: ");
    fgets(str, 100, stdin);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
    }

    printf("Uppercase string: %s\n", str);
    return 0;
}