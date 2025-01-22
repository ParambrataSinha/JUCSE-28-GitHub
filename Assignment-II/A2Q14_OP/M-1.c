
#include <stdio.h>
#include <math.h>

int main()
{
    double num, custom_base;
    int base;

    // Input the number
    printf("\nEnter the number: ");
    scanf("%lf", &num);

    // Choose the base for logarithm
    printf("Choose the base for logarithm:\n");
    printf("1. Natural Logarithm (base e)\n");
    printf("2. Base 10\n");
    printf("3. Base 2\n");
    printf("4. Custom Base\n");

    printf("Your choice: ");
    scanf("%d", &base);

    // Perform logarithmic calculation based on user's choice
    switch (base)
    {
    case 1:
        printf("Log base e: %.5lf\n", log(num));
        break;
    case 2:
        printf("Log base 10: %.5lf\n", log10(num));
        break;
    case 3:
        printf("Log base 2: %.5lf\n", log2(num));
        break;
    case 4:
        // Custom base logarithm
        printf("Enter the custom base: ");
        scanf("%lf", &custom_base);
        printf("Log base %.5lf is: %.5lf\n", custom_base, log(num) / log(custom_base));
        break;
    default:
        printf("Invalid choice!\n");
    }

    printf("\n");

    return 0;
}
