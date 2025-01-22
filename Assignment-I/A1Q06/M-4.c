// Using Simple Bubble Sort Algorithm

#include <stdio.h>

int main()
{
    int nums[3];
    printf("\nEnter three numbers: ");
    scanf("%d %d %d", &nums[0], &nums[1], &nums[2]);

    // Simple bubble sort for three numbers
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2 - i; j++)
        {
            if (nums[j] > nums[j + 1])
            {
                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }

    printf("Maximum: %d \nMinimum: %d\n\n", nums[2], nums[0]);
    return 0;
}
