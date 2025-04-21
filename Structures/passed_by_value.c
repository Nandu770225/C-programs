#include<stdio.h>
#include<string.h>

// Define Car structure
typedef struct 
{
    char model[20];
    int year;
} Car;
// Function to modify Car - passed by value
void updateCar(Car c) 
{
    strcpy(c.model, "Tesla");
    c.year = 2024;
    printf("Inside Function: Model: %s, Year: %d\n", c.model, c.year);
}
// Function to print car details
void printCar(Car c) 
{
    printf("Car: Model: %s, Year: %d\n", c.model, c.year);
}
int main() 
{
    Car myCar = {"Toyota", 2010};
    printCar(myCar); // Before update
    updateCar(myCar);  // Try to update (will not affect original)
    printCar(myCar);  // After update
    return 0;
}
