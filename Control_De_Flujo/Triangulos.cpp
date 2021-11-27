/*
Programa que dice a partir  de 3 números, el tipo de triángulo con base en sus lados 
@Autor: MARH
@Date: 26.11.2021
*/

#include <stdio.h>
#include <conio.h>

main(){
	float a,b,c;
	char o;
	
	do{
		//Pedir valor de los lados
		printf("\nIngrese el lado 'a' del triangulo: ");
		scanf("%f",&a);
		printf("\nIngrese el lado 'b' del triangulo: ");
		scanf("%f",&b);
		printf("\nIngrese el lado 'c' del triangulo: ");
		scanf("%f",&c);
	
		//Tipos de triángulo
		if (a==b){
			if (b==c) printf("\nEl triangulo es equilatero, todos sus lados son iguales");
			else printf("\nEl triangulo es iscoceles, dos de sus lados son iguales");
		}
	    else if (a!=b) {
			if (b==c) printf("\nEl triangulo es iscoceles, dos de sus lados son iguales");
				else if (a==c) printf("\nEl triangulo es iscoceles, dos de sus lados son iguales");
					else printf("\nEl triangulo es escaleno, ninguno de sus lados son iguales");
	    }
		else printf("\nIngresa valores validos, por favor");
	         		
		printf("\n\n¿Intentar de nuevo?: (S/N) ");//preguntamos si va a intentar de nuevo
        o=getche();
	}while(o=='S' || o=='s');
}
