#include <stdio.h>

int main() 
{
    float radius, area, perimeter;
    const float PI = 3.14159;
    printf("Enter radius of the circle: ");
    scanf("%f", &radius);

    area = PI * radius * radius;       // Calculate area and perimeter
    perimeter = 2 * PI * radius;

    printf("Area = %.2f\n", area);
    printf("Perimeter = %.2f\n", perimeter);
    return 0;
}
