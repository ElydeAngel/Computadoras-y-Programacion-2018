#include <stdio.h>
#include <string.h>
#include "info.h"
#include "alumnos.h"
#define MAX 3

int main(int argc, char *argv[]) {
	appInfoData("Ejemplos de estructuras 5","Noviembre 21, 2017");
	
	/*
	1er programa: Datos de un alumno, muestra info con printf
	ALUMNO var1; 
	var1=nuevoAlumno();
	printf("\nEdad: %d \nNombre: %s", var1.edad, var1.nombre);
	retur 0;
	
	2do programa: Datos de un alumno, imprimiendo info desde cabecera
	ALUMNO var1;
	var1=nuevoAlumno();
	
	En la cabecera "alumnos.h" se agrega "void imprimeAlumno(ALUMNO al)"
	con sus resoectivos datos y se cambia el "printf("\nEdad: %d \nNombre: %s", var1.edad, var1.nombre);"
	por... "imprimeAlumno(var1);"
	return 0;
	
	3er programa:
	El actual, ya editado para que se muestren datos de 3 alumnos.
	*/
	
	ALUMNO lista [MAX];
	
	int j=0;
	for(j=0; j<MAX; j++){
		printf("Datos alumno %d \n", j+1);
		lista[j]=nuevoAlumno();
	}
	
	for(j=0; j<MAX; j++){
		imprimeAlumno(lista[j]);
	}
	
	return 0;
}
