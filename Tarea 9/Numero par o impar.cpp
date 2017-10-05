//Par o impar

#include <stdio.h>
#include <math.h>

int main(){
int num;
	
	printf("Escribe un numero entero: \n");
	scanf("%d", &num);
		
		if(num % 2 == 0){
			printf("Es un numero par");
		}else{
			printf("Es un numero impar");
		}
}

