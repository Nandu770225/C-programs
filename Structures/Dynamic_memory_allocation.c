//  C program using structures and dynamic memory allocation (malloc)
#include<stdio.h>
#include<stdlib.h> // For malloc() and free()

// Structure definition for a Student
struct Student 
{
    int roll_no;
    char name[50];
    float cgpa;
};
int main() 
{
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    // Dynamically allocate memory for 'n' Student structures
    struct Student* students = (struct Student*) malloc(n * sizeof(struct Student));
    // Check if memory allocation was successful
    if (students == NULL) 
    {
        printf("Memory allocation failed!\n");
        return 1; // Exit the program if malloc failed
    }
    // Input student details using a loop
    for (int i = 0; i < n; i++) 
    {
        printf("\nEnter details for Student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].roll_no);
        printf("Name: "); // Read name (with spaces)
        scanf(" %[^\n]", students[i].name);  // " %[^\n]" reads string with spaces
        printf("CGPA: ");
        scanf("%f", &students[i].cgpa);
    }
    for (int i = 0; i < n; i++)  // Display all entered student records
    {
        printf("\nStudent %d\n", i + 1);
        printf("Roll No: %d\n", students[i].roll_no);
        printf("Name: %s\n", students[i].name);
        printf("CGPA: %.2f\n", students[i].cgpa);
    }
    free(students);// Free the dynamically allocated memory
    return 0; 
}
