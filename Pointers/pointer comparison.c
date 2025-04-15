#include <stdio.h>
int main() 
{
    int vector[] = {34, 56, 87};  
    int *p0 = vector;      // Points to vector[0]
    int *p1 = vector + 1;  
    int *p2 = vector + 2;  

    printf("p2 > p0: %d\n", p2 > p0); 
    printf("p2 < p0: %d\n", p2 < p0); 
    printf("p0 > p1: %d\n", p0 > p1); 

    return 0;
}
