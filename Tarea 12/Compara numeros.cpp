//NOTA: No sé si este bien planteado lo de los numeros flotantes, pero así lo entendi yo /.\

//Tarea No. 12: Comparacion de numeros
#include <stdio.h>

int main (){
float num1;
float num2;
int num3;

	printf("Se compararan tres numeros... \n");
	printf("Ingresa el primer numero: \n");
	scanf("%f", &num1);
	printf("Ingresa el segundo numero: \n");
	scanf("%f", &num2);
	printf("Ingresa el tercer numero: \n");
	scanf("%d", &num3);
	
	//Numeros iguales
		if(num1==num2 && num2==num3 && num1==num3)
			printf("Los tres numeros son iguales.");
			
	//Algunos numeros iguales
		if(num1==num2) 											
			printf("\n El primer numero /%f/ y el segundo /%f/, son iguales", num1, num2);
		if(num2==num3)
			printf("\n El segundo numero /%f/ y el tercero /%d/, son iguales", num2, num3);
		if(num3==num1)
			printf("\n El primer numero /%f/ y el tercero /%d/, son iguales", num1, num3);
			
	//Numero menor
		if(num1<num2 && num1<num3)
			printf("\n %f es el numero menor", num1);
		if(num2<num1 && num2<num3)
			printf("\n %f es el numero menor", num2);
		if(num3<num2 &&num3<num1)
			printf("\n %d es el numero menor", num3);
	
	//Numero mayor
		if(num1>num2 && num1>num3)
			printf("\n %f es el numero mayor", num1);
		if(num2>num1 && num2>num3)
			printf("\n %f es el numero mayor", num2);
		if(num3>num2 &&num3>num1)
			printf("\n %d es el numero mayor", num3);	
}
