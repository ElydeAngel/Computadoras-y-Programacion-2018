#include<stdio.h>
#include "info.h"

int main (int argc, char *argv[]){
	appInfoData("Archivo forma secuencial, dato leido","Noviembre 24, 2017");
	
	int datoLeido;
	
	FILE *ptrArchivo;
	ptrArchivo=fopen("datos.dat","rb");
	
	if (ptrArchivo==NULL){
		printf("Error al abrir el archivo\n");
			
	}else{
		while(!feof(ptrArchivo)){
			fscanf(ptrArchivo,"%d",&datoLeido);
			printf("Dato: %d\n",datoLeido);
		}
		fclose(ptrArchivo);
	}
	
}
