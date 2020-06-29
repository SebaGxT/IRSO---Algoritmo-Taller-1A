/*Realizar un programa que lea las medidas de una pared (base y altura). Se tiene un tipo de pintura a utilizar para pintar dicha pared que rinde 0,5 metros cuadrados por litro de pintura cuyo precio es $785 por litro.
 Realizar un programa que le solicite al usuario las medidas de la pared y que visualice el costo de pintar dicha pared */
 //Librerias
 #include <stdio.h>
 #include <stdlib.h>
 
//Main
int main(){

//Variables
	
	const int LITRO=785;
	const float PINTURA=0.5;
	float base,altura,superficie, costo;

//Ingreso de datos
	
	printf("Calculo de costo de pintura. Se solicita las medidas base y altura\n\n");
	
	printf("\nIngrese la base: ");
	scanf("%f",&base);
	fflush(stdin);
	
	printf("\nIngrese la altura: ");
	scanf("%f",&altura);
	fflush(stdin);

//Proceso

	superficie=base*altura;
	costo=(superficie*PINTURA)*LITRO;
	
//Salida de datos

	printf("\n\nEl costo para pintar la pared es: %.2f",costo);
	
//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;	

}
