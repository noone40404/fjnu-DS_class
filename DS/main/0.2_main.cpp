#include "0.2_Triple.h"

Triple x,y,z;
float a,b,c;

inline void check(Triple z){ printf("%d %d %d\n",x.a,x.b,x.c);}

int main(){
	scanf("%f%f%f",&a,&b,&c);
	InitialTriple(x,a,b,c);
	scanf("%f%f%f",&a,&b,&c);
	InitialTriple(y,a,b,c);
	add(x,y,z); check(z);
	sub(x,y,z); check(z);
	multi(x,y,z); check(z);
	printf("%d\n",compare(x,y));
}
