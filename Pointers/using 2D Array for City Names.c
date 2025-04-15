#include<stdio.h>
#define CITY_COUNT 10
#define MAX_NAME_LENGTH 15

int main() 
{
    // 2D array to store 10 city names, each with a max of 15 characters (+1 for null terminator)
    char cities[CITY_COUNT][MAX_NAME_LENGTH + 1] = {"New York", "Los Angeles", "Chicago", "Houston", "Phoenix",
        "San Francisco", "San Antonio", "San Diego", "Dallas", "Washington"};

    // Here Printing the stored city names
    printf("List of Cities\n");
    for (int i = 0; i < CITY_COUNT; i++) 
    {
        printf("%d. %s\n", i + 1, cities[i]);
    }
    return 0;
}
