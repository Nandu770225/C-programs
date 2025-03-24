#include<stdio.h>

int main() 
{
    float physics, chemistry, biology, math, computer, total, percentage;
    char grade;

    printf("Enter marks of Physics, Chemistry, Biology, Mathematics and Computer");
    scanf("%f %f %f %f %f", &physics, &chemistry, &biology, &math, &computer);

    total = physics + chemistry + biology + math + computer;
    percentage = (total / 500) * 100;

    printf("\nTotal Marks: %.2f", total);             // %.2f - Displays the value with 2 decimal places
    printf("\nPercentage: %.2f%%", percentage);       // %% - To display the % symbol

    if (percentage >= 90) 
    {
        printf("Grade A\n");
    } 
    else if (percentage >= 80) 
    {
        printf("Grade B\n");
    }
    else if (percentage >= 70)
    {
        printf("Grade C\n");
    } 
    else if (percentage >= 60)
    {
        printf("Grade D\n");
    } 
    else if (percentage >= 40) 
    {
        printf("Grade E\n");
    } 
    else 
    {
        printf("Grade F\n");
    }

    printf("\nGrade: %c\n", grade);                     // %c print character grade

    return 0;
}
