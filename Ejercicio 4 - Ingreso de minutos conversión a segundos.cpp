//Escribir un programa que solicite al usuario un número de minutos y lo convierta a su equivalente en segundos, para luego visualizarlo.
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(){
	
//Variables
	
	const int M1=60;
	int min,seg;

//Ingreso de datos
	
	printf("Conversor de minutos a segundos.\n\n");
	
	printf("Ingrese cantidad de minutos: ");
	scanf("%d",&min);
	fflush(stdin);
	
//Proceso

	seg=min*M1;

//Salida de datos

	printf("La cantidad de segundos es: %d",seg);
	
//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;
		
}
