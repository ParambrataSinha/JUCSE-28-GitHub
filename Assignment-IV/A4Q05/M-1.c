
#include <stdio.h>

int stringToInt(char str[])
{
    int num = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        num = num * 10 + (str[i] - '0');
    }
    return num;
}

int main()
{
    char str[100];
    printf("\nEnter a string of digits: ");
    scanf("%s", str);

    printf("Integer value: %d\n\n", stringToInt(str));
    return 0;
}