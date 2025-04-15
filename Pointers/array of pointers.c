#include<stdio.h>
int main()
{
    int *pa[3];
    int i, a=5, b=10, c=15;
    // Here Assigning addresses of variables to the pointer array
    pa[0]=&a; 
    pa[1]=&b;
    pa[2]=&c;

    for(i=0; i<3; i++)
    {
        printf("pa[%d]=%p\t", i, pa[i]);      // pa[i]  prints the memory address stored at each index.
        printf("*pa[%d]=%d\n", i, *pa[i]);    // *pa[i] Printing the value stored at that address.
    }  
    return 0;
}