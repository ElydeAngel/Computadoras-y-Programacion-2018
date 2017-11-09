//El IVA de una cantidad

#include <stdio.h>
#include "funciones.h"

int main (){
	float p;
	float a;
	
	printf("Calcular el IVA de: ");
	scanf("%f", &p);
	
		printf("Subtotal: %.2f \n", p);
		printf("IVA: %.2f \n", fnValorIVA(p));
		printf("Total: %.2f \n", fnValorConIVA(p));
}
