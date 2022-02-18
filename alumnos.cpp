/*
@autor:Reyes Hernández Miguel Ángel
Programa que realiza un reporte de las calificaciones de los alumnos de una clase
*/

#include <stdio.h>

float leeNumerof(float ci, float cf);
float buscaMayor(float *calificacion, int numCalificaciones);
float sumar (float *calificacion, int numCalificaciones);
int contar(float *calificacion, int numCalificaciones, float cantidad);
int calificar(float *calificacion, int max);

int main(){
    float calificacion[50], CalificacionMayor;
    int numCalificaciones, CalificacionesMayor;

    numCalificaciones=calificar(calificacion,50);
    CalificacionesMayor=contar(calificacion,numCalificaciones,6);
    CalificacionMayor=buscaMayor(calificacion,numCalificaciones);

    printf("\nReporte:\n");
    printf("Numero de calificaciones: %d\n",numCalificaciones);
    printf("Calificaciones de 6 o mas (Aprobados): %d\n",CalificacionesMayor);
    printf("Mayor calificacion: %.2f\n",CalificacionMayor);
    return 0;
}

float leeNumerof(float ci, float cf){
    float numero;
    do{
        scanf("%f",&numero);
    }while(numero < ci || numero > cf);
    return numero;
}

int calificar(float *calificacion, int max){
    char otro;
    int i=0;
    float numero;
    do{
      printf("\nRegistra la calificacion #%d: ",i+1);
      numero=leeNumerof(0,10);
      calificacion [i]=numero;
      i++;
      printf("Otra calificacion? (s/n): ");
      fflush(stdin);
      scanf("%c",&otro);
    }while (otro=='s'|| otro=='S');
    return i;
}

float sumar(float *calificacion, int numCalificaciones){
    int i;
    float suma=0;
    for(i=0;i<numCalificaciones;i++){
        suma=suma+calificacion[i];
    }
    return suma;
}

int contar(float *calificacion, int numCalificaciones, float cantidad){
    int i;
    float cuenta = 0;
    for(i=0;i<numCalificaciones;i++){
        if(calificacion[i]>=cantidad){
            cuenta++;
        }
    }
    return cuenta;
}

float buscaMayor(float *calificacion, int numCalificaciones){
    int i;
    float mayor=0; 
    for(i=0;i<numCalificaciones;i++){
        if(calificacion[i]>mayor){
            mayor=calificacion[i];
        }
    }
    return mayor;
}
