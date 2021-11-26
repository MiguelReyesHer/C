/*
Programa que calcula el área y perímetro de un cículo, triángulo, cuadrado y rectángulo con menú de opciones 
@Autor: MARH
@Date: 26.11.2021
*/

#include <stdio.h>
#include <conio.h>

main(){
	float a, b, c, h, pi, Ar, Pe;
	int ope;
	char o;
	
	pi=3.1416;
	
	printf("Bienvenido a la calculadora de area y perimetro de figuras");
	
	do{
		printf("\n\n\nMENU");
        printf("\n\n1. Circulo");
        printf("\n2. Rectangulo");
        printf("\n3. Cuadrado");
        printf("\n4. Triangulo");
        printf("\n\nSelecciona una figura: ");
		scanf("%d",&ope);
		
			switch(ope){//Casos para cada figura
				case 1:
					printf("\nIngresa el radio del circulo: ");
					scanf("%f",&a);
					if(a>0){//Condición que tiene cada caso, para que se otorge un valor aceptado
						Ar=(a*a)*(pi);//área
						Pe=(2*pi)*a;//Perímetro
						printf("\nEl area del circulo es %f y su perimetro %f",Ar,Pe);
					}
					else{
						printf("\nLos valores dados no coinciden con un circulo: ");//Si no se otorgan los valores adecuados	
					}
					break;
				case 2:
					printf("\nIngresa la base del rectangulo: ");
					scanf("%f",&a);
					printf("\nIngresa la altura del rectangulo: ");
					scanf("%f",&b);	
					if(a>0){
						Ar=b*a;
						Pe=(2*b)+(2*a);
						printf("\nEl area del rectangulo es %f y su perimetro %f",Ar,Pe);
					}
					else{
						printf("\nLos valores dados no coinciden con un rectangulo: ");
					}
					break;
				case 3:
					printf("\nIngrese el valor de un lado del cuadrado: ");
					scanf("%f",&a);
					if(a>0){
						Ar=a*a;
						Pe=4*a;
						printf("\nEl area del cuadrado es %f y su perimetro %f",Ar,Pe);
					}
					else{
						printf("\nLos valores dados no coinciden con un cuadrado: ");
					}
					break;
				case 4:
					printf("\nIngrese la base del triangulo: ");
					scanf("%f",&b);
					printf("\nIngrese la altura del triangulo: ");
					scanf("%f",&h);
					printf("\nIngrese el lado a del triangulo: ");
					scanf("%f",&a);
					printf("\nIngrese el lado c del triangulo: ");
					scanf("%f",&c);
					if(a,b,c,h>0){
						Ar=(b*h)/2;
						Pe=a+b+c;
						printf("\nEl area del triangulo es %f y su perimetro %f",Ar,Pe);
					}
					else{
						printf("\nLos valores dados no coinciden con un triangulo: ");
					}
					break;
				default: printf("\n\nDisculpe, no se mas figuras ):");
			}
			
		printf("\n\n\n¿Desea hacer otra operacion? (S/N) ");
		o=getche();
	}while(o=='S' || o=='s');
	
	printf("\n\n\n¡Que tenga buen dia!");	
}
