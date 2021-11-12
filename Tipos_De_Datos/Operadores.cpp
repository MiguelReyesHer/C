/*
Operadores en C
Elaboró MARH
28.10.2021
*/

#include <stdio.h>
#include <conio.h>
#include <math.h>//Librería operadores aritméticos como pow

main (){
	//Indicamos nuestros tipos de datos
	int a,b; 
	float c,d; 
	
	//Operadores aritméticos: (^), (**), pow=power (ELEVADO A), %, /, *, -, +
	printf("Escribe un numero entero: ");
	scanf("%d",&a);//Lee nuestro valor y le asigna ese valor a "a"
	printf("Escribe otro numero entero: ");
	scanf("%d",&b);
	printf("Escribe un numero decimal: ");
	scanf("%f",&c);
	printf("Escribe otro numero decimal: ");
	scanf("%f",&d);
	printf("%d\t%d\t%d\t%d\t%d\n",a+b,a-b,a*b,a/b,a%b);//("usamos comodines y asignamos espacios", realizamos las operaciones)
	printf("%f\t%f\t%f\t%f\n",c+d,c-d,c*d,c/d); // "%" no es admitible para tipo flotante, sólo para enteros
	printf("%f\t%f\n",pow(a,2),pow(b,.5));//Elevado a
	printf("%f\t%f\n",pow(c,2),pow(d,.5));
	printf("%f\n",a+b/c-d*(b-a));//Lo realiza por orden: (), */, +-
	
	//Operadores relacionales: ==, != (NOT), <, >, <=, >=
	printf("\n%d\t%d\t%d\n",a<b,c>=a,b!=d);//Devuelve valor 1 si es TRUE ó 0 si es FALSE
	
	//Operadores lógicos: && (AND), || (OR), ! (NOT), ^ (XOR)
	printf("\n%d\n",((a<b)&&(c<d)));//Como en las compuertas lógicas, permite realizar álgebra booleana
	
	getch ();
}
