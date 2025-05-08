#include<stdio.h>

void func1(char x[]);
void func2(char x[]);

int main()
{
    char arr[5];
    puts(arr);
    func1(arr);
    puts(arr);
    func2(arr);
    puts(arr);
    return 0;
}
void func1(char x[])
{
    x = "Jack";
    puts(x);
}
void func2(char x[])
{
    x[0] = 'J';
    x[1] = 'i';
    x[2] = '1';
    x[3] = '1';
    x[4] = '\0';
    puts(x);
}