/*
Control de flujo anidado Else-If
Programa que dice qu� d�a de la semana pertenece a su n�mero empezando por Lunes;
ej. Lunes = 1, Martes = 2, etc...
Autor MARH
05.11.2021
*/

#include <stdio.h>
#include <conio.h>

main(){
	int DIA;
	
	printf("Escribe un n�mero entero entre 1 y 7: ");
	scanf("%d",&DIA);
	
	if (DIA==1) printf("El d�a es Lunes");
	else if (DIA==2) printf("El d�a es Martes");//Equivalente a Elif
	else if (DIA==3) printf("El d�a es Mi�rcoles");
	else if (DIA==4) printf("El d�a es Jueves");
	else if (DIA==5) printf("El d�a es Viernes");
	else if (DIA==6) printf("El d�a es S�bado");
	else if (DIA==7) printf("El d�a es D�mingo");
		else printf("N�mero de d�a inv�lido");
								
	getch();					
}
