#include <stdio.h>
struct Triple{
	float a,b,c;
	bool operator <(const Triple &x)const{
		if(a!=x.a) return a<x.a;
		if(b!=x.b) return b<x.b;
		return c<x.c;
	}
};

void InitialComplex(Triple &x, float a, float b,float c); 
void add(Triple x, Triple y,Triple &z);
void sub(Triple x, Triple y,Triple &z);
void multi(Triple x, Triple y,Triple &z);
int compare(Triple x, Triple y);