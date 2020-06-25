//Leer una cadena de caracteres por teclado, Visualizar cuántas letras a ó A hay dentro de la cadena.
//Librerias
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

//Main
int main(){
	
//Variables
	
	const int CH=50;
	char vec[CH];
	int cmp,i;
	
	cmp=0;
	
//Ingreso de datos

	printf("Se contabilizara la cantidad de letras a en la cadena.\n\n");
	printf("Ingrese una palabra: ");
	gets(vec);
	fflush(stdin);

//Proceso
	
	for(i=0;vec[i]!='\0';i++){
		
		tolower(vec[i]);
		
		if(vec[i]=='a'){
			
			cmp++;
			
		}
		
	}

//Salida de datos
	
	printf("\n\nLa cantidad de letras A es: %d",cmp);

//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;
	
}
