#include <stdio.h>

int main()
{
    int arr[3][4][5];
    printf("%p\t", arr);
    printf("%p\t", arr[0]);
    printf("%p\t", arr[0][0]);
    printf("%p\n", &arr[0][0][0]);
    printf("%zu\t", sizeof(arr));
    printf("%zu\t", sizeof(arr[0]));
    printf("%zu\t", sizeof(arr[0][0]));
    printf("%zu\n", sizeof(arr[0][0][0]));
    return 0;
}