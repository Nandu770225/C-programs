#include<stdio.h>

enum month{jan,feb,tue,apr,may};
int main()
{
    enum month m;  // m=++feb; can not write like this
    m = feb + 1;   // compilation error will occur because feb is an enum constant, and enum constants are not variables.
    printf("%d\n",m);
    return 0;
}
