#include <stdio.h>
#include <string.h>

#define NUM_STUDENTS 10
#define NUM_SUBJECTS 6

// Structure to store student data
struct Student
{
    int rollNumber;
    char name[50];
    float marks[NUM_SUBJECTS];
    float average;
};

// Function to calculate average marks for each student
void calculateAverages(struct Student students[], int n)
{
    for (int i = 0; i < n; i++)
    {
        float sum = 0;
        for (int j = 0; j < NUM_SUBJECTS; j++)
        {
            sum += students[i].marks[j];
        }
        students[i].average = sum / NUM_SUBJECTS;
    }
}

// Function to sort students by average marks
void sortStudentsByAverage(struct Student students[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (students[j].average > students[j + 1].average)
            {
                struct Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

// Function to print the rank list
void printRankList(struct Student students[], int n)
{
    printf("\nRank List:\n");
    printf("Rank\tRoll Number\tName\t\tAverage Marks\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t%d\t\t%s\t\t%.2f\n", i + 1, students[i].rollNumber, students[i].name, students[i].average);
    }
}

// Main function
int main()
{
    struct Student students[NUM_STUDENTS];

    // Input student details
    for (int i = 0; i < NUM_STUDENTS; i++)
    {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Name: ");
        scanf(" %[^\n]", students[i].name);
        printf("Enter marks for %d subjects:\n", NUM_SUBJECTS);
        for (int j = 0; j < NUM_SUBJECTS; j++)
        {
            printf("Subject %d: ", j + 1);
            scanf("%f", &students[i].marks[j]);
        }
    }

    // Calculate averages
    calculateAverages(students, NUM_STUDENTS);
    // Sort students by average marks
    sortStudentsByAverage(students, NUM_STUDENTS);
    // Print the rank list
    printRankList(students, NUM_STUDENTS);
    printf("\n");

    return 0;
}
