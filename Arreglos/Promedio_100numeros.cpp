/*
Ciclo for - Array
Programa que promedia 100 números, se guardan los valores
Autor MARH
11.11.2021
*/

#include <stdio.h>
#include <conio.h>

main(){
	int N,i;//N es el número de promedio, n son los elementos del promedio
	float n[100],prom;
	
	do{
	printf("¿Cuántos números se van a promediar? (Máximo 100 números)");
	scanf("%d",&N);
	} while(N<1 || N>100)
	
	prom=0;//Definimos valor inicial del promedio, cuando no hay valores - Inicializamos variable acumulador
	
	for(i=0;i<N;i++){//Condicionamos el ciclo (interacción=1;mientras i sea menor a N;aumenta(+1) a la interacción i)
        printf("Escribe un número: ");
        scanf("%f",&n);
        prom+=n;//Forma de escribir que el promedio será igual a la suma de los n valores, también se puede escribir como: prom=prom+n
    }
    prom/=i;//Dividimos el promedio entre el número de interacciones 
    
    printf("\nEl promedio es: %f",prom);
    getch();
}

//Poco recomendable de hacer, se reservan 100 espacios de memoria que puede o no que las usemos, mal optimizado.
