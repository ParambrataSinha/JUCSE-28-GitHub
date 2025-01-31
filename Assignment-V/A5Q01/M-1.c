#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100

// Structure to store student data
struct Student
{
    int rollNumber;
    char name[50];
    char department[30];
    char course[30];
    int yearOfJoining;
};

// Function to print students who joined in a particular year
void printStudentsByYear(struct Student students[], int n, int year)
{
    printf("Students who joined in %d:\n", year);
    for (int i = 0; i < n; i++)
    {
        if (students[i].yearOfJoining == year)
        {
            printf("%s\n", students[i].name);
        }
    }
}

// Function to print data of a student based on roll number
void printStudentByRoll(struct Student students[], int n, int roll)
{
    for (int i = 0; i < n; i++)
    {
        if (students[i].rollNumber == roll)
        {
            printf("\tRoll Number: %d\n", students[i].rollNumber);
            printf("\tName: %s\n", students[i].name);
            printf("\tDepartment: %s\n", students[i].department);
            printf("\tCourse: %s\n", students[i].course);
            printf("\tYear of Joining: %d\n", students[i].yearOfJoining);
            return;
        }
    }
    printf("No student found with roll number %d.\n", roll);
}

int main()
{
    struct Student students[MAX_STUDENTS]; // Array of students
    int n;

    printf("\nEnter the number of students: ");
    scanf("%d", &n);

    // Input student details
    for (int i = 0; i < n; i++)
    {
        printf("Enter details for student %d:\n", i + 1);
        printf("\tRoll Number: ");
        scanf("%d", &students[i].rollNumber);
        printf("\tName: ");
        scanf(" %[^\n]", students[i].name);
        printf("\tDepartment: ");
        scanf(" %[^\n]", students[i].department);
        printf("\tCourse: ");
        scanf(" %[^\n]", students[i].course);
        printf("\tYear of Joining: ");
        scanf("%d", &students[i].yearOfJoining);
    }

    // Example usage
    int year, roll;
    printf("\nEnter year to list students: ");
    scanf("%d", &year);
    printStudentsByYear(students, n, year);

    printf("\nEnter roll number to get student details: ");
    scanf("%d", &roll);
    printStudentByRoll(students, n, roll);
    printf("\n");

    return 0;
}
