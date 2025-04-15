#include<stdio.h>
#include<stdlib.h>

int* fun() 
{
    int num = 20;
    return &num;      //  num was automatically cleaned up after fun() finished
}
int main() 
{
    int *ptr = fun();
    printf("%d\n", *ptr); // Dangling pointer-When printf tries to access *ptr, it is reading from invalid memory.
    return 0;
}
