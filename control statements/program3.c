#include<stdio.h>

int main()
{
    int k = 10;
    switch (k)
    {
        case 5:
        case 10:
            k++;
            break;
        case 15:
        case 20:
            k--;
            break;
    }
    printf("k = %d\n", k);
    return 0;
}
