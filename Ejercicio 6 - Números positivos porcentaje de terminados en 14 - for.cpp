//Solicitarle al usuario que ingrese 10 números enteros positivos  Visualizar el porcentaje de esos números que terminen en 14
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(){
	
//Variables
	
	const int TOTAL=10;
	int i, n1,cont;
	float porc;
	
	cont=0;
	
//Ingreso de datos
	
	printf("Se indicara la cantidad en porcentaje de n%cmeros terminados en 14\n\n",163);
	
	for(i=0;i<=TOTAL;i++){
		
		do{
			
			printf("\nIngrese un valor: ");
			scanf("%d",&n1);
			fflush(stdin);
			
			if(n1<0){
				
				printf("\nValor incorrecto, ingrese un n%cmero positivo.",163);
				
			}
			
		}while(n1<0);
	
		if(n1%100==14){
		
			cont++;
		
		}
		
	}

//Proceso
	
	porc=cont*TOTAL;

//Salida de datos

	printf("\n\nEl porcentaje de n%cmeros terminados en 14 es: %.2f%c",163,porc,37);

//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;
	
}
