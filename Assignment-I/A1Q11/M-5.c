// Using Pointers and Functions

#include <stdio.h>

void calculate_marks(int *marks, int *sum, float *percentage)
{
    *sum = 0;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
        if (marks[i] < 0 || marks[i] > 100)
        {
            printf("Invalid input. Marks should be between 0 and 100.\n\n");
            return;
        }
        *sum += marks[i];
    }
    *percentage = *sum / 5.0;
}

int main()
{
    int marks[5], sum;
    float percentage;
    printf("\nEnter marks for 5 subjects (out of 100): ");
    calculate_marks(marks, &sum, &percentage);

    printf("Aggregate Marks: %d, Percentage: %.2f%%\n\n", sum, percentage);
    return 0;
}
