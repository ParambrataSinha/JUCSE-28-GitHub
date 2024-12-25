// Using Array

#include <stdio.h>

int main()
{
    int nums[3], max, min;
    printf("\nEnter three numbers: ");
    scanf("%d %d %d", &nums[0], &nums[1], &nums[2]);

    max = min = nums[0];
    for (int i = 1; i < 3; i++)
    {
        if (nums[i] > max)
            max = nums[i];
        if (nums[i] < min)
            min = nums[i];
    }

    printf("Maximum: %d \nMinimum: %d\n\n", max, min);
    return 0;
}
