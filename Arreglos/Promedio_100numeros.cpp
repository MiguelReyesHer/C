/*
Ciclo for - Array
Programa que promedia 100 n�meros, se guardan los valores
Autor MARH
11.11.2021
*/

#include <stdio.h>
#include <conio.h>

main(){
	int N,i;//N es el n�mero de promedio, n son los elementos del promedio
	float n[100],prom;
	
	do{
	printf("�Cu�ntos n�meros se van a promediar? (M�ximo 100 n�meros)");
	scanf("%d",&N);
	} while(N<1 || N>100)
	
	prom=0;//Definimos valor inicial del promedio, cuando no hay valores - Inicializamos variable acumulador
	
	for(i=0;i<N;i++){//Condicionamos el ciclo (interacci�n=1;mientras i sea menor a N;aumenta(+1) a la interacci�n i)
        printf("Escribe un n�mero: ");
        scanf("%f",&n);
        prom+=n;//Forma de escribir que el promedio ser� igual a la suma de los n valores, tambi�n se puede escribir como: prom=prom+n
    }
    prom/=i;//Dividimos el promedio entre el n�mero de interacciones 
    
    printf("\nEl promedio es: %f",prom);
    getch();
}

//Poco recomendable de hacer, se reservan 100 espacios de memoria que puede o no que las usemos, mal optimizado.
