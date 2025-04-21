#include<stdio.h>
#include<string.h>

typedef struct 
{
    char name[50];
    int age;
    float marks;
} Student;

int main() 
{
    Student students[3];

    printf("Enter details of 3 students:\n");

    for (int i = 0; i < 3; i++) 
    {
        printf("Student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Age: ");
        scanf("%d", &students[i].age);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    printf("\nStudent Information:\n");
    for (int i = 0; i < 3; i++) 
    {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Marks: %.2f\n\n", students[i].marks);
    }
    return 0;
}
