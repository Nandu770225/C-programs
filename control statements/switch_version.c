#include<stdio.h>

int main()
{
    int x, y, z;
    x = 30;
    y = 5;

    switch (x)
    {
        case 10:
            z++;
            break;
        case 20:
            z--;
            break;
        case 30:
            switch (y)
            {
                case 2:
                    z = z + 3;
                    break;
                case 4:
                case 5:
                    z = z + 10;
                    break;
                default:
                    z = z - 2;
            }
            break;
        default:
            z = 0;
    }
    return 0;
}
