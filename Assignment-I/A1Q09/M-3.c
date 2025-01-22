// Using Functions and Simple I/O

#include <stdio.h>

float calculate_gross_salary(float basic_salary)
{
    return basic_salary + 0.6 * basic_salary + 0.15 * basic_salary;
}

int main()
{
    float basic_salary;
    printf("\nEnter basic salary: ");
    scanf("%f", &basic_salary);

    float gross_salary = calculate_gross_salary(basic_salary);
    printf("Gross Salary: %.2f\n\n", gross_salary);

    return 0;
}
