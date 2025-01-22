// Using Arrays, Loops & Inline Calculation

#include <stdio.h>

int main()
{
    int marks[5], sum = 0;
    printf("\nEnter marks for 5 subjects (out of 100): ");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
        if (marks[i] < 0 || marks[i] > 100)
        {
            printf("Invalid input. Marks should be between 0 and 100.\n\n");
            return 1;
        }
        sum += marks[i];
    }

    printf("Aggregate Marks: %d, Percentage: %.2f%%\n\n", sum, sum / 5.0);
    return 0;
}
