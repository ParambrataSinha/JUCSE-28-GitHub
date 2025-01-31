#include <stdio.h>
#include <stdlib.h>

void calculateCommentPercentage(FILE *source)
{
    char ch, nextCh;
    int inMultiLineComment = 0, inSingleLineComment = 0;
    int commentCount = 0, totalCount = 0;

    while ((ch = fgetc(source)) != EOF)
    {
        totalCount++;

        if (!inMultiLineComment && !inSingleLineComment)
        {
            if (ch == '/')
            {
                nextCh = fgetc(source);
                if (nextCh == '*')
                {
                    inMultiLineComment = 1; // Start of multi-line comment
                    commentCount += 2;      // Count "/*"
                    totalCount++;
                }
                else if (nextCh == '/')
                {
                    inSingleLineComment = 1; // Start of single-line comment
                    commentCount += 2;       // Count "//"
                    totalCount++;
                }
                else
                {
                    if (nextCh != EOF)
                        ungetc(nextCh, source);
                }
            }
        }
        else if (inMultiLineComment)
        {
            commentCount++;
            if (ch == '*')
            {
                nextCh = fgetc(source);
                if (nextCh == '/')
                {
                    inMultiLineComment = 0; // End of multi-line comment
                    commentCount++;         // Count "*/"
                    totalCount++;
                }
                else if (nextCh != EOF)
                {
                    ungetc(nextCh, source);
                }
            }
        }
        else if (inSingleLineComment)
        {
            commentCount++;
            if (ch == '\n')
            {
                inSingleLineComment = 0; // End of single-line comment
            }
        }
    }

    // Calculate and display the percentage
    if (totalCount > 0)
    {
        float percentage = ((float)commentCount / totalCount) * 100;
        printf("Percentage of characters in comments: %.2f%%\n", percentage);
    }
    else
    {
        printf("The file is empty or does not contain valid characters.\n");
    }
}

// Main function to execute the program
int main(int argc, char *argv[])
{
    // Check if the correct number of arguments is provided
    if (argc != 2)
    {
        printf("Usage: %s <source_file>\n", argv[0]);
        return 1;
    }

    // Open the source file in read mode
    FILE *sourceFile = fopen(argv[1], "r");
    if (sourceFile == NULL)
    {
        printf("Error: Cannot open source file %s.\n", argv[1]);
        return 1;
    }

    // Calculate the percentage of characters in comments
    calculateCommentPercentage(sourceFile);

    // Close the file
    fclose(sourceFile);

    return 0;
}
