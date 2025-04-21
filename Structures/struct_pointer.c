// program to access the structure members using the structure pointer with the help of the Arrow operator.
#include<stdio.h>
#include<string.h>

struct Student 
{
    int roll_no;
    char name[30];
    char branch[40];
    int batch;
};
int main() 
{
    // Declare and initialize a variable of type struct Student
    struct Student s1 = {27, "Nanda", "ECE", 2016};
  
  	// Pointer to s1
    struct Student* ptr = &s1;
  	// Access and print structure members using the pointer and arrow operator (->)
    printf("%d\n", ptr->roll_no);
    printf("%s\n", ptr->name);
    printf("%s\n", ptr->branch);
    printf("%d", ptr->batch);
    return 0;
}
