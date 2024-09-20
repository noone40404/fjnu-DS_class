#include <stdio.h>
#include "0.2_Triple.h"

inline void InitialTriple(Triple &x, float a, float b,float c){ x.a=a,x.b=b,x.c=c; } 
inline void add(Triple x, Triple y,Triple &z){ z.a=x.a+y.a,z.b=x.b+y.b,z.c=x.c+y.c; }
inline void sub(Triple x, Triple y,Triple &z){ z.a=x.a-y.a,z.b=x.b-y.b,z.c=x.c-y.c;}
inline void multi(Triple x, Triple y,Triple &z){ z.a=x.a*y.a,z.b=x.b*y.b,z.c=x.c*y.c;}
inline int compare(Triple x, Triple y){ 
	if(x.a==y.a && x.b==y.b &&x.c==y.c) return 0;
	return x<y?1:-1;
}