#include <stdio.h>
#include <string.h>
#include "info.h"

struct alumnos {
	int edad;
	char nombre[60];
	char genero;
	char carrera[25];
	char nCuenta[10];
}; 
//Se agregra "typedef struct" y se edita la variable
typedef struct alumnos ALUMNO; 

int main(int argc, char *argv[]) {
	appInfoData("Ejemplos de estructuras 2","Noviembre 21, 2017");
	
	/* Se cambua la variable "struct alumnos var1;" y en su lugar se pone...*/
	ALUMNO var1;
	
	printf("Introduce la edad: ");
	scanf("%d", &var1.edad);
	
	printf("Introduce el nombre: ");
	fflush(stdin); //Limpia el buffer de teclado
	gets(var1.nombre);
	
	printf("\nEdad: %d \nNombre: %s", var1.edad, var1.nombre);
	
	return 0;
}
