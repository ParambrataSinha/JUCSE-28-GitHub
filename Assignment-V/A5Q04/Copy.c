#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *fin, *fout;
    char c;

    // Check if exactly two arguments are passed
    if (argc != 3)
    {
        printf("Usage: %s <source_file> <destination_file>\n", argv[0]);
        return 1;
    }

    // Open input file for reading
    fin = fopen(argv[1], "r");
    if (fin == NULL)
    {
        printf("Error: Cannot open file %s for reading.\n", argv[1]);
        return 1;
    }

    // Open output file for writing
    fout = fopen(argv[2], "w");
    if (fout == NULL)
    {
        printf("Error: Cannot open file %s for writing.\n", argv[2]);
        fclose(fin);
        return 1;
    }

    // Read and write character by character
    while ((c = fgetc(fin)) != EOF)
    {
        fputc(c, fout);
    }

    // Close files
    fclose(fin);
    fclose(fout);

    printf("File copied successfully.\n");
    return 0;
}
