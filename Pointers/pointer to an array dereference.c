#include<stdio.h>
int main()
{
    int arr[5] = {3, 5, 6, 7, 9};
    int *p = arr;                 
    int (*ptr)[5] = &arr;          // Pointer to an array of 5 integers

    printf("p=%p, ptr=%p\n", p, ptr);
    printf("*p=%d, *ptr=%p\n", *p, *ptr);
    
    printf("sizeof(p)=%u, sizeof(*p)=%u\n", sizeof(p), sizeof(*p));
    printf("sizeof(ptr)=%u, sizeof(*ptr)=%u\n", sizeof(ptr), sizeof(*ptr));

    return 0;
}
