/*Armar una estructura que albergue los siguientes datos:

Número de artículo
Descripción
Stock
Precio unitario
Declarar una variable del tipo estructura anterior

Cargar esa variable con datos por teclado

Pedirle al usuario que ingrese la cantidad a comprar

Visualizar el costo de la compra si se puede realizar la misma o un cartel de imposibilidad de compra por falta de stock*/
//Librerias
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//Estructura
struct comercio{
	
	int nart,stock;
	float precio;
	char descrip[50];
	
};

//Main
int main(){

//Variables
	
	const int ARTICULOS=2;
	comercio mercaderia, mercad[ARTICULOS];
	int i,k,vc,pos,nart,cantidad;
	float venta;
	char confirma[2];
	bool valid=true;
	
//Iniciación de variables en 0
	vc=0;
	venta=0.0;
	
	for(i=0;i<ARTICULOS;i++){
		
		mercad[i].nart=0;
		mercad[i].precio=0.0;
		
	}
	
//Ingreso de datos

	printf("Ingreso de mercaderia\n\n");
	
	for(i=0;i<ARTICULOS;i++){
			
		do{
			
			do{
		
				printf("\n\nIngrese el n%cmero del artic%clo: ",163,163);
				scanf("%d",&nart);
				fflush(stdin);
			
				if(nart<=0){
				
					printf("\n\nDebe ingresar un valor positivo.\n\n");
				
				}
			
			}while(nart<=0);
				
			for(k=0;k<ARTICULOS;k++){
							
				if(nart==mercad[k].nart){
					
					vc=1;
		
				}
	
			}
			
			if(vc==1){
						
					//Mensaje de error
					printf("\n\nN%cmero de artic%clo ya existente, ingrese otro porfavor.\n\n",163,163);
					
					//Reinicia validador
					vc=0;
						
				}else{
					
					//Carga de número de articúlo en variable estructura
					mercaderia.nart=nart;
					
					//Cierra el ingreso de número de articúlo
					valid=false;
					
				}
				
		}while(valid);
		
		//Reseteo de variables para validación de venta
		valid=true;

		printf("\nIngrese descripci%cn del artic%clo: ",162,163);
		gets(mercaderia.descrip);
		fflush(stdin);
			
		do{
	
			printf("\nIngrese cantidad disponible en stock: ");
			scanf("%d",&mercaderia.stock);
			fflush(stdin);
			
			if(mercaderia.stock<0){
				
				printf("\n\nValor incorrecto. debe ingresar un n%cmero positivo.\n\n");
				
			}
			
		}while(mercaderia.stock<0);
		
		do{
			
			printf("\nIngrese el precio del artic%clo: ",163);
			scanf("%f",&mercaderia.precio);
			fflush(stdin);
			
			if(mercaderia.precio<=0){
				
				printf("\n\nValor incorrecto. debe ingresar un n%cmero positivo.\n\n",163);
				
			}
			
		}while(mercaderia.precio<=0);
		
		mercad[i].nart=mercaderia.nart;
		strcpy(mercad[i].descrip,mercaderia.descrip);
		mercad[i].stock=mercaderia.stock;
		mercad[i].precio=mercaderia.precio;
		
	}

//Proceso
	
	printf("\n\nVenta al cliente\n\n");
	
	do{
		
		//Cargar Número de articúlo para la venta
		do{
		
			printf("\n\nIngrese el n%cmero del artic%clo: ",163,163);
			scanf("%d",&nart);
			fflush(stdin);
		
			if(nart<=0){
			
				printf("\n\nValor incorrecto. debe ingresar un n%cmero positivo.\n\n",163);
			
			}
		
		}while(nart<=0);
			
		//Validar si existe el número de articúlo ingresado
		for(k=0;k<ARTICULOS;k++){
							
			if(nart==mercad[k].nart){
				
				//Validador	
				vc=1;
				
				//Posición del número de articúlo
				pos=k;
		
			}
	
		}
		
		if(vc==1){
			
			do{
					
				//Si existe se carga cantidad a comprar
				printf("\nIngrese cantidad: ");
				scanf("%d",&cantidad);
				fflush(stdin);
					
				if(cantidad<=0){
						
					printf("\n\nValor incorrecto. debe ingresar un n%cmero positivo.\n\n",163);
						
				}
							
			}while(cantidad<=0);
				
			//Salir del bucle si se cargo cantidad
			valid=false;
			
			//Reinicia validador
			vc=0;
			
		}else{
				
			//Mensaje de error al no existir número de articúlo
			printf("\n\nN%cmero de artic%clo incorrecto.\n\n",163,163);
				
			}
	
	}while(valid);
	
//Salida de datos
	
	if(cantidad>mercad[pos].stock){
		
		printf("\n\nNo se puede realizar la venta por falta de stock. Stock disponible: %d\n\n",mercad[pos].stock);
		
	}else{
		
		venta=cantidad*mercad[pos].precio;
		
		printf("\n\nSe puede realizar la venta. El total es %.2f\n\n",venta);
		
		printf("%cSe realizo la venta%c /Ingrese SI para confirmar o NO para cancelar: ",168,63);
		gets(confirma);
		fflush(stdin);
		
		for(i=0;i<2;i++){
			
			toupper(confirma[i]);	
			
		}
		
		if(strcmp(confirma,"SI")==0){
			
			mercad[pos].stock-=cantidad;
			printf("\n\nSe realizo la venta /Unidades: %d Total: %d. Stock disponible: %d\n\n",cantidad,venta,mercad[pos].stock);
			
		}else{
			
			printf("\n\nNo se realizo la venta. Stock disponible: %d\n\n",mercad[pos].stock);
			
		}
		
	}

//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;

}
