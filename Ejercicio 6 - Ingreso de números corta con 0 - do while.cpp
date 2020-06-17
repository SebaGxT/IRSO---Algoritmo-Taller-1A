//Hacer un programa que lea números hasta que el usuario decida ingresar un 0. Descartando ese 0, contar cuántos números terminan en 5.
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(){
	
//Variables

	int n1,cont;
	
	cont=0;

//Ingreso de datos
	
	printf("Se contaran y mostrara el resultado de los terminados en 5\n\n");
	
	do{
		
		printf("\nIngrese un valor: ");
		scanf("%d",&n1);
		fflush(stdin);
		
		if(n1!=0){

//Proceso

			if(n1%10==5){
				
				cont++;
				
			}
			
		}
		
	}while(n1!=0);

//Salida de datos

	printf("\nLa cantidad de n%cmeros terminados en 5 es: %d",163,cont);

//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;
	
}
