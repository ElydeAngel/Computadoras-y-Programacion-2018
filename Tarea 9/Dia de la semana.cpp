//Días de la semana

#include <stdio.h>

int main(){
int num;

	printf("Escribe un numero entre 1 y 7: \n");
		scanf("%d", &num);
		if(num>=1 && num<=7){
			switch(num){
				case 1:
					printf("Domingo");
				break;
				case 2:
					printf("Lunes");
				break;
				case 3:
					printf("Martes");
				break;
				case 4:
					printf("Miercoles");
				break;
				case 5:
					printf("Jueves");
				break;
				case 6:
					printf("Viernes");
				break;
				case 7:
					printf("Sabado");
				break;
			}
		}else{
			printf("\nEl numero debe ser entre 1 y 7.");
		}
}
	
