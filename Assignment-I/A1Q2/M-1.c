#include <stdio.h>

int main()
{
    float length, breadth, radius;
    printf("\nEnter the length and breadth of the rectangle: ");
    scanf("%f %f", &length, &breadth);
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Rectangle
    float rect_area = length * breadth;
    float rect_perimeter = 2 * (length + breadth);

    // Circle
    float circle_area = 3.14159 * radius * radius;
    float circle_circumference = 2 * 3.14159 * radius;

    printf("Rectangle:\nArea: %.2f, Perimeter: %.2f\n\n", rect_area, rect_perimeter);
    printf("Circle:\nArea: %.2f, Circumference: %.2f\n\n", circle_area, circle_circumference);

    return 0;
}
