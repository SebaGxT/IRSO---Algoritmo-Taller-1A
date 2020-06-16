//Escribir un programa que lea 2 valores enteros y los guarde en las variables A y B respectivamente. Permutar los valores guardados en A y B, y luego imprimir el resultado.
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(){
	
//Variables

	int n1,n2,aux;

//Ingreso de datos

	printf("Debe ingresar dos valores y se intercambiaran.\n\n");
	
	printf("Ingrese un valor: ");
	scanf("%d",&n1);
	fflush(stdin);
	
	printf("\nIngrese el segundo valor: ");
	scanf("%d",&n2);
	fflush(stdin);
	
	printf("\nValor 1: %d",n1);
	printf("\nValor 2: %d",n2);

//Proceso
	
	aux=n1;
	n1=n2;
	n2=aux;

//Salida de datos

	printf("\nValor 1: %d",n1);
	printf("\nValor 2: %d",n2);

//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;
		
}
