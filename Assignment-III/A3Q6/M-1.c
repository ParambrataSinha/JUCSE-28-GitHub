#include <stdio.h>

int main()
{
    int marks[5][5], total[5] = {0}, highest = 0;

    printf("\nEnter marks of 5 students in 5 subjects:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Student %d: ", i + 1);
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &marks[i][j]);
            total[i] += marks[i][j];
        }
        if (total[i] > highest)
            highest = total[i];
    }

    printf("\nTotal marks of each student:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("\tStudent %d: %d\n", i + 1, total[i]);
    }

    printf("Highest total marks: %d\n\n", highest);
    return 0;
}
