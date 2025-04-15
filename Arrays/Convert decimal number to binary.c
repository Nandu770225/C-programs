#include <stdio.h>
int main()
{
    int num, arr[15], i, j;
    printf("Enter a decimal number");
    scanf("%d", &num);
    
    i = 0;
    while (num > 0)
    {
        arr[i] = num % 2;                                  // Here store the remainder in the array
        num /= 2;
        i++;
    }

    printf("Binary number is");
    for (j = i - 1; j >= 0; j--)                           //  Here print the array backwards
        printf("%d", arr[j]);
    
    printf("\n");
    return 0;
}
