#include<stdio.h>
int main() 
{
    int a = 10,*pInt = &a;
    float b = 20.5,*pFloat = &b;
    char c = 'A',*pChar = &c;

    printf("Original Addresses\n");
    printf("pInt   = %p\n", pInt);
    printf("pFloat = %p\n", pFloat);
    printf("pChar  = %p\n", pChar);

    // Pointer arithmetic
    pInt++;                         // Moves by sizeof(int)
    pFloat++;                       // Moves y sizeof(float)
    pChar++;                        // Moves by sizeof(char)

    printf("\nAfter Increment\n");
    printf("pInt   = %p\n", pInt);
    printf("pFloat = %p\n", pFloat);
    printf("pChar  = %p\n", pChar);

    return 0;
}
