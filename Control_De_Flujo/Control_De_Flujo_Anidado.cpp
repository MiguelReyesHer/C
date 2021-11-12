/*
Control de flujo anidado Else-If
Programa que dice qué día de la semana pertenece a su número empezando por Lunes;
ej. Lunes = 1, Martes = 2, etc...
Autor MARH
05.11.2021
*/

#include <stdio.h>
#include <conio.h>

main(){
	int DIA;
	
	printf("Escribe un número entero entre 1 y 7: ");
	scanf("%d",&DIA);
	
	if (DIA==1) printf("El día es Lunes");
	else if (DIA==2) printf("El día es Martes");//Equivalente a Elif
	else if (DIA==3) printf("El día es Miércoles");
	else if (DIA==4) printf("El día es Jueves");
	else if (DIA==5) printf("El día es Viernes");
	else if (DIA==6) printf("El día es Sábado");
	else if (DIA==7) printf("El día es Dómingo");
		else printf("Número de día inválido");
								
	getch();					
}
