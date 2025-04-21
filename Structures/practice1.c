// program to display the values of structure members
#include<stdio.h>

// Define a structure
struct Student 
{
    int id;
    char name[50];
    float marks;
};
int main() 
{
    // Declare and initialize a structure variable
    struct Student student1 = {101, "sai", 89.5};

    // Display structure members
    printf("Student ID: %d\n", student1.id);
    printf("Student Name: %s\n", student1.name);
    printf("Student Marks: %.2f\n", student1.marks);

    return 0;
}
