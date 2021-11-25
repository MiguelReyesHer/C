/*
Arreglo multidimensional
Programa que multiplica dos matrices
Autor MARH
24.11.2021
*/

#include <stdio.h>
#include <conio.h>
#define N 100//Definimos el límite del tamaño mn que tendrá la matriz

main(){
    float A[N][N],B[N][N],C[N][N];//Matrices
    int i,j,k,l,m,n,r;//índices de las matrices, excepto k

    do{
        printf("Escribe los índices de la matriz A (menores o iguales a %d): ",N);
        scanf("%d",&m);//Filas
        scanf("%d",&r);//Columnas
    }while(m<1 || m>N || r<1 || r>N);//Aseguramos que las matrices no excedan del límite establecido para m y n
    printf("\n");
    
    do{
        printf("Escribe los índices de la matriz B (menores o iguales a %d): ",N);
        scanf("%d",&l);
        scanf("%d",&n);
    }while(l<1 || l>N || n<1 || n>N);

    if(r==l){//Condición dada por las matrices, se debe cumplir para que se pueda multiplicar
        printf("\n\n\n");
        
        //Ciclo para escribir los elementos de la matriz A
		for(i=0;i<m;i++)//filas
            for(j=0;j<r;j++){//Columnas
                printf("Escribe el elmento %d,%d de la matriz A: ",i+1,j+1);//Lo último permite que se vaya asignando el valor del elemento
                scanf("%f",&A[i][j]);//Guarda el elemento de acuerdo con la fila y columna establecida
            }
        printf("\n");
        
        //Ciclo para escribir los elementos de la matriz B
		for(i=0;i<l;i++)
            for(j=0;j<n;j++){
                printf("Escribe el elmento %d,%d de la matriz B: ",i+1,j+1);
                scanf("%f",&B[i][j]);
            }

		//Ciclo para definir a la matriz C
        for(i=0;i<m;i++)//Tamaño fila
            for(j=0;j<n;j++){//Tamaño columna
                C[i][j]=0;//Definimos a la matriz C como una matriz cero
                for(k=0;k<l;k++)//Nos aseguramos que sse ejecute la siguiente instrucción
                    C[i][j]+=A[i][k]*B[k][j];//A la matriz C se le va a asignar la suma de C con el producto AB (C=0+AB)
            }

        printf("\n\n\nLa matriz resultante es: \n");
        for(i=0;i<m;i++){//Filas matriz A
            for(j=0;j<n;j++)//Columnas matriz B
                printf("%f\t",C[i][j]);//Se imprime la matriz
            printf("\n");
        }
    }
    else printf("\nEl tamaño de las matrices no permite su multiplicación");//Caso en el que la operación no se pueda realizar
    
	getch();
}
