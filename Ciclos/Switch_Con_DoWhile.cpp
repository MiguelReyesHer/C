/*
Control de flujo Switch dentro de un ciclo Do-While
Programa que dice qué día de la semana pertenece a su número empezando por Lunes;
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
		printf("\nEscribe un número entero entre 1 y 7: ");
		scanf("%d",&DIA);
	
		switch(DIA){
			case 1: printf("El dia es Lunes");//Agregamos los casos que tendremos
				break;//Rompe el flujo, termina con el programa, aplicable para switch, if, else, etc.
			case 2: printf("El día es Martes");
				break;
			case 3: printf("El día es Miércoles");
				break;
			case 4: printf("El día es Jueves");
				break;
			case 5: printf("El día es Vierness");
				break;
			case 6: printf("El día es Sábado");
				break;
			case 7: printf("El día es Domingo");
				break;
			default: printf("Número de día inválido");//Equivalente a Else	
		}
		
		printf("\n¿Desea intentarlo de nuevo? (S/N)");
		op=getche();
		
	}while(op=='S' || op=='s');
													
}
