/*Realizar un programa que lea tres valores enteros que correspondan a una fecha. Utilizar tres variables con los siguientes nombres dia mes anio.
 Se pide un algoritmo de VALIDAR FECHA, visualizando si la fecha ingresada es correcta o incorrecta. Tener en cuenta que para el análisis del mes de febrero tendrán que tener en cuenta si el año es bisiesto o no (realizado en otra entrega)*/
 //Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(){
	
//Variables
	
	int dia,mes,anio;

//Ingreso de datos

	printf("Validaci%cn de fecha. Ingrese la fecha con el formato dd/mm/aaaa.\n\n",162);
		
	printf("Ingrese la fecha: ");
	scanf("%d/%d/%d",&dia,&mes,&anio);
	fflush(stdin);

//Salida de datos

	switch(mes){
		
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			
			if(dia>=1&&dia<=31){
				
				printf("\nLa fecha %d/%d/%d es v%clida.\n\n",dia,mes,anio,160);
				
			}else{
				
				printf("\nLa fecha %d/%d/%d es inv%clida.\n\n",dia,mes,anio,160);
				
			}
			
			
			break;
			
		case 4:
		case 6:
		case 9:		
		case 11:
			
			if(dia>=1&&dia<=30){
				
				printf("\nLa fecha %d/%d/%d es v%clida.\n\n",dia,mes,anio,160);
				
			}else{
				
				printf("\nLa fecha %d/%d/%d es inv%clida.\n\n",dia,mes,anio,160);
				
			}
		
		
			break;
		
		case 2:{
			
			if(anio%400==0||anio%4==0&&anio%100!=0){
				
				if(dia>=1&&dia<=29){
					
					printf("\nLa fecha %d/%d/%d es v%clida.\n",dia,mes,anio,160);
					printf("El a%co es bisciesto.\n\n",164);
					
				}else{
					
					printf("\nLa fecha %d/%d/%d es inv%clida.\n\n",dia,mes,anio,160);
					
				}
				
			}else{
				
				if(dia>=1&&dia<=28){
					
					printf("\nLa fecha %d/%d/%d es v%clida.\n",dia,mes,anio,160);
					printf("El a%co no es bisciesto.\n\n",164);
					
				}else{
					
					printf("\nLa fecha %d/%d/%d es inv%clida.\n\n",dia,mes,anio,160);
					
				}
				
			}
			
			break;
			
		}
		
		default: 
			
			printf("\n\nMes ingresado inv%clido. Debe ingresar del 1 al 12.\n\n",160);
		
	}

//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;
	
}
