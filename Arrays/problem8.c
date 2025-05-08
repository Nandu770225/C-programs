// Most frequent element in sorted array
#include<stdio.h>

void mostFrequent(int arr[], int n) 
{
    int max_count = 1, res = arr[0], curr_count = 1;
    for(int i=1; i<n; i++) 
    {
        if(arr[i] == arr[i-1]) curr_count++;
        else curr_count = 1;
        
        if(curr_count > max_count) 
        {
            max_count = curr_count;
            res = arr[i-1];
        }
    }
    printf("Most frequent: %d (appears %d times)\n", res, max_count);
}
int main() 
{
    int arr[] = {1, 2, 2, 2, 3, 3, 4, 5, 5, 5, 5};
    mostFrequent(arr, 11);
    return 0;
}