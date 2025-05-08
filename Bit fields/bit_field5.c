#include<stdio.h>

struct test
{
    unsigned int x;
    long int y : 32;  // 33-bit bit-field for y
    unsigned int z;
};
int main()
{
    printf("%lu\n", sizeof(struct test));  // print size of struct
    return 0;
}
// Error will occur
// error: width of 'y' exceeds its type
// long int y : 33;  // 33-bit bit-field for y