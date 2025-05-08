// Check distinct elements
#include<stdio.h>

int allDistinct(int arr[], int n) 
{
    for(int i=0; i<n; i++) 
    {
        for(int j=i+1; j<n; j++) 
        {
            if(arr[i] == arr[j]) return 0;
        }
    }
    return 1;
}
int main() 
{
    int arr[] = {1, 2, 3, 4, 5};
    if(allDistinct(arr, 5)) printf("All distinct\n");
    else printf("Contains duplicates\n");
    return 0;
}