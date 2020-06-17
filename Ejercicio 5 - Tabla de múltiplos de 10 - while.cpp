/*Solicitarle al usuario que ingrese un número (n) que representa la cantidad de múltiplos de diez que desee visualizar en pantalla.
Visualizar por pantalla lo siguiente:
			10.1 = 10
			10.2 = 20
			10.3 = 30
			10.n = 10n
UTILIZAR SENTENCIA DE REPETICIÓN WHILE*/
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(){
	
//Variables
	
	int n,multi;
	
	n=1;

//Ingreso de datos
	
	printf("Ingrese cantidad de m%cltiplos de 10 que desea mostrar.\n\n",163);
	
	printf("Ingrese el valor: ");
	scanf("%d",&multi);
	fflush(stdin);
	printf("\n\n");

//Salida de datos
	
	while(n<=multi){
		
		printf("10*%d = %d\n",n,n*10);
		
		n++;
		
	}

//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;
	
}
