#include <stdlib.h>
#include <stdio.h>
//Declaración de funciones:
int paridad (int ran1);
int inicio (void);
void final (void);
//Función principal:
int main (void){ int numero;
numero=inicio();
paridad(numero);
final();
return 0;}//Main

//--Definición de variables--:
//inicio():
int inicio (void){int tecleo;//Única variable local de la función inicio();
printf("\nBienvenido, se le pedirá un número para estudiar su paridad.\n");getchar();
printf("\nPor favor, introduzca un valor: ");scanf("%d", &tecleo);fflush(stdin);
return tecleo;}
//final():
void final (void){
printf("\n\nGracias por utilizar el programa.\n\n");}
//paridad():
int paridad (int ran1){ int resultado;
if((ran1%2) == 0){printf("\nEl número \"%d\" introducido es par.", ran1);}
if((ran1%2) != 0){printf("\nEl número \"%d\" introducido es impar.", ran1);}
}//finParidad
//--Fin de definición de funciones.
