//Escribir un programa que lea un entero, lo multiplique por 2 y a continuación escriba el resultado en la pantalla. 
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(){
	
//Variables

	int n1;

//Ingreso de datos
	
	printf("Se mostrara la multiplicaci%cn por 2 del valor ingresado.\n\n",162);
	printf("Ingrese un valor: ");
	scanf("%d",&n1);
	fflush(stdin);

//Salida de datos

	printf("El resultado es: %d",n1*2);

//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;
		
}
