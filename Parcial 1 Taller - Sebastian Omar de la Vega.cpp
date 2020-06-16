//En una maderera se tienen 80 tablones que deben ser medidos. Ingresar la medida de los tablones e indicar cuántos tablones miden más de 4 metros. Mostrar los resultados.
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(){
	
//Variables
	
	const int TAB=80;
	int i,cont;
	float tablon;
	
//Iniciación de variables en 0
	
	cont=0;
	
//Ingreso de datos
	
	printf("Medici%cn de tablones, se indicara cuantos tiene mas de 4 metros.\n\n",162);
	printf("Puede ingresar la medida con 2 decimales.\n");
	
	for(i=0;i<TAB,i++){
		
		printf("\nIngrese el largo del tablon %d: ",i+1);
		scanf("%f",&tablon);
		fflush(stdin);

//Proceso
		
		if(tablon>=4.0){
			
			cont++;
			
		}
		
	}

//Salida de datos

	printf("\nLa cantidad de tablones mayor a 4 metros son: %d",cont);

//Pausa y fin de programa	
	
	printf("\n\n\n\n");
	system("pause");
	return 0;	
	
}
