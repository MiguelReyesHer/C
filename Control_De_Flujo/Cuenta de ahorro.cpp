/*
Menú de cuenta de ahorro
@autor: MARH
date: 10/02/20222
*/

#include <stdio.h>

int main(){
	
	int opc;
	float deposito, saldo=0, retiro;
	
	do{
		printf("\n\n\t Banco del ahorro \n");
		printf("1. Ingresar dinero en cuenta \n");
		printf("2. Retirar dinero de la cuenta \n");
		printf("3. Consultar el saldo \n");
		printf("4. Salir \n");
		printf("Opcion:  ");
		scanf("%d", &opc);
		
		switch(opc){
			case 1: printf("\nCuanto dinero desea ingresar en cuenta: ");
				scanf("%f", &deposito);
				saldo= saldo+deposito;
				printf("Depositado ...\n");
				break;
			case 2: printf("\nCuanto dinero desea retirar: ");
				scanf("%f", &retiro);
				if(retiro>saldo){
					printf("\nNo cuenta con esa cantidad\n");
					printf("Redirigiendo ...\n");
				}
				else{
					saldo=saldo-retiro;
					printf("Dinero retirado ...\n");
					if(saldo==0){
						printf("La cuenta esta en ceros ...\n");
					}
				}
				break;
			case 3: printf("Su saldo a la fecha es de %.2f pesos mxm", saldo);
				break;
			default: printf("Error en la Opcion, por favor digite [1, 2, 3, 4]\n");
		}
	}while(opc != 4);
	return 0;
}
