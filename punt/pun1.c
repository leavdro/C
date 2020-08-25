#include <stdlib.h>
#include <stdio.h>

int main (void){

int puntero; //Una dirección  memoria es siempre de valor numérico.
char letra = 'X'; //Declaro la variable.
puntero=&letra; //Guardo la dirección de memoria de la variable en el puntero.

//Represento el estado de la memoria:
printf("\nLa dirección de memoria para la variable \"letra\" con el valor\n \'%c\', es: \"%d\"\n", letra, puntero);

return 0;
}
