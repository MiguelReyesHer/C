/*
Arreglo multidimensional
Programa que muestra las operaciones básicas con dos matrices de un tamaño menor a 10x10
Autor MARH
24.11.2021
*/

#include <stdio.h>
#include <conio.h>
#define N 10//Definimos a N, se usará para el tamaño de las matrices

main(){
	float A[N][N],B[N][N],C[N][N];//Matrices
	int ope,k,i,j,l,m,n,r;//índices de las matrices, excepto ope y k
	char op;//Respuesta a ¿Otra operación?

	printf("Bienvenido a la calculadora basica de matrices (De dimension maxima de %d x %d)",N,N);
	
	//El usuario define las dimensiones de las matrices
	do{//Ciclo para las dimensiones de la matriz A
        printf("\n\nEscriba los indices de la matriz A (Menores o iguales a %d): ",N);
        scanf("%d",&m);//Filas
        scanf("%d",&r);//Columnas
    }while(m<1 || m>N || r<1 || r>N);//Aseguramos que las matrices no excedan el límite establecido para m y n
    do{//Ciclo para las dimensiones de la matriz B
        printf("\nEscriba los indices de la matriz B (Menores o iguales a %d): ",N);
        scanf("%d",&l);
        scanf("%d",&n);
    }while(l<1 || l>N || n<1 || n>N);

    //Ciclos para que el usuario escriba los elementos de las matrices
	//Matriz A
	for(i=0;i<m;i++)//filas
        for(j=0;j<r;j++){//Columnas
            printf("\nEscriba el elmento %d,%d de la matriz A: ",i+1,j+1);//Lo último permite que se vaya cambiando la posición del elemento
            scanf("%f",&A[i][j]);//Guarda el elemento de acuerdo con la fila y columna establecida
        }
    //Matriz B
	for(i=0;i<l;i++)
        for(j=0;j<n;j++){
            printf("\nEscriba el elmento %d,%d de la matriz B: ",i+1,j+1);
            scanf("%f",&B[i][j]);
        }

	//Menú de la calculadora, muestra operaciones a realizar
	do{
		printf("\n\n\nMENU");
        printf("\n\n1. Suma.");
        printf("\n2. Resta.");
        printf("\n3. Multiplicacion.");
        printf("\n¿Que operacion desea realizar? ");
		scanf("%d",&ope);
	
		//Casos para cada operación
		switch(ope){
			case 1: 
				if(m==l || r==n){//Condición dada por las matrices, se debe cumplir para que se pueda sumar
					//Ciclo para definir a la matriz C
					for(i=0;i<m;i++)//Tamaño fila
		        	    for(j=0;j<n;j++){//Tamaño columna
		            	    C[i][j]=0;//Definimos a la matriz C como una matriz cero
		                	C[i][j]+=A[i][j]+B[i][j];//a la matriz C se le va a asignar la suma de C con la suma A+B (C=0+(A+B))
		            	}
		            //Mostramos resultados	
		        	printf("\n\n\nLa matriz resultante es: \n");
		        	for(i=0;i<m;i++){//Filas matriz A=B
		            	for(j=0;j<n;j++)//Columnas matriz A=B
		                	printf("%f\t",C[i][j]);//Se imprime la matriz
		                printf("\n");//Permite el espacio entre cada fila de la matriz
		        	}
		    	}
				else printf("\nEl tamaño de las matrices no permite su suma (No son de igual dimension)");//Caso en el que la operación no se pueda realizar
				break;//Rompe el flujo, termina con el programa
			
			case 2:
				if(m==l || r==n){//Condición dada por las matrices, se debe cumplir para que se pueda restar
					//Ciclo para definir a la matriz C
					for(i=0;i<m;i++)//Tamaño fila
		        	    for(j=0;j<n;j++){//Tamaño columna
		            	    C[i][j]=0;//Definimos a la matriz C como una matriz cero
		                	C[i][j]+=A[i][j]-B[i][j];//a la matriz C se le va a asignar la suma de C con la resta A-B (C=0+(A-B))
		            	}
		            //Mostramos resultados	
		        	printf("\n\n\nLa matriz resultante es: \n");
		        	for(i=0;i<m;i++){//Filas matriz A=B
		            	for(j=0;j<n;j++)//Columnas matriz A=B
		                	printf("%f\t",C[i][j]);//Se imprime la matriz
		                printf("\n");//Permite el espacio entre cada fila de la matriz
		        	}
				}
				else printf("\nEl tamaño de las matrices no permite su resta (No son de igual dimension)");//Caso en el que la operación no se pueda realizar
				break;
			
			case 3:
				if(r==l){//Condición dada por las matrices, se debe cumplir para que se pueda multiplicar
					//Ciclo para definir a la matriz C
					for(i=0;i<m;i++)//Tamaño fila
		        	    for(j=0;j<n;j++){//Tamaño columna
		            	    C[i][j]=0;//Definimos a la matriz C como una matriz cero
		                	for(k=0;k<l;k++)//Nos aseguramos de que se ejecute la siguiente instrucción
		                    	C[i][j]+=A[i][k]*B[k][j];//A la matriz C se le va a asignar la suma de C con el producto AB (C=0+(A*B))
		            	}
		         	//Mostramos resultados
		        	printf("\n\n\nLa matriz resultante es: \n");
		        	for(i=0;i<m;i++){//Filas matriz A
		            	for(j=0;j<n;j++)//Columnas matriz B
		                	printf("%f\t",C[i][j]);//Se imprime la matriz
		                printf("\n");//Permite el espacio entre cada fila de la matriz
					}
				}
				else printf("\nEl tamaño de las matrices no permite su multiplicacion");//Caso en el que la operación no se pueda realizar
				break;
			
			default: printf("\n\nDisculpe, no puedo realizar mas operaciones ):");//Opción por si selecciona una diferente a las mostradas en el menú	
		}
		
		printf("\n\n\n¿Desea hacer otra operacion? (S/N) ");
		op=getche();//Permite visualizar la tecla
		
	}while(op=='S' || op=='s');
	
	printf("\n\n\n¡Que tenga buen dia!");								
}
