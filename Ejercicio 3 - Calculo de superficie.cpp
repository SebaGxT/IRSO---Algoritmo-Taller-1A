//Escribir un programa que solicite al usuario la longitud y el ancho de una habitación y a continuación visualice su superficie con 4 decimales.
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(){
	
//Variables

	int longitud,ancho;
	float superficie;

//Ingreso de datos

	printf("Calculo de superficie.\n\n");
	
	printf("Ingrese la longitud de la habitaci%cn: ",162);
	scanf("%d",&longitud);
	fflush(stdin);
	
	printf("\nIngrese el ancho de la habitaci%cn: ",162);
	scanf("%d",&ancho);
	fflush(stdin);
	
//Proceso

	superficie=longitud*ancho;

//Salida de datos

	printf("\n\nLa superficie es: %.4f",superficie);

//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;
		
}
