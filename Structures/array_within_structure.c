#include <stdio.h>
#include <string.h>

typedef struct 
{
    char Name[20];
    int employeeID;
    int WeekAttendence[7];
} Employee;

int main() 
{
    Employee emp;  
    emp.employeeID = 1;
    strcpy(emp.Name, "Dhoni");

    for (int week = 0; week < 7; week++) 
    {
        emp.WeekAttendence[week] = week;  
    }
    // printing the data
    printf("\nEmployee ID: %d - Employee Name: %s\n", emp.employeeID, emp.Name);
    printf("Attendance\n");
    for (int week = 0; week < 7; week++) 
    {
        printf("%d ", emp.WeekAttendence[week]);
    }
    printf("\n");
    return 0;
}
