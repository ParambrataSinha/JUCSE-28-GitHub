#include <stdio.h>

void printMatrix(int matrix[3][3]) // Function to print a 3x3 matrix
{
    printf("\t");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n\t");
    }
}

int main()
{
    int matrix1[3][3], matrix2[3][3], result[3][3];
    int choice;

    printf("\nEnter elements of first 3x3 matrix:\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &matrix1[i][j]);

    printf("\nEnter elements of second 3x3 matrix:\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &matrix2[i][j]);

    printf("\nChoose an operation:\n1. Sum\n2. Difference\n3. Product\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1: // Sum
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                result[i][j] = matrix1[i][j] + matrix2[i][j];
        printf("\nSum of matrices:\n");
        printMatrix(result);
        break;

    case 2: // Difference
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                result[i][j] = matrix1[i][j] - matrix2[i][j];
        printf("\nDifference of matrices:\n");
        printMatrix(result);
        break;

    case 3: // Product
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
            {
                result[i][j] = 0;
                for (int k = 0; k < 3; k++)
                    result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        printf("\nProduct of matrices:\n");
        printMatrix(result);
        break;

    default:
        printf("\nInvalid choice!\n");
    }

    return 0;
}
