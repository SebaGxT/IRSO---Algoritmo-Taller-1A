//Realizar un programa en el cual se ingresen valores enteros. En el momento que se ingrese un 0 (cero) deberá interrumpirse el ingreso de datos y mostrar por pantalla la suma de los valores pares ingresados. 
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(){
	
//Variables

	int n1,par;

//Iniciación de variables en 0

	par=0;

//Ingreso de datos

	printf("Valores enteros, se suman los pares y finaliza con 0.\n\n");
	
	do{
		
		printf("\nIngrese un n%cmero: ",163);
		scanf("%d",&n1);
		fflush(stdin);

//Proceso
		
		if(n1%2==0&&n1!=0){
			
			par++;
			
		}
		
	}while(n1!=0);

//Salida de datos

	printf("\n\nLa cantidad de valores par ingresados es: %d",par);

//Pausa y fin de programa

	printf("\n\n\n\n");
	system("pause");
	return 0;	
	
}
