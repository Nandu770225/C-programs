#include<stdio.h>

struct example 
{
    int a;             // 4 bytes
    char b;            // 1 byte
    char str_name[20]; // 20 bytes
    double c;          // 8 bytes
    float d;           // 4 bytes
};
int main() 
{
    struct example e;
    printf("Size of example structure: %ld bytes\n", sizeof(e));
    printf("\nSize occupied by int a: %d\n", sizeof(e.a));
    printf("Size occupied by char b: %d\n", sizeof(e.b));
    printf("Size occupied by string str_name: %d\n", sizeof(e.str_name));
    printf("Size occupied by double c: %d\n", sizeof(e.c));
    printf("Size occupied by float d: %d\n", sizeof(e.d));
    return 0;
}    // original bytes is 37 bytes, padding increases it to 48 bytes.
