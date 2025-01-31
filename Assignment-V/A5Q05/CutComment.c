#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Removes comments from a source file and copies the content to a destination file.
 *
 * This function reads a source file character by character, identifies and removes comments,
 * and writes the non-comment characters to a destination file.
 *
 * @param source The file pointer to the source file. The source file must be opened in read mode.
 * @param destination The file pointer to the destination file. The destination file must be opened in write mode.
 *
 * @return void
 */
void removeComments(FILE *source, FILE *destination)
{
    char ch, nextCh;
    int inComment = 0;

    while ((ch = fgetc(source)) != EOF)
    {
        if (ch == '/' && !inComment)
        {
            nextCh = fgetc(source);
            if (nextCh == '*')
            {
                inComment = 1; // Start of a comment
            }
            else
            {
                fputc(ch, destination); // Not a comment
                if (nextCh != EOF)
                    fputc(nextCh, destination);
            }
        }
        else if (inComment)
        {
            if (ch == '*' && (nextCh = fgetc(source)) == '/')
            {
                inComment = 0; // End of a comment
            }
        }
        else
        {
            fputc(ch, destination); // Copy non-comment characters
        }
    }
}

/**
 * @brief Entry point of the program that removes comments from a source file and writes the result to a destination file.
 *
 * This function processes command-line arguments to open a source file and a destination file.
 * It then calls the removeComments function to remove comments from the source file and write
 * the non-comment content to the destination file.
 *
 * @param argc The number of command-line arguments. It should be 3 for correct usage.
 * @param argv An array of command-line arguments. argv[1] should be the source file path, and argv[2] should be the destination file path.
 *
 * @return Returns 0 on successful execution. Returns 1 if there is an error with the number of arguments,
 *         or if there is an error opening either the source or destination file.
 */
int main(int argc, char *argv[])
{
    // Check if the correct number of arguments is provided
    if (argc != 3)
    {
        printf("Usage: %s <source_file> <destination_file>\n", argv[0]);
        return 1;
    }

    // Open the source file in read mode
    FILE *sourceFile = fopen(argv[1], "r");
    if (sourceFile == NULL)
    {
        printf("Error: Cannot open source file %s.\n", argv[1]);
        return 1;
    }

    // Open the destination file in write mode
    FILE *destFile = fopen(argv[2], "w");
    if (destFile == NULL)
    {
        printf("Error: Cannot open destination file %s.\n", argv[2]);
        fclose(sourceFile);
        return 1;
    }

    // Remove comments and copy content
    removeComments(sourceFile, destFile);

    printf("Comments removed and content copied to %s.\n", argv[2]);

    // Close both files
    fclose(sourceFile);
    fclose(destFile);

    return 0;
}
