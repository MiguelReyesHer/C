/*
Ciclo for
Programa que promedia N n�meros, el usuario asigna el valor de N
Autor MARH
11.11.2021
*/

#include <stdio.h>
#include <conio.h>

main(){
	int N,i;//N es el n�mero de promedio, n son los elementos del promedio
	float n,prom;
	
	printf("�Cu�ntos n�meros se van a promediar? ");
	scanf("%d",&N);
	
	prom=0;//Definimos valor inicial del promedio, cuando no hay valores - Inicializamos variable acumulador
	
	for(i=1;i<=N;i++){//Condicionamos el ciclo (interacci�n=1;mientras i sea menor o igual a N;aumenta(+1) a la interacci�n i)
        printf("Escribe un n�mero: ");
        scanf("%f",&n);
        prom+=n;//Forma de escribir que el promedio ser� igual a la suma de los n valores, tambi�n se puede escribir como: prom=prom+n
    }
    prom/=i-1;//Dividimos el promedio entre el n�mero de interacciones i-1, -1 porque i tiene un valor inicial de 1 y se incrementa por cada interacci�n
    
    printf("\nEl promedio es: %f",prom);
    getch();
}

//Mejor soluci�n de entre todos los programas relacionados al promedio 
