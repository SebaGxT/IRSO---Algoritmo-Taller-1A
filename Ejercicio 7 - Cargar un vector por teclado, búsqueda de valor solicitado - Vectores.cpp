//CARGAR UN VECTOR POR TECLADO CON 10 VALORES ENTEROS NO REPETIDOS (se confía en la entrada correcta) DESEADOS POR EL USUARIO, SOLICITARLE AL USUARIO QUE INGRESE UN VALOR A BUSCAR DENTRO DEL VECTOR ,VISUALIZAR SI SE ENCONTRÓ O NO ESE VALOR
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(){
	
//Variables
	
	const int ENT=10;
	int i,vec[ENT],n1;
	bool valid=false;
	
//Ingreso de datos
	
	printf("B%csqueda de valores en vector\n\n",163);
	
	for(i=0;i<ENT;i++){
		
		printf("\nIngrese un valor entero: ");
		scanf("%d",&vec[i]);
		fflush(stdin);
		
	}

//Proceso

	printf("\n\nIngrese el valor a buscar: ");
	scanf("%d",&n1);
	fflush(stdin);
	
	for(i=0;i<ENT;i++){
		
		if(n1==vec[i]){
			
			valid=true;
			
		}
		
	}

//Salida de datos
	
	if(valid){
		
		printf("\n\nSe encontro el valor buscado.\n");
		
	}else{
		
		printf("\n\nNo se encontro el valor buscado.\n");
		
	}
	
//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;
	
}
