#include <stdio.h>

int op,c;
float grados,centigrados,farenheit,IMC,altura,peso,edad;
char nombre[20], apellido[20];

int main(){
	
	printf("Este programa le permite utilizar dicersas opciones\n 1. Edad de una persona\n 2.IMC\n 3. Temperatura\n ");
	printf("Ingrese su opción: ");
	scanf("%d",&op);
	
	switch(op){
		case 1: 
			fflush(stdin);
			printf("ingrese su nombre: ");
		    gets(nombre);
		    printf("Ingrese su edad: ");
		    scanf("%d",&edad);
		    if(edad>=18)
		        printf("%s es mayor de edad", nombre);
    		else
       	 		printf("%s es menor de edad", nombre);
		break;
		case 2:
			fflush(stdin);
			printf("Ingrese su nombre: "); //pedir al usuario que ingrese su nombre
		    scanf ("%s",nombre); //leer el nombre
		    printf("Ingrese su apellido: "); //pedir al usuario que ingrese su apellido
		    scanf ("%s",apellido);//leer el apellido
		    printf("Ingrese su peso en kg: ");//pedir al usuario que ingrese su peso
		    scanf ("%f",&peso);//leer el peso
		    printf("Ingrese su altura en metros: ");//pedir al usuario que ingrese su altura
		    scanf("%f",&altura);//leer la altura
		    
		    IMC=peso/(altura*altura); //calculo de IMC
		    
		    printf("\n%s %s tiene un peso de %.2f kg y una altura de %.2f m. Esto implica que tiene un indice de masa corporal (IMC) igual a %.2f.",nombre,apellido,peso,altura,IMC);
		    //imprimir en pantalla resultados y datos personales
		    
		    if(IMC<16){
		        printf("\n%s %s tiene desnutrición grado 3",nombre, apellido);
		        if (IMC>16 && IMC<17){
		        printf("\n%s %s tiene desnutrición grado 2",nombre, apellido);
		            if (IMC>17 && IMC<18.5){
		            printf("\n%s %s tiene desnutrición grado 1",nombre, apellido);
		                if (IMC>18.5 && IMC<25){
		                printf("\n%s %s tiene un peso ideal",nombre, apellido);
		                    if (IMC>25 && IMC<30){
		                    printf("\n%s %s tiene obesidad grado 1",nombre, apellido);
		                        if (IMC>30 && IMC<35){
		                        printf("\n%s %s tiene obesidad grado 2",nombre, apellido);
		                        }
		                        if(IMC>35){
		                         printf("\n%s %s tiene obesidad grado 3",nombre, apellido);
		                        }
		                    }
		                }
		            }
		        }
		    }
		break;
		case 3:
			fflush(stdin);
			printf("1. De centigrados a farenheeit\n2. De Farenheit a Centigrados\n");
			printf("Escoja una opción: ");
			scanf("%f",&c);
			if(c==1){
				printf("Ingrese los grados centrigrados: ");
				scanf("%f",&grados);
				farenheit=(grados*9)/5+32;
				printf("Los grados en farenheit son: %.3f",farenheit);
			}
			else {
				if(c==2){
					printf("Ingrese los grados farenheit: ");
					scanf("%f",&grados);
					centigrados=(grados-32)*5/9;
					printf("Los grados en centigrados son: %.3f", centigrados);
				}
			}
		break;
		case 4:
			
		break;
		default:
			printf("Opción invalida. Ingrese nuevamente\n");
			
	}
	
	return(0);
}
