#include <stdio.h>
typedef struct{
    float real;
    float imag;
}Complex;

void InitialComplex(Complex &x,float r,float i);
float GetReal(Complex x);
float GetImag(Complex x);
void SetReal(Complex &x,float real);
void SetImag(Complex &x,float imag);
Complex add(Complex x,Complex y);
Complex sub(Complex x,Complex y);
Complex multi(Complex x,Complex y);
Complex except(Complex x,Complex y);