
#include <stdio.h>

void squeeze(char str[], char c)
{
    int i = 0, j = 0;

    while (str[i] != '\0')
    {
        if (str[i] != c)
        {
            str[j++] = str[i];
        }
        i++;
    }
    str[j] = '\0';
}

int main()
{
    char str[100], c;
    printf("\nEnter a string: ");
    fgets(str, 100, stdin);
    printf("Enter the character to remove: ");
    scanf(" %c", &c);

    squeeze(str, c);
    printf("Modified string: %s\n", str);
    return 0;
}