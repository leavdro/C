#include <stdlib.h>
#include <stdio.h>

int main (void){
//Declaro la variable:
int a; //Sólo necesitaré una variable para ésta operación.
//Pido al usuairo un número:
printf("\nPor favor, teclee un número: ");scanf("%d", &a);fflush(stdin);
//(gracias al símbolo reservado ';', puedo obviar los espacios).
//Muestro al usuario el cuadrado del número escaneado:
printf("\nHas introducido el valor \'%d\' y su cuadrado es \'%d\'.\n", a, a*a);
//Puedo realizar una operación en la propia función printf();

return 0;
}
