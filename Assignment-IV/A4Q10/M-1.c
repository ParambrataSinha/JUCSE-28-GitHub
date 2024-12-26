
#include <stdio.h>

void reverseWord(char str[], int start, int end)
{
    while (start < end)
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

void reverseWords(char str[])
{
    int start = 0, end = 0;

    while (str[end] != '\0')
    {
        if (str[end] == ' ' || str[end] == '\n')
        {
            reverseWord(str, start, end - 1);
            start = end + 1;
        }
        end++;
    }
    reverseWord(str, start, end - 1); // Reverse the last word
}

int main()
{
    char str[100];
    printf("\nEnter a string: ");
    fgets(str, 100, stdin);

    reverseWords(str);
    printf("String with reversed words: %s\n", str);
    return 0;
}