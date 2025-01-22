#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);

    double arr[n], sum = 0, mean, variance = 0, std_dev;

    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &arr[i]);
        sum += arr[i];
    }

    mean = sum / n;

    for (int i = 0; i < n; i++)
    {
        variance += pow(arr[i] - mean, 2);
    }

    variance /= n;
    std_dev = sqrt(variance);

    printf("Standard Deviation: %.2lf\n\n", std_dev);
    return 0;
}
