#include<stdio.h>

int Sum(int array[], int size) 
{
    int sum = 0;
    for (int i = 0; i < size; i++) 
    {
        sum += array[i];
    }
    return sum;
}

int main() 
{
    int numbers[] = {35, 27, 49, 155, 58};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    int total = Sum(numbers, size);
    printf("The sum of the elements is %d\n", total);

    return 0;
}
