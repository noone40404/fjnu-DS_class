#include "0.1_complex.h"

//using phone to code. external keyboard doesn't support Chinese with the app I'm writing with.

int main(){
	Complex a,b,c;
	float real,imag;
	printf("input first complex\n");
	scanf("%f %f",&real,&imag);
	InitialComplex(a,real,imag);
	printf("input second complex\n");
	scanf("%f %f",&real,&imag);
	SetReal(b,real); SetImag(b,imag);
	printf("first complex: real: %f,imag: %f\n",GetReal(a),GetImag(a));
	printf("second complex: real: %f,imag: %f\n",GetReal(b),GetImag(b));
	printf("sum of them: %f %f\n",GetReal(add(a,b)),GetImag(add(a,b)));
	printf("sun of them: %f %f\n",GetReal(sub(a,b)),GetImag(sub(a,b)));
	printf("multi of them: %f %f\n",GetReal(multi(a,b)),GetImag(multi(a,b)));
	printf("expect of them: %f %f\n",GetReal(except(a,b)),GetImag(except(a,b)));
	return 0;
}