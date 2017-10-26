#include <stdio.h>

using namespace std;

int main(int argc, char *argv[]) {
	int var1=5;
	int var2=2;
	int resultado=0;
	
	//suma
	resultado=var1 + var2;
	printf("%d + %d = %d \n", var1, var2, resultado);
	
	//resta
	resultado=var1 - var2;
	printf("%d - %d = %d \n", var1, var2, resultado);
	
	//multiplicación
	resultado=var1 * var2;
	printf("%d x %d = %d \n", var1, var2, resultado);
	
	//División
	resultado=var1 / var2;
	printf("%d / %d = %d \n", var1, var2, resultado);
	
	//Modulo
	resultado=var1 % var2;
	printf("%d mod %d = %d \n", var1, var2, resultado);
	
	return 0;
}
