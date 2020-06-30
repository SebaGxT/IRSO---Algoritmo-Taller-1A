//Se pide cargar por teclado un vector con números enteros. Visualizar la suma de todos sus elementos en una última casilla auxiliar del vector.
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(){
	
//Variables
	
	int i,nelement,vec[nelement+1];

//Ingreso de datos
	
	printf("Suma de n%cmeros enteros\n\n",163);
	
	printf("Ingrese cantidad de elementos a sumar: ");
	scanf("%d",&nelement);
	fflush(stdin);
	
	for(i=0;i<nelement+1;i++){
		
		vec[i]=0;
		
	}
		
	for(i=0;i<nelement;i++){
		
		printf("\nIngrese un valor: ");
		scanf("%d",&vec[i]);
		fflush(stdin);

//Proceso
	
		vec[nelement+1]+=vec[i];
		
	}

//Salida de datos
	
	printf("\n\nLa suma de los n%cmeros es: %d",163,vec[nelement+1]);

//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;	
	
}
