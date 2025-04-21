// passing structure members as arguments
#include<stdio.h>
#include<string.h>

struct student 
{
    char name[20];
    int rollno;
    int marks;
};
// Function to display individual structure members
void display(char name[], int rollno, int marks) 
{
    printf("Name = %s\t", name);
    printf("Rollno = %d\t", rollno);
    printf("Marks = %d\n", marks);
}
int main() 
{
    struct student stul = {"John", 12, 87};   // Declare and initialize a structure variable stul
    struct student stu2;     // Declare another structure variable stu2
    strcpy(stu2.name, "Mary");    // Copy string "Mary" to stu2.name
    stu2.rollno = 18;
    stu2.marks = 90;

    // Call display() function with members of stul
    display(stul.name, stul.rollno, stul.marks);

    // Call display() function with members of stu2
    display(stu2.name, stu2.rollno, stu2.marks);
    return 0;
}
