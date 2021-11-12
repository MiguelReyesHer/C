/*
Ciclo dowhile con control de flujo if
Programa que promedia 6 calificaciones en una escala del 0 al 10
Autor MARH
11.11.2021
*/

#include <stdio.h>
#include <conio.h>

main(){
    float prom,p,s,g,a,co,ca;
    
    do{//Ciclo para cada calificación
        printf("Escribe la calificación de la materia Programación: ");
        scanf("%d",&p);
        if (p<=0 || p>10) printf("Calificación incorrecta\n");//Mostramos error por si la calificación excede la escala de evaluación
    }while(p<0 || p>10);//Restringimos el valor de la calificación para que únicamente se acepte [0-10], se repite por si hubo un missclic
    
    do{
        printf("Escribe la calificación de la materia Simulación: ");
        scanf("%d",&s);
        if (s<0 || s>10) printf("Calificación incorrecta\n");
    }while(s<0 || s>10);
    
    do{
        printf("Escribe la calificación de la materia Geometría: ");
        scanf("%d",&g);
        if (g<0 || g>10) printf("Calificación incorrecta\n");
    }while(g<0 || g>10);
    
    do{
        printf("Escribe la calificación de la materia Álgebra: ");
        scanf("%d",&a);
        if (a<0 || a>10) printf("Calificación incorrecta\n");
    }while(a<0 || a>10);
    
    do{
        printf("Escribe la calificación de la materia Comunicación: ");
        scanf("%d",&co);
        if (co<0 || co>10) printf("Calificación incorrecta\n");
    }while(co<0 || co>10);
    
    do{
        printf("Escribe la calificación de la materia Cálculo: ");
        scanf("%d",&ca);
        if (ca<0 || ca>10) printf("Calificación incorrecta\n");
    }while(ca<0 || ca>10);
    
    prom=(p+s+g+a+co+ca)/(float)6;//(Suma las calificaciones) y las divide entre 6 para calcular el promedio
    
    printf("El promedio de las calificaciones es: %f",prom);
    getch();
}
