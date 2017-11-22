#include<stdio.h>
#include "info.h"

int main (int argc, char *argv[]){
	appInfoData("Archivo forma secuencial ","Noviembre 24, 2017");
	int dato;
	
	FILE *ptrArchivo;
	ptrArchivo=fopen("datos.dat","wb");
	
	if (ptrArchivo==NULL){
		printf("Error al abrir el archivo:\n");
		
	}else{
		
		printf("Dame el dato a guardar al archivo: ");
		scanf("%d",&dato);
		
		// Se guarda el archivo
		
		fprintf(ptrArchivo,"%d \n",dato);
		fprintf(ptrArchivo,"%d \n",++dato);
		fprintf(ptrArchivo,"%d",++dato);
		
		fclose(ptrArchivo);  //Se cierra el archivo
		
	}
	
	return 0;
}
