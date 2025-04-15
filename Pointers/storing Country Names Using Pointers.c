#include<stdio.h>
#define COUNTRY_COUNT 10

int main() 
{
    // Array of pointers to store country names
    char *countries[COUNTRY_COUNT] = {"USA", "Canada", "Germany", "France", "Italy",
        "Australia", "India", "Brazil", "Japan", "South Korea"};

    // Printing country names
    printf("List of Countries:\n");
    for (int i = 0; i < COUNTRY_COUNT; i++) 
    {
        printf("%d. %s\n", i + 1, countries[i]);  
    }

    return 0;
}
