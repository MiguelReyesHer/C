/*
Ciclos
Autor MARH
05.11.2021
*/

#include <stdio.h>
#include <conio.h>

main(){
	int i,j;
	char op;
	
	//Ciclo for (Sabes cuando acaba) Condici�n de entrada
	//Sintaxs: for(ValorInicial;Condici�n(Mientras);Inclemento/Decrementos)
	for(i=0;i<10;i=i+1){//Las variables se pueden declarar dentro del ciclo, aunque algunos compiladores no lo permiten
		printf("%d\n",i);
	}//Este es un contador
	
	//Ciclo Do-while (No sabemos cuando acaba, se ejecuta al menos 1 vez) Condici�n de salida
	//Sintaxis: do{ \n<instrucciones> \n}while(<condici�n>);
	do{
		printf("\nEscribe un n�mero entero entre el 1 y 7: ");
		scanf("%d",&i);
	}while(i<1 || i>7);
	
	//Ciclo While (No sabemos cuando acaba, puede o no ejecutarse) Condici�n de entrada
	//Sintaxis: while(<condici�n>) { <Instrucciones> }
	op='S';//Hacemos la 1ra declaraci�n verdadera para que se ejecute al menos 1 vez
	while(op=='S' || op=='s'){
		printf("\nEscribe un numero entero: ");
		scanf("%d",&i);
		printf("\nEscribe otro numero entero: ");
		scanf("%d",&j);
		printf("\nLa suma de %d y %d es %d",i,j,i+j);
		printf("\n�Quieres hacer otra suma? (S/N) ");//Pregunta de ciclo
		op=getche(); //Permite visualizar la tecla
	}
	
	getch();//Este getch anula el getche del ciclo while
}
