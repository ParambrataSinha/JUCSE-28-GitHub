
#include <stdio.h>

int countWords(char str[])
{
    int count = 0, inWord = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
        {
            inWord = 0;
        }
        else if (!inWord)
        {
            inWord = 1;
            count++;
        }
    }
    return count;
}

int main()
{
    char str[100];
    printf("\nEnter a string: ");
    fgets(str, 100, stdin);

    printf("Number of words: %d\n\n", countWords(str));
    return 0;
}