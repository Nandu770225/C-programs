#include<stdio.h>

int main() 
{
    int num, largest;
    printf("Enter 10 numbers:\n");
    scanf("%d", &largest);   // First number is initially largest
    
    for(int i = 1; i < 10; i++) 
    {
        scanf("%d", &num);
        if(num > largest) 
        {
            largest = num;
        }
    }
    printf("Largest number: %d\n", largest);
    return 0;
}