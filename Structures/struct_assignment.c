#include<stdio.h>  // Standard input-output library
#include<math.h>   // Math library

struct point 
{
    float x;
    float y;
};

// Function to calculate distance between two points
float calculate_distance(struct point p1, struct point p2) 
{
    return sqrt((p2.x - p1.x)*(p2.x - p1.x) + (p2.y - p1.y)*(p2.y - p1.y));
}

// Function to find the midpoint of two points
struct point find_midpoint(struct point p1, struct point p2) 
{
    struct point mid;
    mid.x = (p1.x + p2.x) / 2;
    mid.y = (p1.y + p2.y) / 2;
    return mid;
}

// Function to calculate area of triangle using three points
float area_of_triangle(struct point p1, struct point p2, struct point p3) 
{
    return 0.5 * fabs(p1.x*(p2.y - p3.y) + 
                      p2.x*(p3.y - p1.y) + 
                      p3.x*(p1.y - p2.y));
}

// Main function
int main() 
{
    struct point p1, p2, p3;
    // Reading input
    printf("Enter coordinates of point 1 (x y): ");
    scanf("%f %f", &p1.x, &p1.y);

    printf("Enter coordinates of point 2 (x y): ");
    scanf("%f %f", &p2.x, &p2.y);

    printf("Enter coordinates of point 3 (x y): ");
    scanf("%f %f", &p3.x, &p3.y);

    float dist = calculate_distance(p1, p2);  // Function call to calculate distance
    printf("\nDistance between Point 1 and Point 2 = %.2f\n", dist);

    struct point mid = find_midpoint(p1, p2);  // Function call to calculate midpoint
    printf("Midpoint between Point 1 and Point 2 = (%.2f, %.2f)\n", mid.x, mid.y);

    float area = area_of_triangle(p1, p2, p3);  // Function call to calculate area
    printf("Area of triangle formed by the 3 points = %.2f\n", area);
    return 0;
}
