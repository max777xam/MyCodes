#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
struct complex
{
    double real;
    double imag;
};
struct complex complex_sum(struct complex a, struct complex b)
{
    struct complex c;
    c.real = a.real + b.real;
    c.imag = a.imag + b.imag;
    return c;
}
struct complex complex_product(struct complex a, struct complex b)
{
    struct complex c;
    c.real = a.real * b.real - a.imag * b.imag;
    c.imag = a.real * b.imag + a.imag * b.real;
    return c;
}
int main()
{
    struct complex a, b;
    scanf("%lf %lf", &a.real, &a.imag);
    scanf("%lf %lf", &b.real, &b.imag);
    struct complex sum = complex_sum(a, b);
    struct complex product = complex_product(a, b);
    printf("和的结果是%.2lf+%.2lfi\n", sum.real, sum.imag);
    printf("积的结果是%.2lf+%.2lfi\n", product.real, product.imag);
    return 0;
}