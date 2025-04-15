#include<stdio.h>
int main() 
{
    int n = 5;
    const int l = 500;
    int *pi;
    const int *pci;

    pi = &n;
    pci = &l;

    printf("*pi = %d\n", *pi);
    printf("n address: %p  value: %d\n", &n, n);
    printf("l address: %p  value: %d\n", &l, l);
    printf("pi address: %p  value: %p\n", &pi, pi);
    printf("pci address: %p  value: %p\n", &pci, pci);

    return 0;
}
