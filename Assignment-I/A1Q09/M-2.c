// Using Inline Calculation in printf

#include <stdio.h>

int main()
{
    float basic_salary;
    printf("\nEnter basic salary: ");
    scanf("%f", &basic_salary);

    printf("Gross Salary: %.2f\n\n", basic_salary + 0.6 * basic_salary + 0.15 * basic_salary);
    return 0;
}
