#include<stdio.h>
#include<string.h>

typedef struct 
{
    int emp_id;
    char emp_name[50];
    float salary;
} Employee;
typedef struct 
{
    char dept_name[50];
    Employee employee; // Nested structure
    float dept_budget;
} Department;

int main() 
{
    Department dept;
    // Input
    printf("Enter the department name: ");
    scanf(" %[^\n]s", dept.dept_name); 
    printf("Enter the employee ID: ");
    scanf("%d", &dept.employee.emp_id);
    printf("Enter the employee name: ");
    scanf(" %[^\n]s", dept.employee.emp_name); 
    printf("Enter the employee salary: ");
    scanf("%f", &dept.employee.salary);
    printf("Enter the department budget: ");
    scanf("%f", &dept.dept_budget);

    // Output
    printf("\nDepartment name: %s\n", dept.dept_name);
    printf("Employee ID: %d\n", dept.employee.emp_id);
    printf("Employee name: %s\n", dept.employee.emp_name);
    printf("Employee salary: $%.2f\n", dept.employee.salary);
    printf("Department budget: $%.2f\n", dept.dept_budget);
    return 0;
}