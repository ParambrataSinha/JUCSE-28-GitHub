
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r1, c1, r2, c2;
    printf("\nEnter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2)
    {
        printf("\nMatrix multiplication not possible.\n\n");
        return 1;
    }

    int **mat1 = (int **)malloc(r1 * sizeof(int *));
    int **mat2 = (int **)malloc(r2 * sizeof(int *));
    int **result = (int **)malloc(r1 * sizeof(int *));

    for (int i = 0; i < r1; i++)
        mat1[i] = (int *)malloc(c1 * sizeof(int));
    for (int i = 0; i < r2; i++)
        mat2[i] = (int *)malloc(c2 * sizeof(int));
    for (int i = 0; i < r1; i++)
        result[i] = (int *)malloc(c2 * sizeof(int));

    printf("\nEnter elements of first matrix:\n");
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            scanf("%d", &mat1[i][j]);

    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            scanf("%d", &mat2[i][j]);

    // Matrix multiplication
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c2; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < c1; k++)
                result[i][j] += mat1[i][k] * mat2[k][j];
        }

    printf("Resultant matrix:\n");
    for (int i = 0; i < r1; i++)
    {
        printf("\t");
        for (int j = 0; j < c2; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    // Free memory
    for (int i = 0; i < r1; i++)
        free(mat1[i]);
    for (int i = 0; i < r2; i++)
        free(mat2[i]);
    for (int i = 0; i < r1; i++)
        free(result[i]);
    free(mat1);
    free(mat2);
    free(result);

    return 0;
}