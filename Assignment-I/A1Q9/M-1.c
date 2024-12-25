// Using Simple I/O and Arithmetic

#include <stdio.h>

int main()
{
    float basic_salary, gross_salary;
    printf("\nEnter basic salary: ");
    scanf("%f", &basic_salary);

    gross_salary = basic_salary + 0.6 * basic_salary + 0.15 * basic_salary;
    printf("Gross Salary: %.2f\n\n", gross_salary);

    return 0;
}