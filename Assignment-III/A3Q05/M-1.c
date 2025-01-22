#include <stdio.h>

int main()
{
    int arr[10];
    printf("\nEnter 10 integers: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 9; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Sorted array: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n\n");
    return 0;
}
