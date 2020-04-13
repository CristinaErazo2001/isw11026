#include <stdio.h>

int par,cont=1;

void main(){
	
	printf("\tLos numeros pares son: \n");
	
	while(cont<=10){
		par=par+2;
		printf("%d\n",par);
		cont++;
	}
}

