#include<stdio.h>
int main() 
{
    int num = 10;            
    const int limit = 30;    

    const int *pci = &num;   // Pointer to a constant integer

    printf("num - Address: %p, Value: %d\n", &num, num);
    printf("pci - Address: %p, Value: %p\n", &pci, pci);

    // *pci = 20; ERROR: We Cannot modify value through pci

    pci = &limit;           // Allowed: Pointer can change to another variable

    printf("After changing pointer:\n");
    printf("pci - Address: %p, Value: %p\n", &pci, pci);

    return 0;
}
