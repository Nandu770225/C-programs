#include<stdio.h>     
#include<string.h>    

#define MAX 100    
// Define a structure to hold student information
struct STUDENT 
{
    char name[20];     
    int roll_no;        
    float cgpa;        
};
// Function to input details of 'n' students
void input_students(struct STUDENT s[], int n) 
{
    for (int i = 0; i < n; i++)  // Loop to input each student's data
    {  
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", s[i].name); // Read a line (including spaces) into the name
        printf("Roll No: ");
        scanf("%d", &s[i].roll_no);   // Read roll number
        printf("CGPA: ");
        scanf("%f", &s[i].cgpa);     // Read CGPA
    }
}
// Function to search a student by name
struct STUDENT search_by_name(struct STUDENT s[], int n, const char* name) 
{
    for (int i = 0; i < n; i++) 
    { 
        if (strcmp(s[i].name, name) == 0)   // If name is found or not
        { 
            return s[i];                   
        }
    }
    // If not found, return an empty structure (name = "")
    struct STUDENT not_found = { "", 0, 0.0 }; 
    return not_found;
}
// Function to search student by roll number
int search_by_roll(struct STUDENT s[], int n, int roll) 
{
    for (int i = 0; i < n; i++) 
    {    
        if (s[i].roll_no == roll) // Check if roll number matches
        {    
            return i;                 // Return index of student
        }
    }
    return -1;    // Return -1 if not found
}
// Function to print students with CGPA greater than x
void print_cgpa_greater_than(struct STUDENT s[], int n, float x) 
{
    printf("\nStudents with CGPA > %.2f:\n", x);
    for (int i = 0; i < n; i++) 
    {             
        if (s[i].cgpa > x) // If CGPA is greater than x
        {                  
            // Print their details
            printf("Name: %s, Roll No: %d, CGPA: %.2f\n", s[i].name, s[i].roll_no, s[i].cgpa);
        }
    }
}
int main() 
{
    struct STUDENT students[MAX];  // Declare array to store up to 100 students
    int n;                         // Variable to store number of students

    printf("Enter number of students (max %d): ", MAX);
    scanf("%d", &n);               // Read how many students to input

    input_students(students, n);    // Call function to input student data

    // Search by name
    char search_name[21];           // Variable to store name to search
    printf("\nEnter a name to search: ");
    scanf(" %[^\n]", search_name);  // Read name with spaces

    struct STUDENT found = search_by_name(students, n, search_name); // Call search function
    if (strcmp(found.name, "") == 0) // If name is empty, student not found
        printf("Student with name \"%s\" not found.\n", search_name);
    else
        // Print found student details
        printf("Found: %s, Roll No: %d, CGPA: %.2f\n", found.name, found.roll_no, found.cgpa);

    // Search by roll number
    int search_roll;                      // Variable for roll number to search
    printf("\nEnter a roll number to search: ");
    scanf("%d", &search_roll);           // Read roll number
    int index = search_by_roll(students, n, search_roll);  // Call roll number search
    if (index == -1)    // If not found
        printf("Student with roll number %d not found.\n", search_roll);
    else
        // Print found student details
        printf("Found: %s, Roll No: %d, CGPA: %.2f\n", students[index].name, students[index].roll_no, students[index].cgpa);

    // Filter by CGPA
    float min_cgpa;           
    printf("\nEnter minimum CGPA to search: ");
    scanf("%f", &min_cgpa);  
    print_cgpa_greater_than(students, n, min_cgpa);  // Call function to print students
    return 0;   
}
