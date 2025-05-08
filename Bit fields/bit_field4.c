#include<stdio.h>

struct test // define structure with bit_fields
{
    unsigned int x : 2; // 2-bit bit-field for x
    unsigned int y : 2; // 2-bit bit-field for y
    unsigned int z : 2; // 2-bit bit-field for z
};
int main()
{
    struct test t; // declare a variable of the struct type
    t.x = 5;      // assign value to the bit-field x (binary: 101)
    printf("%d", t.x); // print value of x
    return 0;
} 
//warning: large integer implicitly truncated to unsigned type [-Woverflow]
//t.x = 5; assign value to the bit-field x (binary: 101) ,output is 1 will come