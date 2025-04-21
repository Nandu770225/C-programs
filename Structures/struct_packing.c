#include<stdio.h>
#pragma pack(1) // #pragma pack(1) is used to disable padding between struct members by setting the alignment to 1 byte.
                // To reduce memory size of structs
struct structa_tag 
{
    char c;
    short int s;
} struct_A;

struct structb_tag 
{
    short int s;
    char c;
    int i;
} struct_B;

typedef struct structc_tag 
{
    char c;
    double d;
    int s;
} struct_C;

struct structd_tag 
{
    double d;
    int s;
    char c;
} struct_D;

int main()
{
    printf("sizeof(struct_A) = %lu\n", sizeof(struct_A));
    printf("sizeof(struct_B) = %lu\n", sizeof(struct_B));
    printf("sizeof(struct_C) = %lu\n", sizeof(struct_C));
    printf("sizeof(struct_D) = %lu\n", sizeof(struct_D));
    return 0;
}
