#include <stdio.h>
#include <stdlib.h>

// Optimized Bubble Sort function
void bubbleSort(int *arr, int n)
{
    int swapped;
    for (int i = 0; i < n - 1; i++)
    {
        swapped = 0;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
        // If no swaps were made, the array is already sorted
        if (!swapped)
            break;
    }
}

int main()
{
    FILE *inputFile, *outputFile;
    int *numbers = NULL, *temp;
    int count = 0, capacity = 10;

    // Open the input file
    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL)
    {
        perror("Error opening input file");
        return 1;
    }

    // Allocate initial memory
    numbers = (int *)malloc(capacity * sizeof(int));
    if (numbers == NULL)
    {
        perror("Error allocating memory");
        fclose(inputFile);
        return 1;
    }

    // Read numbers from the file
    while (fscanf(inputFile, "%d", &numbers[count]) == 1)
    {
        count++;
        // Reallocate memory if needed
        if (count == capacity)
        {
            capacity *= 2;
            temp = (int *)realloc(numbers, capacity * sizeof(int));
            if (temp == NULL)
            {
                perror("Error reallocating memory");
                free(numbers);
                fclose(inputFile);
                return 1;
            }
            numbers = temp;
        }
    }
    fclose(inputFile);

    // Handle empty file case
    if (count == 0)
    {
        printf("Warning: Input file is empty. No numbers to sort.\n");
        free(numbers);
        return 0;
    }

    // Sort the numbers
    bubbleSort(numbers, count);

    // Open the output file
    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL)
    {
        perror("Error opening output file");
        free(numbers);
        return 1;
    }

    // Write sorted numbers to the output file
    for (int i = 0; i < count; i++)
    {
        fprintf(outputFile, "%d\n", numbers[i]);
    }
    fclose(outputFile);

    // Free allocated memory
    free(numbers);

    printf("Numbers sorted and written to output.txt successfully.\n");
    return 0;
}
