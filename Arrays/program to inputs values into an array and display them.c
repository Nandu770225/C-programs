#include<stdio.h>
int main()
{
    int arr[5], i;
    for (i=0; i<5; i++)
    {
        printf("Enter a value for arr[%d]", i);
        scanf("%d", &arr[i]);
    }
    printf("The array elements are\n");
    for (i=0; i<5; i++)
    printf("%d\t", arr[i]);
    printf("\n");
    return 0;
}