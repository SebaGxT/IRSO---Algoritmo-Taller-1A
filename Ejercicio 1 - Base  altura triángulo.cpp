//Realizar un programa que lea las medidas de la base y la altura de un triángulo, y que visualice la superficie del mismo.
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(){
	
//Variables

	int base,altura,superficie;

//Ingreso de datos
	
	printf("Superficie del tri%cngulo\n\n",160);
	
	printf("\nIngrese la base: ");
	scanf("%d",&base);
	fflush(stdin);
	
	printf("\nIngrese la altura: ");
	scanf("%d",&altura);
	fflush(stdin);

//Proceso
	
	superficie=base*altura;

//Salida de datos

	printf("\nLa superficie del tri%cngulo es: %d",160,superficie);

//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;
	
}
