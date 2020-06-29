//Realizar un programa que lea un número entero y que emprima si es par o impar.
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(){
	
//Variables
	
	int n1;

//Ingreso de datos
	
	printf("Ingrese un n%cmero entero y se indicara si es par o impar.\n\n"),163;
	
	printf("Ingrese un valor: ");
	scanf("%d",&n1);
	fflush(stdin);

//Salida de datos
	
	if(n1%2==0){
		
		printf("\n\nEl n%cmero ingresado es par.",163);
		
	}else{
		
		printf("\n\nEl n%cmero ingresado es impar.",163);
		
	}

//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;
	
}
