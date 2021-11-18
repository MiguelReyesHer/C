/*
Ciclo for - se guardarán los números a promediar (Arreglos)
Programa que promedia n números, mientras el usuario conozca el valor de n
Autor MARH
11.11.2021
*/

#include <stdio.h>
#include <conio.h>
#define N 4//Definimos cuántos n números queremos promediar, indispensable para la condición del ciclo, el 4 se cambia por el los n números que ingresará el usuario - CONSTANTE

main(){
    float prom,n[N];//Identificador que hace referencia a variables de tipo flotante [Número de varianles a usar, en este caso N, definido como 4]
    int i;//i=interacciones, veces en la que se ejecuta el programa
    
    prom=0;//Definimos valor inicial del promedio, cuando no hay valore - Inicializamos variable acumulador
    
    for(i=0;i<N;i++){//Condicionamos el ciclo (interacción=0 (CHECAR ALMACENAMIENTO DE TIPOS DE DATOS FLOTANTES);mientras i sea menor a N;aumenta(+1) a la interacción i)
        printf("Escribe un número: ");
        scanf("%f",&n[i]);//Se escanea por cada interacción
        prom+=n[i];//Forma de escribir que el promedio será igual a la suma de los n valores, también se puede escribir como: prom=prom+n[i]
    }
    prom/=i;//Dividimos el promedio entre el número de interacciones
    
    printf("\nEl promedio es: %f",prom);//Imrimimos el promedio
    getch();
}

//Guardar los números nos puede servir para imprimirlos, o realizar otros cálculos como en estadística.
