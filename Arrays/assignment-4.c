#include<stdio.h> 

void reverse(int arr[], int n)                  // function definition
{
    printf("Reverse of an array is\n");
    for (int i = n - 1; i >= 0; i--) 
    {
        printf("%d\t", arr[i]);
    }
}

int main() 
{
    int arr[100], n;
    printf("Enter the no of elements ");           // Taking size of the array from user
    scanf("%d", &n);

    printf("Enter the elements in the array\n");      // Take array elements from user
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    reverse(arr, n);              // call reverse function
    return 0;
}
