

#include <stdio.h>

int main()
{
    int num, positives = 0, negatives = 0, zeros = 0;

    printf("Enter 100 integers:\n");
    for (int i = 0; i < 100; i++)
    {
        scanf("%d", &num);
        if (num > 0)
            positives++;
        else if (num < 0)
            negatives++;
        else
            zeros++;
    }

    printf("Positives: %d, Negatives: %d, Zeros: %d\n", positives, negatives, zeros);
    return 0;
}
