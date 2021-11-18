/*
Ciclo for, los valores no se guardan, suponemos que el usuario no los usará
Programa que promedia n números, mientras el usuario conozca el valor de n
Autor MARH
11.11.2021
*/

#include <stdio.h>
#include <conio.h>
#define N 3//Definimos cuántos n números queremos promediar, indispensable para la condición del ciclo, el 3 se cambia por el los n números que ingresará el usuario

main(){
    float n,prom;
    int i;//i=interacciones, veces en la que se ejecuta el programa
    
    prom=0;//Definimos valor inicial del promedio, cuando no hay valores
    
    for(i=1;i<=N;i++){//Condicionamos el ciclo (interacción=1;mientras i sea menor o igual a N;aumenta(+1) a la interacción i)
        printf("Escribe un número: ");
        scanf("%f",&n);
        prom+=n;//Forma de escribir que el promedio será igual a la suma de los n valores, también se puede escribir como: prom=prom+n
    }
    prom/=i-1;//Dividimos el promedio entre el número de interacciones i-1, -1 porque i tiene un valor inicial de 1 y se incrementa por cada interacción
    
    printf("\nEl promedio es: %f",prom);
    getch();
}
