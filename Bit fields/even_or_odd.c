#include <stdio.h> 
 
void checkEvenOrOdd(int num) 
{ 
    if (num % 2 == 0) 
    { 
        printf("%d is an even number.\n", num); 
    } 
    else 
    { 
        printf("%d is an odd number.\n", num); 
    } 
} 
int main() 
{ 
    int num; 
    printf("Enter a number: "); 
    scanf("%d", &num); 
    checkEvenOrOdd(num); 
    return 0; 
} 
 