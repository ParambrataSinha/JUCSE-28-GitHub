// Using Structures and Pointers

#include <stdio.h>

typedef struct
{
    int marks[5];
    int sum;
    float percentage;
} Student;

void calculate_marks(Student *s)
{
    s->sum = 0;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &s->marks[i]);
        if (s->marks[i] < 0 || s->marks[i] > 100)
        {
            printf("Invalid input. Marks should be between 0 and 100.\n\n");
            return;
        }
        s->sum += s->marks[i];
    }
    s->percentage = s->sum / 5.0;
}

int main()
{
    Student student;
    printf("\nEnter marks for 5 subjects (out of 100): ");
    calculate_marks(&student);

    printf("Aggregate Marks: %d, Percentage: %.2f%%\n\n", student.sum, student.percentage);
    return 0;
}
