/*
Ciclo for
Programa que promedia n n�meros, mientras el usuario conozca el valor de n
Autor MARH
11.11.2021
*/

#include <stdio.h>
#include <conio.h>
#define N 3//Definimos cu�ntos n n�meros queremos promediar, indispensable para la condici�n del ciclo, el 3 se cambia por el los n n�meros que ingresar� el usuario

main(){
    float n,prom;
    int i;//i=interacciones, veces en la que se ejecuta el programa
    
    prom=0;//Definimos valor inicial del promedio, cuando no hay valores
    
    for(i=1;i<=N;i++){//Condicionamos el ciclo (interacci�n=1;mientras i sea menor o igual a N;aumenta(+1) a la interacci�n i)
        printf("Escribe un n�mero: ");
        scanf("%f",&n);
        prom+=n;//Forma de escribir que el promedio ser� igual a la suma de los n valores, tambi�n se puede escribir como: prom=prom+n
    }
    prom/=i-1;//Dividimos el promedio entre el n�mero de interacciones i-1, -1 porque i tiene un valor inicial de 1 y se incrementa por cada interacci�n
    
    printf("\nEl promedio es: %f",prom);
    getch();
}
