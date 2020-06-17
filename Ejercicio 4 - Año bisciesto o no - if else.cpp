/*Hacer un programa que lea un n�mero entero positivo de cuatro cifras. Ese n�mero significa un a�o
Se pide visualizar si dicho a�o es bisiesto o no.
Algoritmo a utilizar:
Si el a�o es secular (termina en 00), el a�o es bisiesto si sus dos primeras cifras son divisibles por cuatro.
Si el a�o no es secular (no termina en 00), el a�o es bisiesto si sus dos �ltimas cifras son divisibles por cuatro.*/
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
