#include <stdlib.h>
#include <stdio.h>

int main (void){
//Declaración de variable/s:
int n;
//Interacción:
printf("\nPor favor, escriba un número: ");scanf("%d", &n);fflush(stdin);
//Análisis:
if ((n < 10)||(n > 10)){
	if(n < 10){printf("\nEl número \'%d\' es menor que 10.\n", n);}
	if(n > 10){printf("\nEl número \'%d\' es mayor que 10.\n", n);}
}else {printf("\nEl número es diez...\n");}
//Fin de programa.
return 0;
}
