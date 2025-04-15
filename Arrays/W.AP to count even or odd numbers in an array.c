#include<stdio.h>
int main()
{
    int arr[5], i, even = 0, odd = 0;                    // Taking input for array elements
    printf("Enter 5 elements of array\n");
    for (i = 0; i < 5; i++) 
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 5; i++) 
    {                                                    // Counting even and odd numbers
        if (arr[i] % 2 == 0)
         {
            even++;
        } 
        else 
        {
            odd++;
        }
    }

    printf("Even numbers = %d, Odd numbers = %d\n", even, odd);
    return 0;
}
