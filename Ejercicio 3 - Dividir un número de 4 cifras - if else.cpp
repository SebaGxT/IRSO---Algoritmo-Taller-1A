/*Hacer un programa que lea un número entero positivo de cuatro cifras. Se pide partir ese número en dos y asignar en dos variables con los siguientes nombres: prim y seg.
Ejemplo: si se ingresa el 1984, la variable prim tendrá en memoria el valor 19 y la variable seg tendrá en memoria el valor 84.
Se pide visualizar dichas variables con carteles aclaratorios y luego visualizar si la variable prim, se encuentra en  alguno de los siguientes rangos 0..49 , 50...79, o  80...99*/
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(){
	
//Variables
	
	int n1,prim,seg;
	
//Ingreso de datos
	
	printf("Ingrese un valor de 4 cifras: ");
	scanf("%d",&n1);
	fflush(stdin);

//Proceso

	prim=n1/100;
	seg=n1%100;

//Salida de datos

	printf("\n\nLas primeras dos cifras son: %d",prim);
	printf("\nLas segundas dos cifras son: %d",seg);
	
	if(prim<100&&prim>=80){
		
		printf("\n\nLas primeras dos cifras pertenece al rango 80-99 \n");
		
	}else if(prim<=79&&prim>=50){
		
		printf("\n\nLas primeras dos cifras pertenece al rango 50-79 \n");
		
	}else if(prim<=49&&prim>=0){
		
		printf("\n\nLas primeras dos cifras pertenece al rango 0-49 \n");
		
	}
	
//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;
	
}
