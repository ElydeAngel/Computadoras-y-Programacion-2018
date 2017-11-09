#include <stdio.h>
#define IVA 0.16

float fnValorIVA(float a){
	return IVA*a;
}

float fnValorConIVA(float a){
	return (IVA*a)+a;
}
