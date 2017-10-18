#include <stdio.h>

int main (){

int num=0;
int x;
int y;

	do{ 													//Este es el menú de opciones
		printf(" Que operacion deseas realizar? \n 1. Suma \n 2. Resta \n 3. Salir \n Seleccione la opcion deseada:");
		scanf("%d", &num);
			switch(num){
				case 1: 									// Si se escoje 1 se ejecutará este módulo de suma
					printf("\n Que numeros deseas sumar? \n");
					scanf("%d", &x);
					scanf("%d", &y);
					printf("Esto es igual a: %d \n\n", x+y);
				break;
				case 2:										// Si se escoje 2 se ejecutará este módulo de resta
					printf("\n Que numeros deseas restar? \n");
					scanf("%d", &x);
					scanf("%d", &y);
					printf("Esto es igual a: %d \n\n", x-y);
				break;
			}
	}while (num!=3); 										//Si se ecoje 3 se terminará el programa
	printf("\n Fin del programa.");
}
