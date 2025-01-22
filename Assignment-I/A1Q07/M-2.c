// Using Array Indexing

#include <stdio.h>

int main()
{
    int nums[3];
    printf("\nEnter three numbers: ");
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &nums[i]);
    }

    float avg = (nums[0] + nums[1] + nums[2]) / 3.0;
    printf("Average: %.2f\n", avg);

    for (int i = 0; i < 3; i++)
    {
        if (nums[i] == avg)
            printf("%d is the average number.\n", nums[i]);
        else if (nums[i] < avg)
            printf("%d is below average.\n", nums[i]);
        else
            printf("%d is above average.\n", nums[i]);
    }
    printf("\n");

    return 0;
}
