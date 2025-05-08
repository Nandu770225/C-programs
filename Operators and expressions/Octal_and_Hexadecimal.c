#include <stdio.h>

int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Output number in octal and hexadecimal
    printf("In Octal: %o\n", num);
    printf("In Hexadecimal: %x\n", num);
    return 0;
}
