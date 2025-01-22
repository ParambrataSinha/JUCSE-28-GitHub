// Using Struct

#include <stdio.h>

typedef struct
{
    float basic;
    float hra;
    float da;
    float gross;
} Salary;

int main()
{
    Salary salary;
    printf("\nEnter basic salary: ");
    scanf("%f", &salary.basic);

    salary.hra = 0.6 * salary.basic;
    salary.da = 0.15 * salary.basic;
    salary.gross = salary.basic + salary.hra + salary.da;

    printf("Gross Salary: %.2f\n\n", salary.gross);
    return 0;
}
