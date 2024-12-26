
#include <stdio.h>
#include <string.h>

int isVowel(char ch)
{
    ch = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch; // Convert to lowercase
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main()
{
    char str[100];
    int count = 0;

    printf("\nEnter a line of text: ");
    fgets(str, 100, stdin);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (isVowel(str[i]) && isVowel(str[i + 1]))
        {
            count++;
        }
    }

    printf("Number of successive vowels: %d\n\n", count);
    return 0;
}