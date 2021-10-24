/*
Programa que saluda al usuario
Elaboró: MARH
Fecha: 15/10/2021 
*/

#include <stdio.h> //Archivo de cabecera que incluye entradas y salidas estándar 
#include <conio.h> //Archivo que da control de las entradas y salidas
#include <string.h> //Esta librería se usa por si no funciona el "gets"

/*
Este es 
un comentario de
párrafo
*/

//Este es un comentario de línea

main () {
	printf ("Hola mundo. (Pesione la tecla ENTER)");
	getch (); //DAR CARACTER, NOS DA TIEMPO DE VISUALIZACION EN EL ARCHIVO .EXE
	
	char TUNOMBRE [10]; //DECLARA VARIABLE DE TIPO CARACTER {TAMAÑO DE LA VARIABLE EN BITES]
	printf ("\nEscribe tu nombre: "); //EL "\n" PERMITE UN SALTO ENTRE LOS PRINTF EN LA TERMINAL
	//scanf ("%s", TUNOMBRE); //LEE EL TECLADO {FORMATO}, %s = string. SE CAMBIÓ POR GETS PARA QUE LEA LOS ESPACIOS EN LOS NOMBRES.
	gets (TUNOMBRE); //PERMITE CONTATENAR CADENAS DE CARACTERES CON ESPACIOS
	printf ("Hola \t%s", TUNOMBRE); //EL "\t" PERMITE UN ESPACIO DE TABULACIÓN DENTRO DE LA TERMINAl
	getch ();
}
