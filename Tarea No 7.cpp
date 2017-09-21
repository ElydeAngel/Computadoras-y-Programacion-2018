//Tarea No. 7: 

#include<stdio.h>
 
int main(){
 
int num1;
int num2;
int num3;
 
printf("Escribe 3 numeros enteros diferentes:\n");
scanf("%d%d%d", &num1, &num2, &num3);

	if(num1>0 && num2>0 && num2>0 && (num1!=num2!=num3!=num1)){
		if(num1<num2 && num1<num3)
		printf("\n %d es el numero menor", num1);
		if(num2<num1 && num2<num3)
		printf("\n %d es el numero menor", num2);
		if(num3<num2 &&num3<num1)
		printf("\n %d es el numero menor", num3);
	}else{
	printf("\nLos numeros deben de ser mayores a 0\n");
	}
}

