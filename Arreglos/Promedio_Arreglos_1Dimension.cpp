/*
Ciclo for - se guardar�n los n�meros a promediar (Arreglos)
Programa que promedia n n�meros, mientras el usuario conozca el valor de n
Autor MARH
11.11.2021
*/

#include <stdio.h>
#include <conio.h>
#define N 4//Definimos cu�ntos n n�meros queremos promediar, indispensable para la condici�n del ciclo, el 4 se cambia por el los n n�meros que ingresar� el usuario - CONSTANTE

main(){
    float prom,n[N];//Identificador que hace referencia a variables de tipo flotante [N�mero de varianles a usar, en este caso N, definido como 4]
    int i;//i=interacciones, veces en la que se ejecuta el programa
    
    prom=0;//Definimos valor inicial del promedio, cuando no hay valore - Inicializamos variable acumulador
    
    for(i=0;i<N;i++){//Condicionamos el ciclo (interacci�n=0 (CHECAR ALMACENAMIENTO DE TIPOS DE DATOS FLOTANTES);mientras i sea menor a N;aumenta(+1) a la interacci�n i)
        printf("Escribe un n�mero: ");
        scanf("%f",&n[i]);//Se escanea por cada interacci�n
        prom+=n[i];//Forma de escribir que el promedio ser� igual a la suma de los n valores, tambi�n se puede escribir como: prom=prom+n[i]
    }
    prom/=i;//Dividimos el promedio entre el n�mero de interacciones
    
    printf("\nEl promedio es: %f",prom);//Imrimimos el promedio
    getch();
}

//Guardar los n�meros nos puede servir para imprimirlos, o realizar otros c�lculos como en estad�stica.
