#include <stdio.h>

// Function to decode and print gender, year of study, and age
void decodeStudentInfo(unsigned char data)
{
    // Extract gender (bit 7)
    int gender = (data & 0x80) >> 7;

    // Extract year of study (bits 6 and 5)
    int yearOfStudy = (data & 0x60) >> 5;

    // Extract age (bits 4 to 0)
    int age = data & 0x1F;

    // Print the decoded information
    printf("Gender: %s\n", gender ? "Male" : "Female");

    // Validate Year of Study (should be 1, 2, or 3)
    if (yearOfStudy == 3)
    {
        printf("Year of Study: Invalid\n");
    }
    else
    {
        printf("Year of Study: %d\n", yearOfStudy + 1);
    }

    // Validate Age
    if (age > 31)
    {
        printf("Age: Invalid (out of range)\n");
    }
    else
    {
        printf("Age: %d\n", age);
    }
}

int main()
{
    unsigned int input;
    unsigned char studentData;

    // Input the 8-bit unsigned character (integer format)
    printf("Enter an 8-bit unsigned integer (0-255): ");
    if (scanf("%u", &input) != 1 || input > 255)
    {
        printf("Invalid input! Please enter a number between 0 and 255.\n");
        return 1;
    }

    // Convert to unsigned char (0-255 guaranteed)
    studentData = (unsigned char)input;

    // Decode and print the information
    decodeStudentInfo(studentData);

    return 0;
}
