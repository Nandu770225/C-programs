#include<stdio.h>
int main() 
{
    float farray[] = {3.14, 2.71, 1.61};
    char carray[] = {'A', 'B', 'C'};
    
    float *pf = farray + 2;
    char *pc = carray + 2;

    printf("%.2f\n", *pf);
    pf--;
    printf("%.2f\n", *pf);
    pf--;
    printf("%.2f\n", *pf);

    printf("%c\n", *pc);
    pc--;
    printf("%c\n", *pc);
    pc--;
    printf("%c\n", *pc);

    return 0;
}
