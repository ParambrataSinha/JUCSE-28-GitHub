

#include <stdio.h>

int main()
{
    int n, count = 0;
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);

    int arr[n], unique[n], unique_count = 0;
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        int duplicate = 0;
        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                duplicate = 1;
                count++;
                break;
            }
        }
        if (!duplicate)
        {
            unique[unique_count++] = arr[i];
        }
    }

    printf("Total duplicate elements: %d\n", count);
    printf("Unique elements in reverse order: ");
    for (int i = unique_count - 1; i >= 0; i--)
    {
        printf("%d ", unique[i]);
    }
    printf("\n\n");
    return 0;
}