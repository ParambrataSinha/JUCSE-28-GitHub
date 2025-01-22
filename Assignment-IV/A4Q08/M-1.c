
#include <stdio.h>

int isPalindrome(char str[])
{
    int start = 0, end = 0;

    while (str[end] != '\0')
    {
        end++;
    }
    end--; // Adjust for null character

    while (start < end)
    {
        if (str[start] != str[end])
        {
            return 0;
        }
        start++;
        end--;
    }
    return 1;
}

int main()
{
    char str[100];
    printf("\nEnter a string: ");
    scanf("%s", str);

    if (isPalindrome(str))
    {
        printf("The string is a palindrome.\n\n");
    }
    else
    {
        printf("The string is not a palindrome.\n\n");
    }
    return 0;
}