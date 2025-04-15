#include <stdio.h>
// Function pointer typedef
typedef int (*ArrayOperation)(int);

// Function definitions
int doubleValue(int x) 
{
    return x * 2;
}

int squareValue(int x) 
{
    return x * x;
}

int increment(int x) 
{
    return x + 1;
}
// Apply operation to each element in the array
void processArray(int arr[], int size, ArrayOperation op)  // 'op' is a function pointer that is passed to this function
{
    for (int i = 0; i < size; i++) 
    {
        arr[i] = op(arr[i]);    
    }
}
// Print array elements
void printArray(int arr[], int size) 
{
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);  // Print each element
    }
    printf("\n");
}
int main() 
{
    int data[] = {1, 2, 3, 4, 5};
    int size = sizeof(data) / sizeof(data[0]);

    printf("Original: ");
    printArray(data, size);

    processArray(data, size, doubleValue);  // apply doble operation 
    printf("Doubled: ");
    printArray(data, size);

    processArray(data, size, squareValue);  // Apply square operation
    printf("Squared: ");
    printArray(data, size);

    processArray(data, size, increment);    // Apply increment operation
    printf("Incremented: ");
    printArray(data, size);

    return 0;
}
