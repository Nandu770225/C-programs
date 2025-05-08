#include<stdio.h>
 
int main()
{
 unsigned int value = 0x11223344;
 char *r = (char *) &value;
 int i;                                                    
 for(i=0; i<4; i++) 
 {
 printf("Address of 0x%x = %d \n", r[i], &r[i]);
 }
 return 0;
}

// The first byte (r[0]) is 0x44, which is the least significant byte of 0x11223344.
// That means your system stores the least significant byte first (at the lowest memory address).
// This is little-endian.
