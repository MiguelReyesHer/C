/*
Ciclo for
Programa que promedia N números, el usuario asigna el valor de N
Autor MARH
11.11.2021
*/

#include <stdio.h>
#include <conio.h>

main(){
	int N,i;//N es el número de promedio, n son los elementos del promedio
	float n,prom;
	
	printf("¿Cuántos números se van a promediar? ");
	scanf("%d",&N);
	
	prom=0;//Definimos valor inicial del promedio, cuando no hay valores - Inicializamos variable acumulador
	
	for(i=1;i<=N;i++){//Condicionamos el ciclo (interacción=1;mientras i sea menor o igual a N;aumenta(+1) a la interacción i)
        printf("Escribe un número: ");
        scanf("%f",&n);
        prom+=n;//Forma de escribir que el promedio será igual a la suma de los n valores, también se puede escribir como: prom=prom+n
    }
    prom/=i-1;//Dividimos el promedio entre el número de interacciones i-1, -1 porque i tiene un valor inicial de 1 y se incrementa por cada interacción
    
    printf("\nEl promedio es: %f",prom);
    getch();
}

//Mejor solución de entre todos los programas relacionados al promedio 
