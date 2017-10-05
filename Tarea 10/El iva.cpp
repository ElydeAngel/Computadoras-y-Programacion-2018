//El IVA de una cantidad

#include <stdio.h>


int main (){
	int iva;
	int precio;
	int total;
	
	printf("Calcular el IVA de: ");
	scanf("%d", &precio);
		printf("Subtotal: %d \n", precio);
	iva=precio*0.16;
		printf("IVA: %d \n", iva);
	total=precio+iva;
		printf("Total: %d", total);
}
