#include<stdio.h>

void fnDibujaCuadro(int num1,int num2);	//Prototipo de la función

int main(){								//Inicio de instrucciones
	int num1,num2;    
	
	printf("Introduce el alto de tu cuadro:");
	scanf("%d", &num1);
	printf("Introduce el largo de tu cuadro:");
	scanf("%d", &num2);
	
	fnDibujaCuadro(num1,num2);
	
	return 0;
}
										//Aquí se declara la función
void fnDibujaCuadro(int num1,int num2){
	int j,k;
	
		for(j=1; j<=num1; j=j+1){
			for(k=1; k<=num2; k=k+1){
				printf("*");
			}
			printf("\n");
		}
}
