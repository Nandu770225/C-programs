#include <stdio.h>
#define WEATHER 3  // 1=Sunny, 2=Rainy, 3=Snowy

int main() 
{
    #if WEATHER == 1
        printf("Wear sunscreen!\n");
        printf("Temp: 28°C\n");
    
    #elif WEATHER == 2
        printf("Bring an umbrella!\n"); 
        printf("Temp: 18°C\n");
    
    #elif WEATHER == 3
        printf("Wear warm clothes!\n");
        printf("Temp: -2°C\n");
    
    #else
        printf("Unknown weather\n");
    #endif

    printf("Have a nice day!\n");
    return 0;
}