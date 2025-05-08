#include<stdio.h>

int main()
{
    int var = 2, x = 1, y = 2;
    switch (var)
    {
        case 1:
            x++;
            break;
        case 2:
            y++;
            break;
    }
    printf("x = %d, y = %d\n", x, y);
    return 0;
}
