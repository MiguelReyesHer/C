/*
Control de flujo
Programa que determina si un n�mero es par o impar
Elaboro MARH
28.10.2021
*/

#include <stdio.h>
#include <conio.h>

main(){
	//Indicamos nuestros tipos de datos
	int a;
	
	//Asignamos variables
	printf("Por favor, introduce un numero entero: ");
	scanf("%d",&a);
	
	//Control de flujo
	if (a%2==0) {//Primera condici�n
		printf("\n%d es par", a);
	}
	else {//Cualquier cosa que no cumpla la condici�n anterior
		printf("\n%d es impar", a);
	} //Se debe indicar el inicio y final de los m�dulos condicionales
	
	getch();
}
