/*Hacer un programa que lea un número entero positivo de cuatro cifras. Ese número significa un año
Se pide visualizar si dicho año es bisiesto o no.
Algoritmo a utilizar:
Si el año es secular (termina en 00), el año es bisiesto si sus dos primeras cifras son divisibles por cuatro.
Si el año no es secular (no termina en 00), el año es bisiesto si sus dos últimas cifras son divisibles por cuatro.*/
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(){
	
//Variables

	int anio,prim,seg;

//Ingreso de datos
	
	printf("Determinar si el a%co es o no bisciesto\n\n",164);
	
	printf("Ingrese el a%co: ",164);
	scanf("%d",&anio);
	fflush(stdin);

//Proceso

	prim=anio/100;
	seg=anio%100;

//Salida de datos

	if(seg==00&&prim%4==0){
		
		printf("\n\nEl a%co es bisciesto.",164);
		
	}else if(seg!=00&&seg%4==0){
	
		printf("\n\nEl a%co es bisciesto.",164);
	
	}else{
		
		printf("\n\nEl a%co no es bisciesto.",164);
		
	}

//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;
	
}
