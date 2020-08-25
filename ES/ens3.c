#include <stdio.h>
#include <stdlib.h>

int main (void){
//Para ésta operación necesito dos variables.
int a, b;
//Pido ambos números al usuario:
printf("\nTeclee el dividendo: ");scanf("%d", &a);fflush(stdin);
printf("\nTeclee el divisor: ");scanf("%d", &b);fflush(stdin);
//Muestro el resto de la división (módulo) al usuario:
printf("\nEl resto de la división es '%d'.\n", a%b);
return 0;
}
