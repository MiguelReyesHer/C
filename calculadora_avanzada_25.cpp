//@autor:Reyes Hernández Miguel Ángel

#include <stdio.h>
#include <math.h>

void main(){
	float x,y,s,d,p,c,sr,rq,res,ros,cb,ch,co,cop,se,sep,ta,tap,cub,cubp,in,inp,lo,lop,ln,lnp;
	int opc;

	printf("Bienvenido a la calculadora de 25 funciones\n\n");

	do{
		printf("Por favor, introduzca un numero (0 para salir): ");
		scanf("%f",&x);
		printf("\nAhora, inserte otro: ");
		scanf("%f",&y);
		printf("\n\nBien. Ya puede seleccionar una opcion:\n\n1.Sumar\n2.Restar\n3.Multiplicar\n4.Dividir\n5.Indicar el mayor\n6.Raiz cuadrada del primer numero\n7.Raiz cuadrada del segundo numero\n8.Cuadrado del primer numero\n9.Cuadrado del segundo numero\n10.Raiz cubica del primer numero\n11.Raiz cubica del segundo numero\n12.Coseno del primer numero\n13.Coseno del segundo numero\n14.Seno del primer numero\n15.Seno del segundo numero\n16.Tangente del primer numero\n");
		printf("17.Tangente del segundo numero\n18.Cubo del primer numero\n19.Cubo del segundo numero\n20.Inversa del primer numero\n21.Inversa del segundo numero\n22.Logaritmo decimal del primer numero\n23.Logaritmo decimal del segundo numero\n24.Logaritmo neperiano del primer numero\n25.Logaritmo neperiano del segundo numero\n0.Salir\n\nUsted ha marcado: ");
		scanf("%d",&opc);

        if(opc==1){
            s=x+y;
            printf("La suma de ambos numeros es: %f\n\n",s);

        }
        else if(opc==2){
            d=x-y;
            printf("La diferencia de ambos numeros es: %f\n\n",d);
        }
        else if(opc==3){
            p=x*y;
            printf("El producto de ambos numeros es: %f\n\n",p);
        }
        else if(opc==4){
            c=x/y;
            printf("El cociente de la razon de ambos numeros es: %f\n\n",c);
        }
        else if(opc==5){
            if(x>y){
                printf("El numero mayor es: %f\n\n",x);
            }
            else if(y>x){
                printf("El numero mayor es: %f\n\n",y);
            }
            else{
                printf("Ambos numeros son iguales.\n\n");
            }
        }
        else if(opc==6){
            rq=sqrt(x);
            printf("La raiz cuadrada del primer numero es: %f\n\n",rq);
        }
        else if(opc==7){
            sr=sqrt(y);
            printf("La raiz cuadrada del segundo numero es: %f\n\n",sr);
        }
        else if(opc==8){
            res=x*x;
            printf("El cuadrado del primer numero es: %f\n\n",res);
        }
        else if(opc==9){
            ros=y*y;
            printf("El cuadrado del segundo numero es: %f\n\n",ros);
        }
        else if(opc==10){
            cb=cbrt(x);
            printf("La raiz cubica del primer numero es: %f\n\n",cb);
        }
        else if(opc==11){
            ch=cbrt(y);
            printf("La raiz cubica del segundo numero es: %f\n\n",ch);
        }
        else if(opc==12){
            co=cos(x);
            printf("El coseno del primer numero es: %f\n\n",co);
        }
        else if(opc==13){
            cop=cos(y);
            printf("El coseno del segundo numero es: %f\n\n",cop);
        }
        else if(opc==14){
            se=sin(x);
            printf("El seno del primer numero es: %f\n\n",se);
        }
        else if(opc==15){
            sep=sin(y);
            printf("El seno del segundo numero es: %f\n\n",sep);
        }
        else if(opc==16){
            ta=tan(x);
            printf("La tangente del primer numero es: %f\n\n",ta);
        }
        else if(opc==17){
            tap=tan(y);
            printf("La tangente del segundo numero es: %f\n\n",tap);
        }
        else if(opc==18){
            cub=x*x*x;
            printf("El cubo del primer numero es: %f\n\n",cub);
        }
        else if(opc==19){
            cubp=y*y*y;
            printf("El cubo del segundo numero es: %f\n\n",cubp);
        }
        else if(opc==20){
            in=1/x;
            printf("La inversa del primer numero es: %f\n\n",in);
        }
        else if(opc==21){
            inp=1/y;
            printf("La inversa del segundo numero es: %f\n\n",inp);
        }
        else if(opc==22){
            lo=log10(x);
            printf("El logaritmo decimal del primer numero es: %f\n\n",lo);
        }
        else if(opc==23){
            lop=log10(y);
            printf("El logaritmo decimal del segundo numero es: %f\n\n",lop);
        }
        else if(opc==24){
            ln=log(x);
            printf("El logaritmo neperiano del primer numero es: %f\n\n",ln);
        }
        else if(opc==25){
            lnp=log(y);
            printf("El logaritmo neperiano del segundo numero es: %f\n\n",lnp);
        }
        else if(opc==0){
            printf("Gracias por utilizar este programa.\n\n");
        }
        else{
            printf("Disculpe, se ha equivocado al marcar.\n\n");
        }
    }while(x!=0);
}
