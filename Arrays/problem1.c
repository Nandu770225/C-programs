// Difference of largest and smallest elements
#include <stdio.h>

int main()
 {
    int arr[] = {20, 40, 50, 60, 30, 80};
    int n = sizeof(arr)/sizeof(arr[0]);
    int min = arr[0], max = arr[0];
    
    for(int i=1; i<n; i++) 
    {
        if(arr[i] < min) min = arr[i];
        if(arr[i] > max) max = arr[i];
    }
    printf("Difference: %d\n", max-min);
    return 0;
}