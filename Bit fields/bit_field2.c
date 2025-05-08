#include<stdio.h>

struct date
{
    int d : 5;  // 5 bits bit-field for d 
    int m : 4;  // 4 bits bit-field for m 
    int y;      // regular integer for year (no bit-field)
};
int main()
{
    printf("size of data is %lu bytes\n", sizeof(struct date));
    struct date dt = {21, 04, 2014};  // assign the date for struct type
    // Here output will be date unexpected value because of integer overflow.
    printf("date is %d/%d/%d", dt.d, dt.m, dt.y); 
    return 0;
}
// Explaination:
// The int d : 5 bit-field is signed and can only hold values from -16 to 15 (since the 5th bit is the sign bit).
// When you assign 21 (which is outside this range), it overflows and gets interpreted as -11 due to two’s complement representation.
// 21 in binary (10101) is stored as just 10101 (5 bits).
// Since the leftmost bit is 1, the system treats it as a negative number (-11).
// 10101 (5-bit) → -16 + (0101) → -16 + 5 = -11.