#include <stdlib.h>
#include <stdio.h>
//Funciones personaizadas:
int inicio (void);
void modificar (int ran1);
void final (void);
//Función principal:
int main (void){ int numero;
numero=inicio();
modificar(numero);
final();
return 0;}//fin de main();


//--Definición de funciones--:
//inicio:
int inicio (void){ int n;
printf("\nBienvenido.");getchar();
printf("\nPor favor, introduzca un número: ");scanf("%d", &n);fflush(stdin);

return n;}
//modificar:
void modificar (int ran1){ int mod=ran1;mod++;
printf("\n\nSimplemente se modificará en una unidad el valor \"%d\" introducido.", ran1);
getchar();getchar();
printf("\nAhora la variable introducida \"%d\" es \"%d\".", ran1, mod);
}//fin de modificar.
//final:
void final (void){
printf("\n\nGracias por utilizar el programa.\n\n\n");}
