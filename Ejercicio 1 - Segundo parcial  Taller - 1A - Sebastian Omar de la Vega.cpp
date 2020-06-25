//Se pide cargar por teclado un vector con números enteros. Visualizar el valor máximo del vector.
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(){
	
//Variables
	
	const int N=5;
	int i,vec[N],mayor;

//Ingreso de datos
	
	for(i=0;i<N;i++){
		
		printf("\nIngrese un valor: ");
		scanf("%d",&vec[i]);
		fflush(stdin);
		
	}

//Proceso
	
	mayor=vec[0];
	
	for(i=0;i<N;i++){
		
		if(vec[i]>mayor){
			
			mayor=vec[i];
			
		}
		
	}

//Salida de datos

	printf("\n\nEl mayor es: %d",mayor);

//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;
	
}
