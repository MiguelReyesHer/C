/*
@autor:Reyes Hernández Miguel Ángel
Programa que realiza un reporte de ventas de acuerdo con las ventas ingresadas en el programa
*/

#include <stdio.h>

float leeNumerof(float vi, float vf);
float buscaMayor(float *ventas, int numVentas);
float sumar (float *ventas, int numVentas);
int contar(float *ventas, int numVentas, float cantidad);
int vender(float *ventas, int max);

int main(){
    float ventas[200], montoln, totalCaja, vtaMayor;
    int numVentas, vtasMayor;

    printf("Registre el monto inicial de caja [0-1000]: ");

    montoln=leeNumerof(0,1000);
    numVentas=vender(ventas,200);
    totalCaja=sumar(ventas,numVentas)+montoln;
    vtasMayor=contar(ventas,numVentas,100);
    vtaMayor=buscaMayor(ventas,numVentas);

    printf("\nReporte:\n");
    printf("Monto total en caja: %.2f\n",totalCaja);
    printf("Numero de ventas: %d\n",numVentas);
    printf("Ventas de $100 o mas: %d\n",vtasMayor);
    printf("Monto de la venta mayor: %.2f\n",vtaMayor);
    return 0;
}

float leeNumerof(float vi, float vf){
    float numero;
    do{
        scanf("%f",&numero);
    }while(numero < vi || numero > vf);
    return numero;
}

int vender(float *ventas, int max){
    char otro;
    int i=0;
    float numero;
    do{
      printf("\nRegistra la venta #%d: ",i+1);
      numero=leeNumerof(0.5,2000);
      ventas [i]=numero;
      i++;
      printf("Otra venta? (s/n): ");
      fflush(stdin);
      scanf("%c",&otro);
    }while (otro=='s'|| otro=='S');
    return i;
}

float sumar(float *ventas, int numVentas){
    int i;
    float suma=0;
    for(i=0;i<numVentas;i++){
        suma=suma+ventas[i];
    }
    return suma;
}

int contar(float *ventas, int numVentas, float cantidad){
    int i;
    float cuenta = 0;
    for(i=0;i<numVentas;i++){
        if(ventas[i]>=cantidad){
            cuenta++;
        }
    }
    return cuenta;
}

float buscaMayor(float *ventas, int numVentas){
    int i;
    float mayor=0; //Cualquier valor será mayor que 0
    for(i=0;i<numVentas;i++){
        if(ventas[i]>mayor){
            mayor=ventas[i];
        }
    }
    return mayor;
}
