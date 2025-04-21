//  subtract two complex numbers using a function that accepts pointers to structures
#include <stdio.h>

struct complex 
{
    float real;
    float imag;
};
// Function prototype for subtraction
void subtract(struct complex *x, struct complex *y, struct complex *result);

int main() 
{
    struct complex a, b, c;
    printf("Enter first complex number (real and imag): ");  // Input first complex number
    scanf("%f%f", &a.real, &a.imag);
    printf("Enter second complex number (real and imag): ");  // Input second complex number
    scanf("%f%f", &b.real, &b.imag);

    subtract(&a, &b, &c);  // Call subtract function
    printf("Subtraction result = %.2f + %.2fi\n", c.real, c.imag);
    return 0;
}
// Function to subtract two complex numbers
void subtract(struct complex *x, struct complex *y, struct complex *result) 
{
    result->real = x->real - y->real;
    result->imag = x->imag - y->imag;
}
