
#include <stdio.h>
#include <string.h>

int strend(char s[], char t[])
{
    int len_s = 0, len_t = 0;

    while (s[len_s] != '\0')
        len_s++;
    while (t[len_t] != '\0')
        len_t++;

    if (len_t > len_s)
        return 0;

    for (int i = 0; i < len_t; i++)
    {
        if (s[len_s - len_t + i] != t[i])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    char s[100], t[100];
    printf("\nEnter the main string: ");
    scanf("%s", s);
    printf("Enter the string to check: ");
    scanf("%s", t);

    if (strend(s, t))
    {
        printf("The string \"%s\" occurs at the end of \"%s\".\n", t, s);
    }
    else
    {
        printf("The string \"%s\" does not occur at the end of \"%s\".\n", t, s);
    }
    return 0;
}