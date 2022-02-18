#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
    float a,b,c;
    int elige;
    char op;

    do{
        printf("\nBienvenido, eliga una opcion:\n\nSuma pulsa (1)\nResta pulsa (2)\nMultiplicacion pulsa (3)\nDivision pulsa (4)\n");
        scanf("%d", &elige);

        switch(elige){
            case 1: 
                printf("\nIntroduce el primer numero: \n");
                scanf("%f", &a);
                printf("Introduce el segundo numero: \n");
                scanf("%f", &b);
                c=a+b;
                printf("El resultado de la suma es: %f\n", c);
                break;
            case 2:
                printf("\nIntroduce el primer numero: \n");
                scanf("%f", &a);
                printf("Introduce el segundo numero: \n");
                scanf("%f", &b);
                c=a-b;
                printf("El resultado de la resta es: %f\n", c);
                break;
            case 3:
                printf("\nIntroduce el primer numero: \n");
                scanf("%f", &a);
                printf("Introduce el segundo numero: \n");
                scanf("%f", &b);
                c = a*b;
                printf("El resultado de la multiplicacion es: %f\n", c);
                break;
            case 4:
                printf ("\nIntroduce el dividendo: \n");
                scanf ("%f", &a);
                printf ("Introduce el divisor: \n");
                scanf ("%f", &b);
                c=a/b;
                printf("El resultado de la division es: %f\n", c);
                break;
            default: printf("\nOpcion incorrecta\n");
        }
    
    printf ("¿Desea continuar? (s/n): \n");
    op=getche();

    }while (op=='S' || op=='s');

    system("pause");
    return 0;
}
