/*
Ciclo dowhile
Programa que promedia n n�meros, el usuario desconoce el valor de n
Autor MARH
11.11.2021
*/

#include <stdio.h>
#include <conio.h>

main(){
    float n,prom;
    int i;
    char op;
    
    prom=0;//Se definen los valores iniciales de las variables
    i=0;
    
    do{
        printf("\nEscribe un n�mero: ");
        scanf("%f",&n);
        prom+=n;//Se suma el n�mero al promedio=0
        i++;//se incrementa el valor de la interacci�n, pues ya ha ocurridoo una vez
        printf("�Vas a escribir otro n�mero?: (S/N) ");//preguntamos si va a promediar otro n�mero
        op=getche();
    }while(op=='s' || op=='S');//Condicionamos para que se siga ejecutando o se detenga
    prom/=i;//El promedio se divide entre el numero de ejecuciones i=Nn�meros
    
    printf("\nEl promedio es: %f",prom);
    getch();
}
