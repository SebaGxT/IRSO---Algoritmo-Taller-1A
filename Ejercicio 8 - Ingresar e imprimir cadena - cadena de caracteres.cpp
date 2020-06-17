/*Leer una cadena de caracteres por el teclado y visualizarla como indica el ejemplo:
	
Utilizar la función

strlen (arg1) Devuelve la longitud del texto representado por arg1. Ejemplo: strlen(cadena1)

Recordar que scanf para cadenas no toma blancos, USAR gets

EJEMPLO: CADENA

C

A

D

E

N

A
*/
//Librerias
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Main
int main(){
	
//Variables

	int i,numcarac;
	char vec[50];

//Ingreso de datos
	
	printf("Imprimir palabras en columna\n\n");
	
	printf("Ingrese la palabra: ");
	gets(vec);
	fflush(stdin);

//Proceso
	
	numcarac=strlen(vec);
	printf("\n\n");

//Salida de datos
	
	for(i=0;i<numcarac;i++){
		
		printf("%c\n\n",vec[i]);
		
	}

//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;
	
}
