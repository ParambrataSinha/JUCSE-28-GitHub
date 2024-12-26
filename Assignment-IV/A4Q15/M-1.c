
#include <stdio.h>

void appendFromIndex(char str1[], char str2[], char str3[], int i)
{
    int k = 0;

    // Copy characters from str1 up to index i
    for (int j = 0; j < i && str1[j] != '\0'; j++)
    {
        str3[k++] = str1[j];
    }

    // Append str2
    for (int j = 0; str2[j] != '\0'; j++)
    {
        str3[k++] = str2[j];
    }

    str3[k] = '\0';
}

int main()
{
    char str1[100], str2[100], str3[200];
    int i;
    printf("\nEnter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);
    printf("Enter the index from which to append: ");
    scanf("%d", &i);

    appendFromIndex(str1, str2, str3, i);
    printf("Resultant string: %s\n\n", str3);
    return 0;
}