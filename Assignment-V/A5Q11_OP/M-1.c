#include <stdio.h>
#include <ctype.h>

void countDataTypes(FILE *source)
{
    char ch;
    int intCount = 0, floatCount = 0, charCount = 0, doubleCount = 0;
    int inWord = 0;
    char word[100];
    int wordIndex = 0;

    while ((ch = fgetc(source)) != EOF)
    {
        if (isalpha(ch))
        {
            // Building the word (data type name)
            word[wordIndex++] = ch;
            inWord = 1;
        }
        else
        {
            if (inWord)
            {
                word[wordIndex] = '\0'; // Null-terminate the word
                wordIndex = 0;
                inWord = 0;

                // Check if the word matches any data type
                if (strcmp(word, "int") == 0)
                {
                    intCount++;
                }
                else if (strcmp(word, "float") == 0)
                {
                    floatCount++;
                }
                else if (strcmp(word, "char") == 0)
                {
                    charCount++;
                }
                else if (strcmp(word, "double") == 0)
                {
                    doubleCount++;
                }
            }
        }
    }

    // Print the counts of each data type
    printf("int: %d\n", intCount);
    printf("float: %d\n", floatCount);
    printf("char: %d\n", charCount);
    printf("double: %d\n", doubleCount);
}

int main()
{
    FILE *sourceFile;
    char filename[100];

    // Input the source file name
    printf("Enter the C source file name: ");
    scanf("%s", filename);

    // Open the source file in read mode
    sourceFile = fopen(filename, "r");
    if (sourceFile == NULL)
    {
        printf("Error: Cannot open file %s.\n", filename);
        return 1;
    }

    // Count the data types
    countDataTypes(sourceFile);

    // Close the file
    fclose(sourceFile);

    return 0;
}
