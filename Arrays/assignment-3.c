#include<stdio.h>
int Average(int array[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++) 
    {
        sum += array[i];
    }
    return sum / size;
}

int main() 
{
    int size;                                       

    printf("Enter the size of the array");
    scanf("%d", &size);

    int array[size];                                     // dynamic size based on user input

    printf("Enter the elements of the array\n");
    for (int i = 0; i < size; i++) 
    {
        scanf("%d", &array[i]);
    }

    int avg = Average(array, size);
    printf("The average of the elements is %d\n", avg);

    return 0;
}
