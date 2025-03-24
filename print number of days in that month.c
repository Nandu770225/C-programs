#include<stdio.h>

int main() 
{
    int month;
    printf("Enter month number (1-12)");
    scanf("%d", &month);

    switch (month) 
    {
        case 1:                                         // January
        case 3:                                         // March
        case 5:                                         // May
        case 7:                                         // July
        case 8:                                         // August
        case 10:                                        // October
        case 12:                                        // December
            printf("31 days\n");
            break;

        case 4:                                         // April
        case 6:                                         // June
        case 9:                                         // September
        case 11:                                        // November
            printf("30 days\n");
            break;

        case 2:                                         // February
            printf("28 or 29 days (depending on leap year)\n");
            break;

        default:
            printf("Invalid month number(1 and 12)\n");
            break;
    }

    return 0;
}
