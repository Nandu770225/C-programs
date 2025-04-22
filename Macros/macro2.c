#include<stdio.h>
#define JOB SALARY  // defines a macro named SALARY with the value 15
#define SALARY 15   // defines a macro named JOB that expands to SALARY

int main()
{
    printf(" I want to get the job with %d lakhs per Annum", JOB);
    return 0;
}