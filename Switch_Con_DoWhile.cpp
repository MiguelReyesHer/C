/*
Control de flujo Switch dentro de un ciclo Do-While
Programa que dice qu� d�a de la semana pertenece a su n�mero empezando por Lunes;
ej. Lunes = 1, Martes = 2, etc...
Autor MARH
05.11.2021
*/

#include <stdio.h>
#include <conio.h>

main(){
	int DIA;
	char op;

	do{
		printf("\nEscribe un n�mero entero entre 1 y 7: ");
		scanf("%d",&DIA);
	
		switch(DIA){
			case 1: printf("El dia es Lunes");//Agregamos los casos que tendremos
				break;//Rompe el flujo, termina con el programa, aplicable para switch, if, else, etc.
			case 2: printf("El d�a es Martes");
				break;
			case 3: printf("El d�a es Mi�rcoles");
				break;
			case 4: printf("El d�a es Jueves");
				break;
			case 5: printf("El d�a es Vierness");
				break;
			case 6: printf("El d�a es S�bado");
				break;
			case 7: printf("El d�a es Domingo");
				break;
			default: printf("N�mero de d�a inv�lido");//Equivalente a Else	
		}
		
		printf("\n�Desea intentarlo de nuevo? (S/N)");
		op=getche();
		
	}while(op=='S' || op=='s');
													
}
