// Using Structures and Pointers

// #include <stdio.h>
// #include <math.h>

// typedef struct
// {
//     float length;
//     float breadth;
//     float area;
//     float perimeter;
// } Rectangle;

// void calculate_radius_and_ratio(Rectangle *rect)
// {
//     rect->area = rect->length * rect->breadth;
//     rect->perimeter = 2 * (rect->length + rect->breadth);

//     float radius_area = sqrt(rect->area / 3.14159);
//     float radius_perimeter = rect->perimeter / (2 * 3.14159);
//     float ratio_areas = rect->area / (3.14159 * radius_perimeter * radius_perimeter);

//     printf("Radius (equal areas): %.2f\n", radius_area);
//     printf("Radius (equal perimeters): %.2f, Ratio of areas: %.2f\n", radius_perimeter, ratio_areas);
// }

// int main()
// {
//     Rectangle rect;
//     printf("Enter the length and breadth of the rectangle: ");
//     scanf("%f %f", &rect.length, &rect.breadth);

//     calculate_radius_and_ratio(&rect);

//     return 0;
// }

#include <stdio.h>
#include <math.h>

#define M_PI 3.14159265358979323846

typedef struct
{
    float length;
    float breadth;
    float area;
    float perimeter;
} Rectangle;

// Function to calculate radius from area
float calculate_radius_from_area(float area)
{
    return sqrt(area / M_PI);
}

// Function to calculate radius from perimeter
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

// Function to calculate radius and ratios
void calculate_radius_and_ratio(Rectangle *rect)
{
    // Calculate the area and perimeter of the rectangle
    rect->area = rect->length * rect->breadth;
    rect->perimeter = 2 * (rect->length + rect->breadth);

    // (i) Radius of the circle and ratio of perimeters when areas are equal
    float radius_equal_area = calculate_radius_from_area(rect->area);
    float ratio_perimeters = calculate_perimeter_ratio(rect->perimeter, radius_equal_area);

    printf("\n(i) When area of rectangle and circle is equal\n");
    printf("\tRadius of circle: %.2f\n", radius_equal_area);
    printf("\tRatio of perimeters (rectangle/circle): %.2f\n", ratio_perimeters);

    // (ii) Radius of the circle and ratio of areas when perimeters are equal
    float radius_equal_perimeter = calculate_radius_from_perimeter(rect->perimeter);
    float ratio_areas = calculate_area_ratio(rect->area, radius_equal_perimeter);

    printf("(ii) When perimeter of rectangle and circle is equal\n");
    printf("\tRadius of circle: %.2f\n", radius_equal_perimeter);
    printf("\tRatio of areas (rectangle/circle): %.2f\n\n", ratio_areas);
}

int main()
{
    Rectangle rect;
    printf("\nEnter the length and breadth of the rectangle: ");
    scanf("%f %f", &rect.length, &rect.breadth);

    calculate_radius_and_ratio(&rect);

    return 0;
}
