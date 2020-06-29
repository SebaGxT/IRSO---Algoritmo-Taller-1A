//Realizar un programa que lea un número entero y que emprima si termina o no termina en 23
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(){
	
//Variables

	int n1;

//Ingreso de datos

	printf("Se indicara si el n%cmero termina o no en 23\n\n",163);
	printf("Ingrese un n%cmero entero: ",163);
	scanf("%d",&n1);
	fflush(stdin);

//Salida de datos
	
	if(n1%100==23){
		
		printf("\n\nEl n%cmero termina en 23",163);
		
	}else{
		
		printf("\n\nEl n%cmero no termina en 23",163);
		
	}

//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;
	
}
