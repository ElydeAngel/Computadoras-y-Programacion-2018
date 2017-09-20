//Tablas

#include <stdio.h>

int main() {
	int tab=0;
	int n=0;
	
	printf("Escribe un numero entero que desees multiplicar: \n");
		scanf ("%d", &tab);
		if (tab>=1 && tab<=10000000000){
			for (n=1; n<=10; n=n+1){
	  			printf ("%d x %d = %d \n", tab, n, tab*n);
	  		}
		}else{
	printf ("Fin de programa");
	}
	return 0;
}
