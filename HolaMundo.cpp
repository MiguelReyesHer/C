/*
Programa que saluda al usuario
Elabor�: MARH
Fecha: 15/10/2021 
*/

#include <stdio.h> //Archivo de cabecera que incluye entradas y salidas est�ndar 
#include <conio.h> //Archivo que da control de las entradas y salidas
#include <string.h> //Esta librer�a se usa por si no funciona el "gets"

/*
Este es 
un comentario de
p�rrafo
*/

//Este es un comentario de l�nea

main () {
	printf ("Hola mundo. (Pesione la tecla ENTER)");
	getch (); //DAR CARACTER, NOS DA TIEMPO DE VISUALIZACION EN EL ARCHIVO .EXE
	
	char TUNOMBRE [10]; //DECLARA VARIABLE DE TIPO CARACTER {TAMA�O DE LA VARIABLE EN BITES]
	printf ("Escribe tu nombre: ");
	//scanf ("%s", TUNOMBRE); //LEE EL TECLADO {FORMATO}, %s = string. SE CAMBI� POR GETS PARA QUE LEA LOS ESPACIOS EN LOS NOMBRES.
	gets (TUNOMBRE); //PERMITE CONTATENAR CADENAS DE CARACTERES CON ESPACIOS
	printf ("Hola %s", TUNOMBRE);
	getch ();
}
