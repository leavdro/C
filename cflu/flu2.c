#include <stdlib.h>
#include <stdio.h>

int main (void){
char deseo='n'; //variable que almacena un único valor (si|no).
int n; //Se estudiará la paridad de éste valor.
//Comenzamos el programa y preguntamos al final al usuario, si desea continuar:
do{printf("\nPor favor, teclee un número: ");scanf("%d", &n);fflush(stdin);

		if((n%2) == 0){printf("\nEl número introducido es par.");}
		if((n%2) != 0){printf("\nEl número introducido es impar.");}

printf("\nDesea continuar?(s|n)\n");scanf("1%c", &deseo);fflush(stdin);
}while(deseo != 's');//Se continuará mientras la variable "deseo" no sea distinta de 'n'.

return 0;}
