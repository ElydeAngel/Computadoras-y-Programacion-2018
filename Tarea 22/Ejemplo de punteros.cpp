#include <stdio.h>
#include "info.h"

int main(int argc, char const *argv[]){
	appInfoData("Ejemplo de Punteros","Noviembre 16, 2017");
	
	int a;
	a = 10;
	int *puntero;
	puntero=&a;
	
	printf("%d \n", *puntero);
	
	return 0;
	
}
