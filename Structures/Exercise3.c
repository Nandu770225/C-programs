#include <stdio.h>

struct myStruct {
    int i;
    char c;
};
void func(struct myStruct v);
int main()
{
    struct myStruct var = {2, 's'};
    func(var);
    return 0;
}
void func(struct myStruct v)
{
    printf("%d   %c\n", v.i, v.c);
}
