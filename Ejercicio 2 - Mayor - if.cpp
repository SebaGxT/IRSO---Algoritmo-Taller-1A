//Realizar un programa que lea dos números enteros y que emprima el mayor
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(){
	
//Variables

	int n1,n2,mayor;	

//Ingreso de datos

	printf("B%csqueda del mayor de dos valores\n\n",163);
	
	printf("\Ingrese el primer n%cmero: ",163);
	scanf("%d",&n1);
	fflush(stdin);
	
	printf("\nIngrese el segundo n%cmero: ",163);
	scanf("%d",&n2);
	fflush(stdin);
	
//Salida de datos

	if(n1>n2){
		
		printf("\nEl mayor es el primer n%cmero: %d",163,n1);
		
	}else if(n2>n1){
		
		printf("\nEl mayor es el segundo n%cmero: %d",163,n2);
		
	}

//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;
	
}
