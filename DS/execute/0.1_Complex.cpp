#include <stdio.h>
// #include <bits/stdc++.h>
#include "0.1_complex.h"

inline float dou(float x){ return x*x;}
inline void InitialComplex(Complex &x,float r,float i){ x.real=r,x.imag=i;}
inline float GetReal(Complex x){ return x.real; }
inline float GetImag(Complex x){ return x.imag; }
inline void SetReal(Complex &x,float real){ x.real=real; }
inline void SetImag(Complex &x,float imag){ x.imag=imag; }
inline Complex add(Complex x,Complex y){ Complex z; z.real=x.real+y.real; z.imag=x.imag+y.imag; return z;}
inline Complex sub(Complex x,Complex y){ Complex z; z.real=x.real-y.real; z.imag=x.imag-y.imag; return z;}
inline Complex multi(Complex x,Complex y){
    Complex z; z.real=x.real*y.real-x.imag*y.imag; z.imag=x.real*y.imag+x.imag*y.real;
    return z;
}
inline Complex expect(Complex x,Complex y){
    Complex z;
    z.real=(x.real*y.real+x.imag*y.imag)/(dou(y.real)+dou(y.imag));
    z.imag=(x.real*(-1.0)*y.imag+y.real*x.imag)/(dou(y.real)*dou(y.imag));
    return z;
}