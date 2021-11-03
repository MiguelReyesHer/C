/*
Control de flujo
Programa que determina las raíces de una ecuación cuadrática usando la formula:
x1,2 = (-b +- raízcuadrada(-b^2 - (4ac)) / (2a)
Elaboro MARH
28.10.2021
*/

#include <stdio.h>
#include <conio.h>
#include <math.h>

main(){
	//Indicamos nuestros tipos de datos
	float a,b,c,d,x1,x2;
	
	//Asignamos variables
	printf("Escribe el coeficiente del termino cuadratico: ");
	scanf("%f",&a);
	printf("\nEscribe el coeficiente del termino lineal: ");
	scanf("%f",&b);
	printf("\nEscribe el coeficiente del termino independiente: \n");
	scanf("%f",&c);
	
	printf("\nLas raices de la ecuacion %fx^2 + %fx + %f = 0 son:",a,b,c);//Mostramos enunciado de la respuesta
	
	d=(b*b)-(4*a*c);//Calculamos el determinante para saber si la ecuación tiene o no raíces
	
	//Control de flujo
	if (d<0) {//Primera condición, números complejos
		x1=-b/(2*a); //	Calculamos raíces complejas
		x2=sqrt(-d)/(2*a);
		printf("\nx1 = %f - %fi",x1,x2);//Mostramos resultados
		printf("\nx1 = %f + %fi",x1,x2);
	}
	else {//Cualquier cosa que no cumpla la condición anterior, números enteros positivos
		x1=(-b-sqrt(d))/(2*a);//Calculamos raíces
		x2=(-b+sqrt(d))/(2*a);
		printf("\nx1 = %f",x1);
		printf("\nx2 = %f",x2);//Mostramos resultados
	} 
	
	getch();
}
