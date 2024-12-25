// Using Functions

#include <stdio.h>
#include <math.h>

#define M_PI 3.14159265358979323846

// Function to calculate radius from the area of the circle
float calculate_radius_from_area(float area)
{
    return sqrt(area / M_PI);
}

// Function to calculate radius from the perimeter of the circle
float calculate_radius_from_perimeter(float perimeter)
{
    return perimeter / (2 * M_PI);
}

// Function to calculate the ratio of areas (rectangle area / circle area)
float calculate_area_ratio(float rect_area, float radius)
{
    return rect_area / (M_PI * radius * radius);
}

// Function to calculate the ratio of perimeters (rectangle perimeter / circle perimeter)
float calculate_perimeter_ratio(float rect_perimeter, float radius)
{
    return rect_perimeter / (2 * M_PI * radius);
}

int main()
{
    float length, breadth;
    printf("\nEnter the length and breadth of the rectangle: ");
    scanf("%f %f", &length, &breadth);

    // Calculate area and perimeter of the rectangle
    float rect_area = length * breadth;
    float rect_perimeter = 2 * (length + breadth);

    // (i) Calculate radius of the circle and ratio of perimeters when areas are equal
    float radius_equal_area = calculate_radius_from_area(rect_area);
    float ratio_perimeters = calculate_perimeter_ratio(rect_perimeter, radius_equal_area);

    printf("\n(i) When area of rectangle and circle is equal\n");
    printf("\tRadius of circle: %.2f\n", radius_equal_area);
    printf("\tRatio of perimeters (rectangle/circle): %.2f\n", ratio_perimeters);

    // (ii) Calculate radius of the circle and ratio of areas when perimeters are equal
    float radius_equal_perimeter = calculate_radius_from_perimeter(rect_perimeter);
    float ratio_areas = calculate_area_ratio(rect_area, radius_equal_perimeter);

    printf("(ii) When perimeter of rectangle and circle is equal\n");
    printf("\tRadius of circle: %.2f\n", radius_equal_perimeter);
    printf("\tRatio of areas (rectangle/circle): %.2f\n\n", ratio_areas);

    return 0;
}
