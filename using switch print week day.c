#include<stdio.h>

int main() 
{
    int week;
    printf("Enter week number (1-7)");
    scanf("%d", &week);

    switch (week)                           // The switch statement checks the value of week
    {
        case 1:                             // If week = 1 - Monday                          
           printf("Monday\n");              // If week = 2 - Tuesday
            break;                          // up to 7 → Sunday
        case 2:
            printf("Tuesday\n");
            break;                          // Stops execution after a match and prevents fall-through
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
         printf("Invalid week number\n");
         break;

    }

    return 0;
}
