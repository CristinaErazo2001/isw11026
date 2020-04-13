#include <stdio.h>

char nombre[25], colegio[50], hobbies[50], gusto[50], disgusto[50], apellido[25], pasion[50]; 
int edad;

void main()
{
    printf("Ingrese sus nombres: ");
    fgets(nombre, 25, stdin);
    printf("Ingrese sus apellidos: ");
    fgets(apellido, 25, stdin);
    printf("Ingrese algo que le guste: ");
    fgets(gusto, 50, stdin);
    printf("Ingrese algo que le disguste: ");
    fgets(disgusto, 50, stdin);
    printf("Ingrese sus hobbies: ");
    fgets(hobbies, 50, stdin);
    printf("Ingrese su colegio: ");
    fgets(colegio, 50, stdin);
    printf("Ingrese su pasión: ");
    fgets(pasion, 50, stdin); 
    printf("Ingrese su edad: ");
    scanf("%d",&edad);
    
    //printf("Mi nombre es %s %s. Tengo %d años. Mis hobbies son %s y %s. Me gusta %s y no me gusta %s. Me gradue del colegio %s. Una de mis pasiones es %s", nombre, apellido, edad, hobbie1, hobbie2, gusto, disgusto, colegio, pasion);
    printf("Mis nombres son %s",nombre);
    printf("Mis apellidos son %s",apellido);
    printf("Tengo %d años\n",edad);
    printf("Mis hobbies son %s",hobbies);
    printf("Me gusta %s",gusto);
    printf("Lo que no me gusta es %s",disgusto);
    printf("Me gradue del colegio %s",colegio);
    printf("Mi pasion es %s",pasion);
}

