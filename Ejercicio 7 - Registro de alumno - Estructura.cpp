/*Armar una estructura que albergue los datos de un alumno:

Nombre y apellido
Número de matrícula
Nombre de materia cursada
Nota de final
Declarar una variable de tipo estrutura armada

Ingresar los datos por teclado

Visualizar dichos datos*/
//Estructura
struct alumno{
	
	char nombre[50];
	int nmat,notafin;
	char nommat[50];
		
};

//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(){
	
//Variables
	
	alumno reg_alu;

//Ingreso de datos

	printf("Registro de alumno\n\n");
	
	do{
		
		printf("Ingrese el n%cmero de matr%cula: ",163,161);
		scanf("%d",&reg_alu.nmat);
		fflush(stdin);
		
		if(reg_alu.nmat<=0){
			
			printf("\nN%cmero incorrecto. Ingrese un valor positivo mayor a 0.\n\n",163);
			
		}
		
	}while(reg_alu.nmat<=0);
	
	printf("\nIngrese el nombre y apellido: ");
	gets(reg_alu.nombre);
	fflush(stdin);
	
	printf("\nIngrese el nombre de la materia: ");
	gets(reg_alu.nommat);
	fflush(stdin);
	
	do{
		
		printf("\nIngrese la nota final: ");
		scanf("%d",&reg_alu.notafin);
		fflush(stdin);
		
		if(reg_alu.notafin<=0||reg_alu.notafin>10){
			
			printf("\nValor incorrecto. Ingrese la nota del 1 al 10.\n\n");
			
		}
		
	}while((reg_alu.notafin<=0)||(reg_alu.notafin>10));

//Salida de datos

	printf("\n\nRegistro de alumno ingresado\n\n");
	printf("%d  %s  %s  %d",reg_alu.nmat,reg_alu.nombre,reg_alu.nommat,reg_alu.notafin);

//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;
	
}
