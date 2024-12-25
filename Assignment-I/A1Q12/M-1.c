// Using Simple I/O and Arithmetic Operations

#include <stdio.h>
#include <math.h>

#define M_PI 3.14159265358979323846

int main()
{
    float length, breadth;
    printf("\nEnter the length and breadth of the rectangle: ");
    scanf("%f %f", &length, &breadth);

    // Calculate area and perimeter of the rectangle
    float rect_area = length * breadth;
    float rect_perimeter = 2 * (length + breadth);

    // (i) Radius of the circle and ratio of perimeters when areas are equal
    float radius_equal_area = sqrt(rect_area / M_PI);
    float circle_perimeter_equal_area = 2 * M_PI * radius_equal_area;
    float ratio_perimeters = rect_perimeter / circle_perimeter_equal_area;

    printf("\n(i) When area of rectangle and circle is equal\n");
    printf("\tRadius of circle: %.2f\n", radius_equal_area);
    printf("\tRatio of perimeters (rectangle/circle): %.2f\n", ratio_perimeters);

    // (ii) Radius of the circle and ratio of areas when perimeters are equal
    float radius_equal_perimeter = rect_perimeter / (2 * M_PI);
    float circle_area_equal_perimeter = M_PI * radius_equal_perimeter * radius_equal_perimeter;
    float ratio_areas = rect_area / circle_area_equal_perimeter;

    printf("(ii) When perimeter of rectangle and circle is equal\n");
    printf("\tRadius of circle: %.2f\n", radius_equal_perimeter);
    printf("\tRatio of areas (rectangle/circle): %.2f\n\n", ratio_areas);

    return 0;
}
